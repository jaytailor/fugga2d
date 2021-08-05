using System;
using System.Collections;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using NUnit.Framework;
using Unity.Services.Mediation.Adapters.Editor;
using UnityEditor;
using UnityEngine;
using PackageInfo = UnityEditor.PackageManager.PackageInfo;

namespace Unity.Services.Mediation.EditorTests
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
            Assert.IsTrue(GetPackageVersion(true).StartsWith(MediationSdkInfo.GetSdkInfo().SdkVersion), "SdkVersion mismatch");
            Assert.AreEqual(GetPackageVersion(), MediationSdkInfo.GetSdkInfo().PackageVersion, "PackageVersion mismatch");
        }

        [Test]
        public void AdapterVersionsContainsLatestVersionTest()
        {
            var version = VersionInfo.k_Latest;
            var adapters = MediationSdkInfo.GetAllAdapters();
            foreach (var adapter in adapters)
            {
                var versions = adapter.Versions.Select(x => x.Identifier).ToArray();
                Assert.Contains(version, versions, "Adapter {0} does not contain version {1}",
                    adapter.Identifier, version);
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
            var version = PackageInfo.FindForAssembly(typeof(MediationService).Assembly).version;
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
