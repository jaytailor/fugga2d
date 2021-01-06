#if UNITY_ANDROID
using System;
using System.IO;
using System.Linq;
using System.Xml.Linq;
using NUnit.Framework;
using Unity.Mediation.Build.Editor;
using Unity.Mediation.Settings.Editor;
using UnityEngine;

namespace Unity.Mediation.EditorTests
{
    public class AndroidManifestPostGenerateGradleProjectTests
    {
        const string k_KAdMobTestAppId = "admob-test-id";
        const string k_GmsApplicationIdName = "com.google.android.gms.ads.APPLICATION_ID";
        const string k_AndroidManifestPath = "src/main/AndroidManifest.xml";
        const string k_DummyManifestPath = "Packages/com.unity.mediation/Tests/Editor/DummyAndroidManifest.xml";

        AdMobSettings m_AdMobSettings;
        bool m_AdMobEnabled;
        string m_AdMobAppIdAndroid;

        string m_TempAndroidProjectPath;

        [OneTimeSetUp]
        public void OneTimeSetUp()
        {
            m_AdMobSettings = new AdMobSettings();
            m_AdMobEnabled = m_AdMobSettings.Enabled.value;
            m_AdMobAppIdAndroid = m_AdMobSettings.m_AdMobAppIdAndroid.value;
        }

        [OneTimeTearDown]
        public void OneTimeTearDown()
        {
            m_AdMobSettings.Enabled.value = m_AdMobEnabled;
            m_AdMobSettings.m_AdMobAppIdAndroid.value = m_AdMobAppIdAndroid;
        }

        [SetUp]
        public void SetUp()
        {
            m_TempAndroidProjectPath = Path.Combine(Path.GetTempPath(), "MediationTestFolder");
            var manifestPath = Path.Combine(m_TempAndroidProjectPath, k_AndroidManifestPath);
            Directory.CreateDirectory(Path.GetDirectoryName(manifestPath));
            File.Copy(k_DummyManifestPath, manifestPath);
        }

        [TearDown]
        public void TearDown()
        {
            if (Directory.Exists(m_TempAndroidProjectPath))
            {
                Directory.Delete(m_TempAndroidProjectPath, true);
            }
        }

        [Test]
        public void AndroidManifestWithAdMobDisabledTest()
        {
            m_AdMobSettings.m_AdMobAppIdAndroid.value = k_KAdMobTestAppId;
            m_AdMobSettings.Enabled.value = false;

            var generator = new AndroidManifestPostGenerateGradleProject();
            generator.OnPostGenerateGradleAndroidProject(m_TempAndroidProjectPath);

            var originalManifest = File.ReadAllText(k_DummyManifestPath);
            var patchedManifest = File.ReadAllText(Path.Combine(m_TempAndroidProjectPath, k_AndroidManifestPath));
            Assert.AreEqual(originalManifest, patchedManifest, "Manifest should not be changed if AdMob is not enabled");
        }

        [Test]
        public void AndroidManifestWithAdMobEnabledTest()
        {
            m_AdMobSettings.m_AdMobAppIdAndroid.value = k_KAdMobTestAppId;
            m_AdMobSettings.Enabled.value = true;

            var generator = new AndroidManifestPostGenerateGradleProject();
            generator.OnPostGenerateGradleAndroidProject(m_TempAndroidProjectPath);

            var patchedManifest = Path.Combine(m_TempAndroidProjectPath, k_AndroidManifestPath);

            var xmlDoc = XElement.Load(patchedManifest);
            Assert.AreEqual("manifest", xmlDoc.Name.LocalName, "Not a valid manifest");

            var admobMetaElements = xmlDoc.Element("application") ?
                .Elements("meta-data")
                .Where(element => GetXmlAttribute(element, "name")?.Value == k_GmsApplicationIdName)
                .Where(element => GetXmlAttribute(element, "value")?.Value == k_KAdMobTestAppId);

            Assert.AreEqual(1, admobMetaElements?.Count(), "Xml file does not contain exactly 1 meta-data tag with AdMob App ID");
        }

        static XAttribute GetXmlAttribute(XElement element, string attribute)
        {
            return element?.Attributes().FirstOrDefault(attr => attr.Name.LocalName == attribute);
        }
    }
}
#endif
