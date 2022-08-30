using System;
using System.IO;
using System.Linq;
using NUnit.Framework;
using UnityEngine;
using MobileDependencyResolver.Utils.Editor;
using Unity.Services.Mediation.Adapters.Editor;
using UnityEditor;

namespace Unity.Services.Mediation.EditorTests
{
    public class MobileDependencyResolverResolutionTests
    {
        bool previousMainTemplateGradleSetting = false;
        BuildTarget previousBuildTarget;
        BuildTargetGroup previousBuildTargetGroup;

        const string k_PluginFolder = "Plugins";
        const string k_AndroidFolder = "Android";

        public static string[] s_AdapterLibraryPrefixes =
        {
            "com.unity3d.mediation.adcolony-adapter",
            "com.unity3d.mediation.admob-adapter",
            "com.unity3d.mediation.applovin-adapter",
            "com.unity3d.mediation.facebook-adapter",
            "com.unity3d.mediation.ironsource-adapter",
            "com.unity3d.mediation.unityads-adapter",
            "com.unity3d.mediation.vungle-adapter"
        };

        public static string[] s_SdkLibraryPrefix =
        {
            "com.unity3d.mediation.mediation-sdk-"
        };

        [SetUp]
        public void Setup()
        {
            previousMainTemplateGradleSetting = MobileDependencyResolverUtils.MainTemplateEnabled;
            previousBuildTarget = EditorUserBuildSettings.activeBuildTarget;
            previousBuildTargetGroup = EditorUserBuildSettings.selectedBuildTargetGroup;
        }

        [TearDown]
        public void TearDown()
        {
            MobileDependencyResolverUtils.MainTemplateEnabled = previousMainTemplateGradleSetting;
            if (!MobileDependencyResolverUtils.MainTemplateEnabled)
            {
                MobileDependencyResolverUtils.DeleteResolvedLibraries();
            }

            EditorUserBuildSettings.SwitchActiveBuildTarget(previousBuildTargetGroup, previousBuildTarget);
        }

        [Test]
        [TestCase("adapter")]
        [TestCase("sdk")]
        public void MobileDependencyResolverAdapterVersionDownloadTest(string testCase)
        {
            // Check to see if Platform Module is installed before running test.
            if (!IsBuildTargetInstalled(BuildTarget.Android))
            {
                Assert.Ignore("Platform not installed. Skipping Test");
            }

            // Set to download files in editor
            MobileDependencyResolverUtils.MainTemplateEnabled = false;

            // Set build target to Android
            EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);

            // Resolve: May freeze up editor for a bit.
            MobileDependencyResolverUtils.ResolveSync(true);

            // Choose a filter for library names based on the test performed.
            string[] prefixSource = testCase == "adapter" ? s_AdapterLibraryPrefixes : s_SdkLibraryPrefix;

            // Search Android Plugin Path and filter based on prefix source and ignore .meta files.
            var androidPluginPath = Path.Combine(Application.dataPath, k_PluginFolder, k_AndroidFolder);
            var androidPluginDirectory = new DirectoryInfo(androidPluginPath);
            string[] downloadedLibraries = androidPluginDirectory.GetFiles()
                .Select(file => file.Name)
                .Where(file => s_AdapterLibraryPrefixes.Any(file.StartsWith) && !file.EndsWith(".meta"))
                .ToArray();

            // Ensure All "installed" libraries were downloaded
            Assert.That(MediationSdkInfo.GetInstalledAdapters()
                .All(info => downloadedLibraries
                    .Any(libS => libS
                        .Contains(info.AndroidArtifact.Replace(":", "."))))
                , "All 'installed' libraries weren't downloaded");

            // Downloaded adapters look like : com.unity3d.mediation:adcolony-adapter-0.2.0
            // Retrieve version after last dash
            Version[] downloadedLibrariesVersions = downloadedLibraries
                .Select(libS => new Version(libS.Split('-').Last().Replace(".aar", "")))
                .ToArray();

            // [minVersion, maxVersion]
            Version[] legalVersionRange = VersionInfo
                .OptimisticVersion(SemanticVersioningType.Maven, MediationSdkInfo.GetSdkInfo().SdkVersion)
                .Replace("[", "")
                .Split(',')
                .Select(version => new Version(version))
                .ToArray();

            // Ensure all downloaded libraries are within proper range.
            Assert.That(downloadedLibrariesVersions.All(version => version >= legalVersionRange[0] && version < legalVersionRange[1])
                , "Some libraries are not within their proper version ranges.");
        }

        private bool IsBuildTargetInstalled(BuildTarget target)
        {
            var moduleManager = System.Type.GetType("UnityEditor.Modules.ModuleManager,UnityEditor.dll");
            var isPlatformSupportLoaded = moduleManager.GetMethod("IsPlatformSupportLoaded", System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.NonPublic);
            var getTargetStringFromBuildTarget = moduleManager.GetMethod("GetTargetStringFromBuildTarget", System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.NonPublic);

            return (bool)isPlatformSupportLoaded.Invoke(null,new object[] {(string)getTargetStringFromBuildTarget.Invoke(null, new object[] {target})});
        }
    }
}
