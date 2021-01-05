using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace Unity.Mediation.Adapters.Editor
{
    [Serializable]
    class MediationInfo
    {
        public MediationInfo()
        {
            SdkInfo = new SdkInfo();
            Adapters = new AdapterInfo[0];
        }

        public SdkInfo SdkInfo;
        public AdapterInfo[] Adapters;

        public override string ToString()
        {
            return $"MediationInfo: {EditorJsonUtility.ToJson(this)}";
        }
    }

    [Serializable]
    class SdkInfo
    {
        /// <summary>
        /// SDK Identifier
        /// </summary>
        public string Identifier;

        /// <summary>
        /// SDK Display Name
        /// </summary>
        public string DisplayName;

        /// <summary>
        /// SDK Android artifact
        /// </summary>
        public string AndroidArtifact;

        /// <summary>
        /// SDK iOS Pod
        /// </summary>
        public string IosPod;

        /// <summary>
        /// Package version
        /// </summary>
        public string PackageVersion;

        /// <summary>
        /// Sdk version
        /// </summary>
        public string SdkVersion;
    }

    /// <summary>
    /// Information for a single Mediation Adapter
    /// </summary>
    [Serializable]
    class AdapterInfo
    {
        AdapterInfo()
        {
        }

        /// <summary>
        /// Identifier for this Adapter
        /// </summary>
        public string Identifier;

        /// <summary>
        /// Adapter Display Name
        /// </summary>
        public string DisplayName;

        /// <summary>
        /// Adapter Android artifact
        /// </summary>
        public string AndroidArtifact;

        /// <summary>
        /// Adapter iOS Pod
        /// </summary>
        public string IosPod;

        /// <summary>
        /// Installed Version for this Adapter
        /// </summary>
        public string InstalledVersion;

        /// <summary>
        /// Versions Available for this Adapter
        /// </summary>
        public string[] Versions;

        /// <summary>
        /// Returns Adapter Info
        /// </summary>
        /// <returns>string with adapter info</returns>
        public override string ToString()
        {
            return $"AdapterInfo: {EditorJsonUtility.ToJson(this)}";
        }

        public override bool Equals(object obj)
        {
            if (!(obj is AdapterInfo other)) return false;
            return Equals(other);
        }

        protected bool Equals(AdapterInfo other)
        {
            return Identifier == other.Identifier &&
                DisplayName == other.DisplayName &&
                AndroidArtifact == other.AndroidArtifact &&
                IosPod == other.IosPod &&
                InstalledVersion == other.InstalledVersion &&
                ArrayUtility.ArrayEquals(Versions, other.Versions);
        }

        public override int GetHashCode()
        {
            unchecked
            {
                var hashCode = (Identifier != null ? Identifier.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (DisplayName != null ? DisplayName.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (AndroidArtifact != null ? AndroidArtifact.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (IosPod != null ? IosPod.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (InstalledVersion != null ? InstalledVersion.GetHashCode() : 0);
                hashCode = (hashCode * 397) ^ (Versions != null ? Versions.GetHashCode() : 0);
                return hashCode;
            }
        }
    }

    /// <summary>
    /// Holds and Manages Adapter Information for Unity Mediation
    /// </summary>
    static class MediationSdkInfo
    {
        const string k_InfoFile = "MediationSdkInfo.json";

        internal static MediationInfo s_MediationInfo;

        internal static AdaptersDependencyGenerator s_Generator = new AdaptersDependencyGenerator();

        public static event Action AdaptersChanged
        {
            add => s_Generator.AdaptersChanged += value;
            remove => s_Generator.AdaptersChanged -= value;
        }

        static void LoadSdkInfoIfNeeded()
        {
            if (s_MediationInfo == null)
            {
                var infoPath = FindMediationSdkInfoPath();
                if (infoPath == null)
                {
                    throw new FileNotFoundException($"Can't find {k_InfoFile}");
                }

                var infoJson = File.ReadAllText(infoPath);
                s_MediationInfo = new MediationInfo();
                EditorJsonUtility.FromJsonOverwrite(infoJson, s_MediationInfo);
            }
        }

        internal static string FindMediationSdkInfoPath()
        {
            // Search for file in these folders.
            // TODO: search only in mediation after release
            var searchFolders = new[] { "Packages/com.unity.mediation", "Packages/com.unity.accelerate", "Assets" };
            string sdkInfoPath = null;
            foreach (var folder in searchFolders)
            {
                try
                {
                    sdkInfoPath = Directory.GetFiles(folder, k_InfoFile,
                        SearchOption.AllDirectories).FirstOrDefault();
                    if (sdkInfoPath != null)
                    {
                        break;
                    }
                }
                catch (Exception)
                {
                    // ignored
                }
            }

            return sdkInfoPath;
        }

        public static SdkInfo GetSdkInfo()
        {
            LoadSdkInfoIfNeeded();
            return s_MediationInfo.SdkInfo;
        }

        /// <summary>
        /// Get a list of all available adapters compatible with the current Mediation SDK
        /// </summary>
        /// <returns>Returns a List of AdapterInfo</returns>
        public static List<AdapterInfo> GetAllAdapters()
        {
            LoadSdkInfoIfNeeded();
            return new List<AdapterInfo>(s_MediationInfo.Adapters);
        }

        /// <summary>
        /// Get a list of adapters currently in use with Mediation SDK
        /// </summary>
        /// <returns>Returns a List of AdapterInfo</returns>
        public static List<AdapterInfo> GetInstalledAdapters()
        {
            return s_Generator.GetInstalledAdapters();
        }

        /// <summary>
        /// Installs or updates an adapter to specified version.
        /// If the adapter is already installed under a different version, the version will be updated.
        /// If version is not specified, latest available version will be installed.
        /// </summary>
        /// <param name="identifier">The identifier of the adapter</param>
        /// <param name="version">Version of the adapter, or null to use the latest</param>
        /// <exception cref="InvalidOperationException">Thrown if combination of identifier/version is not valid</exception>
        public static void Install(string identifier, string version = null)
        {
            s_Generator.InstallAdapter(identifier, version);
        }

        /// <summary>
        /// Remove an existing adapter from Mediation.
        /// If adapter is already uninstalled, no action will take place.
        /// </summary>
        /// <param name="identifier">The identifier of the adapter</param>
        /// <exception cref="InvalidOperationException">Thrown if identifier is not valid</exception>
        public static void Uninstall(string identifier)
        {
            s_Generator.UninstallAdapter(identifier);
        }

        /// <summary>
        /// Apply changes.
        /// Will cause the xml dependency file to be imported.
        /// If resolve is set to true, dependency resolution will be triggered.
        /// </summary>
        public static void Apply(bool resolve = false)
        {
            s_Generator.Apply(resolve);
        }
    }
}
