#if UNITY_IOS
using System.IO;
using NUnit.Framework;
using Unity.Mediation.Build.Editor;
using Unity.Mediation.Settings.Editor;
using UnityEditor.iOS.Xcode;

namespace Unity.Mediation.EditorTests
{
    public class IosPlistPostBuildTests
    {
        const string k_KAdMobTestAppId = "admob-test-id";
        const string k_GmsApplicationIdKey = "GADApplicationIdentifier";
        const string k_DummyInfoPlistPath = "Packages/com.unity.mediation/Tests/Editor/Build/DummyInfo.plist";
        const string k_NsAppTransportSecurity = "NSAppTransportSecurity";
        const string k_NsAllowsArbitraryLoads = "NSAllowsArbitraryLoads";
        const string k_NsAllowsArbitraryLoadsForMedia = "NSAllowsArbitraryLoadsForMedia";
        const string k_NsAllowsArbitraryLoadsInWebContent = "NSAllowsArbitraryLoadsInWebContent";

        AdMobSettings m_AdMobSettings;
        bool m_AdMobEnabled;
        string m_AdMobAppIdIos;

        string m_TempIosProjectPath;

        [OneTimeSetUp]
        public void OneTimeSetUp()
        {
            m_AdMobSettings = new AdMobSettings();
            m_AdMobEnabled = m_AdMobSettings.Enabled.value;
            m_AdMobAppIdIos = m_AdMobSettings.AdMobAppIdIos;
        }

        [OneTimeTearDown]
        public void OneTimeTearDown()
        {
            m_AdMobSettings.Enabled.value = m_AdMobEnabled;
            m_AdMobSettings.AdMobAppIdIos = m_AdMobAppIdIos;
        }

        [SetUp]
        public void SetUp()
        {
            m_TempIosProjectPath = Path.Combine(Path.GetTempPath(), "MediationTestFolder");
            var plistPath = Path.Combine(m_TempIosProjectPath, "Info.plist");
            Directory.CreateDirectory(Path.GetDirectoryName(plistPath));
            File.Copy(k_DummyInfoPlistPath, plistPath);
        }

        [TearDown]
        public void TearDown()
        {
            if (Directory.Exists(m_TempIosProjectPath))
            {
                Directory.Delete(m_TempIosProjectPath, true);
            }
        }

        [Test]
        [TestCase(false, k_KAdMobTestAppId)]
        [TestCase(true, "")]
        public void IosInfoPlistWithAdMobDisabledTest(bool enabled, string appId)
        {
            m_AdMobSettings.AdMobAppIdIos = appId;
            m_AdMobSettings.Enabled.value = enabled;

            var generator = new IosPlistPostBuild();
            generator.OnPostprocessBuild(m_TempIosProjectPath);

            var originalPlist = File.ReadAllText(k_DummyInfoPlistPath);
            var patchedPlist = File.ReadAllText(Path.Combine(m_TempIosProjectPath, "Info.plist"));
            Assert.AreEqual(originalPlist, patchedPlist, "Info.plist should not be changed if AdMob is not enabled");
        }

        [Test]
        [TestCase(true, k_KAdMobTestAppId)]
        public void IosInfoPlistWithAdMobEnabledTest(bool enabled, string appId)
        {
            m_AdMobSettings.AdMobAppIdIos = k_KAdMobTestAppId;
            m_AdMobSettings.Enabled.value = enabled;

            var generator = new IosPlistPostBuild();
            generator.OnPostprocessBuild(m_TempIosProjectPath);

            var patchedPlist = Path.Combine(m_TempIosProjectPath, "Info.plist");

            PlistDocument plist = new PlistDocument();
            plist.ReadFromString(File.ReadAllText(patchedPlist));

            Assert.AreEqual(k_KAdMobTestAppId, plist.root[k_GmsApplicationIdKey].AsString(), $"{k_GmsApplicationIdKey} not patched correctly");

            var dict = plist.root[k_NsAppTransportSecurity].AsDict();
            Assert.IsTrue(dict[k_NsAllowsArbitraryLoads].AsBoolean(), $"{k_NsAllowsArbitraryLoads} not patched correctly");
            Assert.IsTrue(dict[k_NsAllowsArbitraryLoadsForMedia].AsBoolean(), $"{k_NsAllowsArbitraryLoadsForMedia} not patched correctly");
            Assert.IsTrue(dict[k_NsAllowsArbitraryLoadsInWebContent].AsBoolean(), $"{k_NsAllowsArbitraryLoadsInWebContent} not patched correctly");
        }
    }
}
#endif
