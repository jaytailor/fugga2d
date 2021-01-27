using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using NUnit.Framework;
using Unity.Mediation.Adapters.Editor;
using UnityEngine;

namespace Unity.Mediation.EditorTests
{
    public class AdaptersDependencyGeneratorTests
    {
        string xmlTestDirectoryPath = Application.temporaryCachePath + @"/com.unity.mediation/Tests/Editor/";
        string xmlTestPath = Application.temporaryCachePath + @"/com.unity.mediation/Tests/Editor/MediationDepsTest.xml";
        const string xmlTemplatePathNone = "Packages/com.unity.mediation/Tests/Editor/MediationDepsNone.xml";
        const string xmlTemplatePathAll = "Packages/com.unity.mediation/Tests/Editor/MediationDepsAll.xml";

        private AdaptersDependencyGenerator generator;

        [SetUp]
        public void SetUp()
        {
            generator = new AdaptersDependencyGenerator();
        }

        [TearDown]
        public void TearDown()
        {
            if (File.Exists(xmlTestPath))
            {
                File.Delete(xmlTestPath);
                File.Delete(xmlTestPath + ".meta");
            }
        }

        [Test]
        public void GenerateWithAdaptersTest()
        {
            var adapters = MediationSdkInfo.GetAllAdapters();
            foreach (var adapter in adapters)
            {
                adapter.InstalledVersion = adapter.Versions.Last();
            }
            GenerateTest(adapters, xmlTemplatePathAll);
        }

        [Test]
        public void GenerateWithoutAdaptersTest()
        {
            GenerateTest(new List<AdapterInfo>(), xmlTemplatePathNone);
        }

        [Test]
        [TestCase("MediationDepsNone.xml", new string[] {})]
        [TestCase("MediationDepsAll.xml", new[] {"AdMob Adapter", "Facebook Adapter", "Unity Ads Adapter", "AdColony Adapter", "Iron Source Adapter", "Applovin Adapter"})]
        public void GetInstalledAdaptersTest(string xmlFile, string[] expectedAdapters)
        {
            string xmlPath = $"Packages/com.unity.mediation/Tests/Editor/{xmlFile}";

            var installedAdapters = generator.GetInstalledAdapters(xmlPath);
            var displayNames = installedAdapters.Select(info => info.DisplayName);
            CollectionAssert.AreEquivalent(expectedAdapters, displayNames, "Incorrect Adapters Installed");
        }

        [Test]
        public void InstallAdaptersTest()
        {
            Directory.CreateDirectory(xmlTestDirectoryPath);
            File.Copy(xmlTemplatePathNone, xmlTestPath);
            foreach (var adapter in MediationSdkInfo.GetAllAdapters())
            {
                generator.InstallAdapter(adapter.Identifier, adapter.InstalledVersion, xmlTestPath);
            }

            List<AdapterInfo> expectedAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(xmlTemplatePathAll);
            List<AdapterInfo> actualAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(xmlTestPath);

            CollectionAssert.AreEquivalent(expectedAdapterList, actualAdapterList, "Expected Adapters weren't installed into XML file.");
        }

        [Test]
        public void UninstallAdaptersTest()
        {
            Directory.CreateDirectory(xmlTestDirectoryPath);
            File.Copy(xmlTemplatePathAll, xmlTestPath);
            foreach (var adapter in MediationSdkInfo.GetAllAdapters())
            {
                generator.UninstallAdapter(adapter.Identifier, xmlTestPath);
            }

            List<AdapterInfo> expectedAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(xmlTemplatePathNone);
            List<AdapterInfo> actualAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(xmlTestPath);

            CollectionAssert.AreEquivalent(expectedAdapterList, actualAdapterList, "Expected Adapters weren't uninstalled from XML file.");
        }

        [Test]
        [TestCase("Something/Editor/Maven~/com/unity3d/mediation/mediation-sdk", true)]
        [TestCase("Something\\Editor\\Maven~\\com\\unity3d\\mediation\\mediation-sdk", true)]
        [TestCase("Maven~\\com\\unity3d\\mediation\\mediation-sdk", false)]
        [TestCase("Something/Editor/Maven~/com/unity3d/mediation/mediation-sdkX", false)]
        public void LocalMavenRegexTest(string path, bool matches)
        {
            Assert.AreEqual(matches, generator.IsPathLikeLocalMavenPath(path), "Bad regex match result");
        }

        static void GenerateTest(List<AdapterInfo> adapterInfos, string xmlPath)
        {
            var generator = new AdaptersDependencyGenerator();
            var generatedXml = generator.GenerateXmlContentWithAllDependencies(adapterInfos);
            //On Windows, newlines will be CRLF
            generatedXml = generatedXml.Replace("\r\n", "\n").Trim();
            //Forward slashes vs backward slashes in paths
            generatedXml = generatedXml.Replace("\\", "/").Trim();
            var expectedXml = File.ReadAllText(xmlPath).Trim();
            Assert.AreEqual(expectedXml, generatedXml, "Expected xml does not match generated xml");
        }
    }
}
