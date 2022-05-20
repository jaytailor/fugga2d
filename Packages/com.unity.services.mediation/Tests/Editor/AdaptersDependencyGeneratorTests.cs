using System.Collections.Generic;
using System.IO;
using System.Linq;
using NUnit.Framework;
using Unity.Services.Mediation.Adapters.Editor;
using UnityEngine;

namespace Unity.Services.Mediation.EditorTests
{
    public class AdaptersDependencyGeneratorTests
    {
        string m_XMLTestDirectoryPath = Application.temporaryCachePath + @"/com.unity.services.mediation/Tests/Editor/";
        string m_XMLTestPath = Application.temporaryCachePath + @"/com.unity.services.mediation/Tests/Editor/MediationDepsTest.xml";
        const string k_XMLTemplateFileNone = "MediationDepsNone.xml";
        const string k_XMLTemplateFileAll = "MediationDepsAll.xml";
        string m_XMLTemplateBasePath;

        private AdaptersDependencyGenerator m_Generator;

        [SetUp]
        public void SetUp()
        {
            // The path will vary if the tests are in a separate package
            if (Directory.Exists("Packages/com.unity.services.mediation.tests/Tests"))
            {
                m_XMLTemplateBasePath = @"Packages/com.unity.services.mediation.tests/Tests/Editor/";
            }
            else
            {
                m_XMLTemplateBasePath = @"Packages/com.unity.services.mediation/Tests/Editor/";
            }

            m_Generator = new AdaptersDependencyGenerator();
        }

        [TearDown]
        public void TearDown()
        {
            if (File.Exists(m_XMLTestPath))
            {
                File.Delete(m_XMLTestPath);
                File.Delete(m_XMLTestPath + ".meta");
            }
        }

        [Test]
        public void GenerateWithAdaptersTest()
        {
            var adapters = MediationSdkInfo.GetAllAdapters();
            foreach (var adapter in adapters)
            {
                adapter.InstalledVersion = adapter.Versions.First();
            }
            GenerateTest(adapters, m_XMLTemplateBasePath + k_XMLTemplateFileAll);
        }

        [Test]
        public void GenerateWithoutAdaptersTest()
        {
            AdapterInfo unityAdsAdapterInfo = MediationSdkInfo.GetAllAdapters().Find((x) => x.Identifier == "unityads-adapter");
            if (unityAdsAdapterInfo.InstalledVersion?.Identifier == null)
            {
                unityAdsAdapterInfo.InstalledVersion = unityAdsAdapterInfo.Versions.First();
            }
            GenerateTest(new List<AdapterInfo>(){unityAdsAdapterInfo}, m_XMLTemplateBasePath + k_XMLTemplateFileNone);
        }

        [Test]
        [TestCase("MediationDepsNone.xml", new[] {"Unity Ads Adapter"})]
        [TestCase("MediationDepsAll.xml", new[] {"AdMob Adapter", "Meta Audience Network Adapter", "Unity Ads Adapter", "AdColony Adapter", "ironSource Adapter", "Mintegral Adapter", "Snap Adapter", "Applovin Adapter", "Vungle Adapter"})]
        public void GetInstalledAdaptersTest(string xmlFile, string[] expectedAdapters)
        {
            string xmlPath = m_XMLTemplateBasePath + xmlFile;

            var installedAdapters = m_Generator.GetInstalledAdapters(xmlPath);
            var displayNames = installedAdapters.Select(info => info.DisplayName);
            CollectionAssert.AreEquivalent(expectedAdapters, displayNames, "Incorrect Adapters Installed");
        }

        [Test]
        public void InstallAdaptersTest()
        {
            Directory.CreateDirectory(m_XMLTestDirectoryPath);
            File.Copy(m_XMLTemplateBasePath + k_XMLTemplateFileNone, m_XMLTestPath);
            foreach (var adapter in MediationSdkInfo.GetAllAdapters())
            {
                m_Generator.InstallAdapter(adapter.Identifier, adapter.InstalledVersion, m_XMLTestPath);
            }

            List<AdapterInfo> expectedAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(m_XMLTemplateBasePath + k_XMLTemplateFileAll);
            List<AdapterInfo> actualAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(m_XMLTestPath);

            CollectionAssert.AreEquivalent(expectedAdapterList, actualAdapterList, "Expected Adapters weren't installed into XML file.");
        }

        [Test]
        public void UninstallAdaptersTest()
        {
            Directory.CreateDirectory(m_XMLTestDirectoryPath);
            File.Copy(m_XMLTemplateBasePath + k_XMLTemplateFileAll, m_XMLTestPath);
            foreach (var adapter in MediationSdkInfo.GetAllAdapters())
            {
                if (adapter.Identifier != "unityads-adapter")
                {
                    m_Generator.UninstallAdapter(adapter.Identifier, m_XMLTestPath);
                }
            }

            List<AdapterInfo> expectedAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(m_XMLTemplateBasePath + k_XMLTemplateFileNone);
            List<AdapterInfo> actualAdapterList = MediationSdkInfo.s_Generator.GetInstalledAdapters(m_XMLTestPath);

            CollectionAssert.AreEquivalent(expectedAdapterList, actualAdapterList, "Expected Adapters weren't uninstalled from XML file.");
        }

        [Test]
        [TestCase("Something/Editor/Maven~/com/unity3d/mediation/mediation-sdk", true)]
        [TestCase("Something\\Editor\\Maven~\\com\\unity3d\\mediation\\mediation-sdk", true)]
        [TestCase("Maven~\\com\\unity3d\\mediation\\mediation-sdk", false)]
        [TestCase("Something/Editor/Maven~/com/unity3d/mediation/mediation-sdkX", false)]
        public void LocalMavenRegexTest(string path, bool matches)
        {
            Assert.AreEqual(matches, m_Generator.IsPathLikeLocalMavenPath(path), "Bad regex match result");
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
