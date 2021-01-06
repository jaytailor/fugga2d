using System;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using NUnit.Framework;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;
using UnityEngine;
using PackageInfo = UnityEditor.PackageManager.PackageInfo;

namespace Unity.Mediation.EditorTests
{
    public class EditorTests
    {
        [Test]
        public void SdkInfoReadTest()
        {
            var version = MediationSdkInfo.GetSdkInfo().SdkVersion;
            Assert.NotNull(version, "Invalid SDK version");
            var adapters = MediationSdkInfo.GetAllAdapters();
            Assert.NotZero(adapters.Count, "No adapters were found");
        }

        [Test]
        public void SdkVersionMatchesPackageVersionTest()
        {
            Assert.AreEqual(GetPackageVersion(true), MediationSdkInfo.GetSdkInfo().SdkVersion, "Version mismatch");
            Assert.AreEqual(GetPackageVersion(), MediationSdkInfo.GetSdkInfo().PackageVersion, "Version mismatch");
        }

        [Test]
        public void AdapterVersionsMatchesPackageVersionTest()
        {
            var version = GetPackageVersion(true);
            var adapters = MediationSdkInfo.GetAllAdapters();
            foreach (var adapter in adapters)
            {
                Assert.Contains(version, adapter.Versions, "Adapter {0} does not contain version {1}",
                    adapter.DisplayName, version);
            }
        }

        [Test]
        public void PackageVersionMatchesProjectVersionTest()
        {
            //Only relevant for test projects. It's possible to run package tests in isolation, inside a new project
            EditorTestUtils.IgnoreIfNotInTestProject("Not running inside a test project");
            Assert.AreEqual(GetPackageVersion(), Application.version, "Project version not matching package version");
        }

        static string GetPackageVersion(bool noSuffix = false)
        {
#if UNITY_2019_4_OR_NEWER
            var version = PackageInfo.FindForAssembly(typeof(UnityMediation).Assembly).version;
#else
            var packageJsonFile = AssetDatabase.FindAssets("t:TextAsset")
                .Select(AssetDatabase.GUIDToAssetPath)
                .FirstOrDefault(path => path == "Packages/com.unity.mediation/package.json");
            var packageJson = new PackageJson();
            EditorJsonUtility.FromJsonOverwrite(File.ReadAllText(packageJsonFile), packageJson);
            var version = packageJson.version;
#endif
            if (noSuffix)
            {
                //Remove suffix e.g. 1.2.3-preview => 1.2.3
                if (version.Contains("-"))
                {
                    version = version.Substring(0, version.IndexOf("-"));
                }
            }
            return version;
        }

#if !UNITY_2019_4_OR_NEWER
        [Serializable]
        class PackageJson
        {
#pragma warning disable 0649
            public string version;
#pragma warning restore 0649
        }
#endif
    }
}
