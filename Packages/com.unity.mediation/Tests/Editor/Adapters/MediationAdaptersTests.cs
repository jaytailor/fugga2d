#if NUGET_MOQ_AVAILABLE
using System;
using System.Collections.Generic;
using System.IO;
using Moq;
using NUnit.Framework;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;

namespace Unity.Mediation.EditorTests
{
    public class MediationAdaptersTests
    {
        const string k_TestAdapter = "test-adapter";
        const string k_TestVersion = "1.0.0";

        AdaptersDependencyGenerator m_OriginalGenerator;
        Mock<AdaptersDependencyGenerator> m_GeneratorMock;

        [OneTimeSetUp]
        public void OneTimeSetUp()
        {
            m_GeneratorMock = new Mock<AdaptersDependencyGenerator>(MockBehavior.Strict);
            m_OriginalGenerator = MediationSdkInfo.s_Generator;
            MediationSdkInfo.s_Generator = m_GeneratorMock.Object;
        }

        [OneTimeTearDown]
        public void OneTimeTearDown()
        {
            MediationSdkInfo.s_Generator = m_OriginalGenerator;
        }

        [Test]
        public void GetAllAdaptersTest()
        {
            //Invalidate cached adapters info
            MediationSdkInfo.s_MediationInfo = null;
            var adapters = MediationSdkInfo.GetAllAdapters();

            var expectedAdaptersJson = File.ReadAllText(MediationSdkInfo.FindMediationSdkInfoPath());
            var expectedAdaptersInfo = new MediationInfo();
            EditorJsonUtility.FromJsonOverwrite(expectedAdaptersJson, expectedAdaptersInfo);

            CollectionAssert.AreEquivalent(expectedAdaptersInfo.Adapters, adapters, "Adapters mismatch");
        }

        [Test]
        public void GetInstalledAdaptersTest()
        {
            var expectedAdapters = new List<AdapterInfo>();
            m_GeneratorMock.Setup(generator => generator.GetInstalledAdapters())
                .Returns(() => expectedAdapters);
            var installedAdapters = MediationSdkInfo.GetInstalledAdapters();
            Assert.AreEqual(expectedAdapters, installedAdapters, "Installed adapters mismatch");
        }

        [Test]
        [TestCase(k_TestAdapter, k_TestVersion)]
        [TestCase(k_TestAdapter, null)]
        public void InstallTest(string adapterId, string version)
        {
            m_GeneratorMock.Setup(generator => generator.InstallAdapter(adapterId, version));
            MediationSdkInfo.Install(adapterId, version);
            m_GeneratorMock.Verify(generator => generator.InstallAdapter(adapterId, version));
        }

        [Test]
        public void UninstallTest()
        {
            m_GeneratorMock.Setup(generator => generator.UninstallAdapter(k_TestAdapter));
            MediationSdkInfo.Uninstall(k_TestAdapter);
            m_GeneratorMock.Verify(generator => generator.UninstallAdapter(k_TestAdapter));
        }

        [Test]
        public void AdaptersChangedEventTest()
        {
            var eventFired = false;
            var callback = new Action(() => { eventFired = true; });

            MediationSdkInfo.AdaptersChanged += callback;
            m_GeneratorMock.Raise(generator => generator.AdaptersChanged += null);

            Assert.IsTrue(eventFired, "AdaptersChanged event was not fired");
        }
    }
}
#endif
