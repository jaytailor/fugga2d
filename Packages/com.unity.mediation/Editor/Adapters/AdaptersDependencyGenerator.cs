using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Xml.Linq;
using PlayServicesResolver.Utils.Editor;
using UnityEditor;
using UnityEngine;

namespace Unity.Mediation.Adapters.Editor
{
    class AdaptersDependencyGenerator
    {
        const string k_FileName = "MediationAdapterDependencies.xml";
        const string k_DefaultFolder = "Assets/Editor";
        const string k_DefaultPath = k_DefaultFolder + "/" + k_FileName;

        const string k_IdentifierKey = "mediation-identifier";
        const string k_VersionKey = "mediation-version";

        string m_DependenciesPath;
        Regex m_MavenRegex;

        public virtual event Action AdaptersChanged;

        string GetDependenciesPath()
        {
            if (m_DependenciesPath != null)
            {
                if (File.Exists(m_DependenciesPath))
                {
                    m_DependenciesPath = EnsureDependenciesFileInEditorFolder(m_DependenciesPath);
                    return m_DependenciesPath;
                }
            }
            if (File.Exists(k_DefaultPath))
            {
                m_DependenciesPath = k_DefaultPath;
                return m_DependenciesPath;
            }
            var files = Directory.GetFiles("Assets", k_FileName, SearchOption.AllDirectories);
            if (files.Length > 0)
            {
                var file = files[0];
                file = EnsureDependenciesFileInEditorFolder(file);
                m_DependenciesPath = file;
                return m_DependenciesPath;
            }
            Directory.CreateDirectory(k_DefaultFolder);
            InstallOverrideAdapters(k_DefaultPath, new List<AdapterInfo>());
            m_DependenciesPath = k_DefaultPath;
            return m_DependenciesPath;
        }

        string GenerateXmlContent(List<AdapterInfo> adapters)
        {
            return (new XComment(" auto-generated. do not modify by hand. ") + Environment.NewLine +
                new XElement("dependencies",
                    new XElement("androidPackages",
                        new XElement("repositories",
                            new XElement("repository", "https://mediation-artifactory.stg.mz.internal.unity3d.com/artifactory/libs-release-local/")
                        ),
                        new XComment(" Mediation SDK Android Adapters "),
                        adapters.OrderBy(info => info.Identifier)
                            .Select(info => new XElement("androidPackage",
                                new XAttribute("spec", $"{info.AndroidArtifact}:{info.InstalledVersion}"),
                                new XAttribute(k_IdentifierKey, info.Identifier),
                                new XAttribute(k_VersionKey, info.InstalledVersion)
                            ))
                    ),
                    new XElement("iosPods",
                        //TODO: remove private repo
                        new XElement("sources",
                            new XComment(" Important! this is a private repository. Please reach out for access. "),
                            new XElement("source", "https://github.com/Unity-Technologies/mz-mediation-cocoapods")
                        ),
                        new XComment(" Mediation SDK iOS Adapters "),
                        adapters.OrderBy(info => info.Identifier)
                            .Select(info => new XElement("iosPod",
                                new XAttribute("name", info.IosPod),
                                new XAttribute(k_IdentifierKey, info.Identifier),
                                new XAttribute(k_VersionKey, $"~> {info.InstalledVersion}")
                            ))
                    )
                )
            ).Replace("&gt;", ">");
        }

        internal string GenerateXmlContentWithAllDependencies(List<AdapterInfo> adapters)
        {
            var sdkInfo = MediationSdkInfo.GetSdkInfo();

            return (new XComment(" auto-generated. do not modify by hand. ") + Environment.NewLine +
                new XElement("dependencies",
                    new XElement("androidPackages",
                        new XElement("repositories",
                            new XElement("repository", FindLocalMavenRepo())
                        ),
                        new XComment(" Mediation Android SDK "),
                        new XElement("androidPackage",
                            new XAttribute("spec", $"{sdkInfo.AndroidArtifact}:{sdkInfo.SdkVersion}"),
                            new XAttribute(k_IdentifierKey, sdkInfo.Identifier),
                            new XAttribute(k_VersionKey, sdkInfo.SdkVersion)
                        ),
                        new XComment(" Mediation SDK Android Adapters "),
                        adapters.OrderBy(info => info.Identifier)
                            .Select(info => new XElement("androidPackage",
                                new XAttribute("spec", $"{info.AndroidArtifact}:{info.InstalledVersion}"),
                                new XAttribute(k_IdentifierKey, info.Identifier),
                                new XAttribute(k_VersionKey, info.InstalledVersion)
                            ))
                    ),
                    new XElement("iosPods",
                        new XComment(" Mediation iOS SDK "),
                        new XElement("iosPod",
                            new XAttribute("name", sdkInfo.IosPod),
                            new XAttribute("path", FindPodSpecPath(sdkInfo.IosPod)),
                            new XAttribute(k_IdentifierKey, sdkInfo.Identifier),
                            new XAttribute(k_VersionKey, sdkInfo.SdkVersion)
                        ),
                        new XComment(" Mediation SDK iOS Adapters "),
                        adapters.OrderBy(info => info.Identifier)
                            .Select(info => new XElement("iosPod",
                                new XAttribute("name", $"{info.IosPod}"),
                                new XAttribute("path", FindPodSpecPath(info.IosPod)),
                                new XAttribute(k_IdentifierKey, info.Identifier),
                                new XAttribute(k_VersionKey, info.InstalledVersion)
                            ))
                    )
                )
            ).Replace("&gt;", ">");
        }

        string FindLocalMavenRepo()
        {
            var searchFolders = new[] { "Packages/com.unity.mediation", "Packages/com.unity.accelerate", "Assets" };
            string repo = null;
            foreach (var folder in searchFolders)
            {
                try
                {
                    repo = Directory.GetDirectories(folder, "*", SearchOption.AllDirectories)
                        .FirstOrDefault(IsPathLikeLocalMavenPath);
                    if (repo != null)
                    {
                        break;
                    }
                }
                catch (Exception)
                {
                    // ignored
                }
            }

            if (repo == null)
            {
                throw new FileNotFoundException($"Can't find local maven repository for Unity Mediation");
            }

            for (int i = 0; i < 4; i++)
            {
                repo = Path.GetDirectoryName(repo);
            }

            return repo;
        }

        internal bool IsPathLikeLocalMavenPath(string path)
        {
            if (m_MavenRegex == null)
            {
                m_MavenRegex = new Regex("Editor[\\\\/]Maven~[\\\\/]com[\\\\/]unity3d[\\\\/]mediation[\\\\/]mediation-sdk$");
            }

            return m_MavenRegex.IsMatch(path);
        }

        string FindPodSpecPath(string podName)
        {
            var searchFolders = new[] { "Packages/com.unity.mediation", "Packages/com.unity.accelerate", "Assets" };
            string podspec = null;
            foreach (var folder in searchFolders)
            {
                try
                {
                    podspec = Directory.GetFiles(folder, $"{podName}.podspec",
                        SearchOption.AllDirectories).FirstOrDefault();
                    if (podspec != null)
                    {
                        break;
                    }
                }
                catch (Exception)
                {
                    // ignored
                }
            }

            if (podspec == null)
            {
                throw new FileNotFoundException($"Can't find {podName}.podspec");
            }

            return Path.GetDirectoryName(podspec)?.Replace("\\", "/");
        }

        /// <summary>
        /// Get a list of adapters currently in use with Mediation SDK
        /// </summary>
        /// <returns>Returns a List of AdapterInfo</returns>
        public virtual List<AdapterInfo> GetInstalledAdapters()
        {
            var xmlPath = GetDependenciesPath();
            return GetInstalledAdapters(xmlPath);
        }

        internal List<AdapterInfo> GetInstalledAdapters(string xmlPath)
        {
            var needRegeneration = false;
            var sdkInfo = MediationSdkInfo.GetSdkInfo();
            var allAdapters = MediationSdkInfo.GetAllAdapters();
            var installedAdapters = new List<AdapterInfo>();
            var xmlDoc = XElement.Load(xmlPath);
            var xmlDeps = xmlDoc.Element("androidPackages")?.Elements("androidPackage");
            if (xmlDeps == null) return new List<AdapterInfo>();
            foreach (var element in xmlDeps)
            {
                var identifier = element.Attribute(k_IdentifierKey)?.Value;
                if (string.IsNullOrWhiteSpace(identifier))
                {
                    needRegeneration = true;
                    continue;
                }

                if (identifier.StartsWith(sdkInfo.Identifier))
                {
                    var sdkVersion = element.Attribute(k_VersionKey)?.Value;
                    if (sdkVersion != sdkInfo.SdkVersion)
                    {
                        needRegeneration = true;
                    }
                    //SDK component, not an adapter. Skip
                    continue;
                }

                var adapter = allAdapters.FirstOrDefault(info => info.Identifier == identifier);
                if (adapter == null)
                {
                    needRegeneration = true;
                    continue;
                }

                var version = element.Attribute(k_VersionKey)?.Value;
                if (!string.IsNullOrWhiteSpace(version) && adapter.Versions.Contains(version))
                {
                    adapter.InstalledVersion = version;
                }
                else
                {
                    adapter.InstalledVersion = adapter.Versions.First();
                    needRegeneration = true;
                }
                installedAdapters.Add(adapter);
            }

            if (needRegeneration)
            {
                InstallOverrideAdapters(xmlPath, installedAdapters);
            }

            return installedAdapters;
        }

        /// <summary>
        /// Installs or updates an adapter to specified version.
        /// If the adapter is already installed under a different version, the version will be updated.
        /// If version is not specified, latest available version will be installed.
        /// </summary>
        /// <param name="identifier">The identifier of the adapter</param>
        /// <param name="version">Version of the adapter, or null to use the latest</param>
        /// <exception cref="InvalidOperationException">Thrown if combination of identifier/version is not valid</exception>
        public virtual void InstallAdapter(string identifier, string version = null)
        {
            var xmlPath = GetDependenciesPath();

            InstallAdapter(identifier, version, xmlPath);
        }

        internal void InstallAdapter(string identifier, string version, string xmlPath)
        {
            var adapter = MediationSdkInfo.GetAllAdapters().FirstOrDefault(info => info.Identifier == identifier);
            if (adapter == null)
            {
                throw new InvalidOperationException($"Can't install adapter with identifier \'{identifier}\'");
            }

            if (version != null && !adapter.Versions.Contains(version))
            {
                throw new InvalidOperationException(
                    $"Can't install adapter with identifier \'{identifier}\': version \'{version}\' not available");
            }

            if (version == null)
            {
                version = adapter.Versions.Last();
            }

            var installedAdapters = GetInstalledAdapters(xmlPath);
            var installedAdapter = installedAdapters.FirstOrDefault(info => info.Identifier == identifier);
            if (installedAdapter != null)
            {
                if (installedAdapter.InstalledVersion == version) return;
                installedAdapter.InstalledVersion = version;
            }
            else
            {
                adapter.InstalledVersion = version;
                installedAdapters.Add(adapter);
            }

            InstallOverrideAdapters(xmlPath, installedAdapters);
        }

        /// <summary>
        /// Remove an existing adapter from Mediation.
        /// If adapter is already uninstalled, no action will take place.
        /// </summary>
        /// <param name="identifier">The identifier of the adapter</param>
        /// <exception cref="InvalidOperationException">Thrown if identifier is not valid</exception>
        public virtual void UninstallAdapter(string identifier)
        {
            var xmlPath = GetDependenciesPath();
            UninstallAdapter(identifier, xmlPath);
        }

        internal void UninstallAdapter(string identifier, string xmlPath)
        {
            var installedAdapters = GetInstalledAdapters(xmlPath);
            var adapter = installedAdapters.FirstOrDefault(info => info.Identifier == identifier);
            if (adapter != null)
            {
                installedAdapters.Remove(adapter);
                InstallOverrideAdapters(xmlPath, installedAdapters);
            }
        }

        void InstallOverrideAdapters(string xmlPath, List<AdapterInfo> adapters)
        {
            File.WriteAllText(xmlPath, GenerateXmlContentWithAllDependencies(adapters));
            AdaptersChanged?.Invoke();
        }

        public void InstallOverrideAdapters(List<AdapterInfo> adapters)
        {
            InstallOverrideAdapters(GetDependenciesPath(), adapters);
        }

        public void Apply(bool resolve = false)
        {
            AssetDatabase.ImportAsset(GetDependenciesPath());
#if UNITY_ANDROID
            if (resolve)
            {
                PlayServicesResolverUtils.ResolveIfNeeded();
            }
#endif
        }

        string EnsureDependenciesFileInEditorFolder(string file)
        {
            if (Array.IndexOf(file.Split(Path.DirectorySeparatorChar, Path.AltDirectorySeparatorChar), "Editor") == -1)
            {
                var editorFolder = Path.Combine(Path.GetDirectoryName(file), "Editor");
                var newPath = Path.Combine(editorFolder, k_FileName);
                Debug.LogWarningFormat("{0} is not inside an Editor folder. Moving to: '{1}'", k_FileName, newPath);
                Directory.CreateDirectory(editorFolder);
                File.Move(file, newPath);
                var metaFile = file + ".meta";
                if (File.Exists(metaFile))
                {
                    var newMetaPath = Path.Combine(editorFolder, k_FileName) + ".meta";
                    File.Move(metaFile, newMetaPath);
                }
                AssetDatabase.Refresh();
                file = newPath;
            }

            return file;
        }
    }
}
