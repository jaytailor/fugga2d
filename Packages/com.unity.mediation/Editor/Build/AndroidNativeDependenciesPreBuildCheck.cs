#if UNITY_ANDROID
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using PlayServicesResolver.Utils.Editor;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace Unity.Mediation.Build.Editor
{
    class AndroidNativeDependenciesPreBuildCheck : IPreprocessBuildWithReport
    {
        const string k_PluginFolder = "Assets/Plugins/Android";
        const string k_GradleTemplatePath = k_PluginFolder + "/mainTemplate.gradle";

        const string k_InvalidSpecs = "It looks like some dependencies are outdated or missing. This might lead to a broken build. To solve this, double check the Mediation settings under Project Settings.";
        const string k_ResolveQuestion = "You can fix this issue by resolving dependencies again. Would you like to do that now?";
        const string k_InvalidTemplate = "It looks like 'mainTemplate.gradle' was not patched correctly. " + k_ResolveQuestion;
        const string k_InvalidPluginFiles = "It looks like there are a few files missing from '" + k_PluginFolder + "'. " + k_ResolveQuestion;
        const string k_PlayServicesResolverNotFound = "Play Services Resolver not detected in this project.\nThis might cause dependencies to be missing in your build.";

        enum UserAction
        {
            CancelBuild,
            ResolveDependenciesAndContinue
        }

        public int callbackOrder { get; }
        public void OnPreprocessBuild(BuildReport report)
        {
            if (report.summary.platform != BuildTarget.Android)
            {
                return;
            }

            // Since we display a dialog for the user, set noDialog to true if in batch mode
            ValidateDependencies(UnityEditorInternal.InternalEditorUtility.inBatchMode);
        }

        public void ValidateDependencies(bool noDialog)
        {
            if (!PlayServicesResolverUtils.IsPresent)
            {
                Debug.LogWarning(k_PlayServicesResolverNotFound);
                return;
            }

            var sdkInfo = MediationSdkInfo.GetSdkInfo();
            // Calling GetInstalledAdapters() should refresh the xml dependency file if needed.
            var installedAdapters = MediationSdkInfo.GetInstalledAdapters();
            var specs = PlayServicesResolverUtils.GetPackageSpecs();

            //Check xml generation
            if (!ValidateSpecs(sdkInfo, installedAdapters, specs))
            {
                //Should not happen, since a call to GetInstalledAdapters() refreshes outdated dependencies in the xml.
                if (!DisplayIssueDetectedDialog(noDialog, k_InvalidSpecs, UserAction.CancelBuild))
                    return;
            }

            //Check resolved artifacts
            if (PlayServicesResolverUtils.GradleTemplateEnabled)
            {
                if (!ValidateTemplateFile(sdkInfo, installedAdapters, k_GradleTemplatePath))
                {
                    if (!DisplayIssueDetectedDialog(noDialog, k_InvalidTemplate, UserAction.ResolveDependenciesAndContinue))
                        return;
                }
            }
            else
            {
                if (!ValidatePluginsFolder(sdkInfo, installedAdapters, k_PluginFolder))
                {
                    if (!DisplayIssueDetectedDialog(noDialog, k_InvalidPluginFiles, UserAction.ResolveDependenciesAndContinue))
                        return;
                }
            }
        }

        bool DisplayIssueDetectedDialog(bool noDialog, string issue, UserAction action)
        {
            switch (action)
            {
                case UserAction.CancelBuild:
                    if (noDialog || EditorUtility.DisplayDialog("Dependency issue detected",
                        "Issue with Android dependencies detected:\n" + issue +
                        "\nWould you like to cancel the build?", "Cancel build", "Ignore"))
                    {
                        throw new BuildFailedException("Build canceled");
                    }
                    return false;
                case UserAction.ResolveDependenciesAndContinue:
                    if (noDialog || EditorUtility.DisplayDialog("Dependency issue detected",
                        "Issue with Android dependencies detected:\n" + issue +
                        "\nWould you like to resolve dependencies before building?", "Resolve", "Ignore"))
                    {
                        PlayServicesResolverUtils.ResolveSync(false);
                        return true;
                    }
                    return false;
                default:
                    throw new ArgumentOutOfRangeException(nameof(action), action, null);
            }
        }

        /// <summary>
        /// Validate specs captured by PlayServicesResolver.
        /// They should be aligned with the current SDK version and installed adapters.
        /// </summary>
        bool ValidateSpecs(SdkInfo sdkInfo, List<AdapterInfo> installedAdapters, IList<KeyValuePair<string, string>> specs)
        {
            var sdkSpec = specs
                .Select(pair => pair.Key)
                .Where(s => s.StartsWith(sdkInfo.AndroidArtifact))
                .ToArray();

            //Check if SDK missing (or included multiple times for some reason)
            if (sdkSpec.Length != 1)
            {
                return false;
            }

            //Check if we have valid version
            if (sdkSpec.First() != $"{sdkInfo.AndroidArtifact}:{VersionInfo.OptimisticVersion(SemanticVersioningType.Maven,sdkInfo.SdkVersion)}")
            {
                return false;
            }

            foreach (var adapter in installedAdapters)
            {
                var adapterSpec = specs
                    .Select(pair => pair.Key)
                    .Where(s => s.StartsWith(adapter.AndroidArtifact))
                    .ToArray();

                //Check if adapter missing (or included multiple times for some reason)
                if (adapterSpec.Length != 1)
                {
                    return false;
                }

                //Check if we have valid version
                var adapterVersion = adapterSpec.First().Substring(adapterSpec.First().LastIndexOf(':') + 1);
                if (adapterVersion != SemanticVersioningFactory.Formatter(SemanticVersioningType.Maven).LatestVersionIdentifier() &&
                    !Array.Exists(adapter.Versions, x => x.Identifier == adapterVersion))
                {
                    return false;
                }
            }

            return true;
        }

        /// <summary>
        /// Ensures the SDK artifact and all installed adapters are included in the template file.
        /// </summary>
        bool ValidateTemplateFile(SdkInfo sdkInfo, List<AdapterInfo> installedAdapters, string templateFile)
        {
            if (!File.Exists(templateFile))
                return false;
            var templateFileContent = File.ReadAllText(templateFile);
            var isValid = ValidateTemplateDependency(sdkInfo.AndroidArtifact, sdkInfo.SdkVersion, templateFileContent);
            foreach (var adapter in installedAdapters)
            {
                isValid = isValid && ValidateTemplateDependency(adapter.AndroidArtifact, adapter.InstalledVersion.Identifier, templateFileContent);
            }
            return isValid;
        }

        /// <summary>
        /// Ensures the template file contains the artifact with the specific version.
        /// E.g. template file should contain com.unity3d.mediation:mediation-sdk:1.0.0
        /// </summary>
        bool ValidateTemplateDependency(string artifactName, string version, string templateFileContent)
        {
            var versionInfo = new VersionInfo { Identifier = version };
            return templateFileContent.Contains($"{artifactName}:{versionInfo.Version(SemanticVersioningType.Maven)}");
        }

        /// <summary>
        /// Ensures that the main SDK artifact `com.unity3d.mediation:mediation-sdk` and installed adapters are
        /// included in the plugins folder, and that they have valid versions.
        /// </summary>
        bool ValidatePluginsFolder(SdkInfo sdkInfo, List<AdapterInfo> installedAdapters, string pluginsFolder)
        {
            if (!Directory.Exists(pluginsFolder))
            {
                return false;
            }

            var plugins = Directory.GetFiles(k_PluginFolder)
                .Select(Path.GetFileNameWithoutExtension)
                .ToArray();

            var isValid = ValidatePluginFile(sdkInfo.AndroidArtifact, sdkInfo.SdkVersion, plugins);
            foreach (var adapter in installedAdapters)
            {
                isValid = isValid && ValidatePluginFile(adapter.AndroidArtifact, adapter.InstalledVersion.Identifier, plugins);
            }
            return isValid;
        }

        /// <summary>
        /// Ensures the list of files contains the plugin associated with an artifact.
        /// E.g. for artifact `com.unity3d.mediation:mediation-sdk` version `1.0.0`,
        /// there should be a `com.unity3d.mediation.mediation-sdk-1.0.0` in the files list
        /// </summary>
        bool ValidatePluginFile(string artifactName, string version, IEnumerable<string> files)
        {
            var filePrefix = $"{artifactName.Replace(":", ".")}";
            return files.Count(x => x.StartsWith(filePrefix)) > 0;
        }
    }
}
#endif
