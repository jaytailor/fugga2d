#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using Moq;
using NUnit.Framework;
using Unity.Services.Core;
using Unity.Services.Core.Configuration.Internal;
using Unity.Services.Core.Device.Internal;
using UnityEditor;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class InitializationOptionsExtensionsTests
    {
        private Mock<IMediationServiceImpl> m_MediationServiceMock;
        private Mock<IProjectConfiguration> m_ProjectConfigurationMock;
        private Mock<IInstallationId> m_InstallationIdMock;

        [SetUp]
        public void SetUp()
        {
            LogAssert.ignoreFailingMessages = true;

            m_MediationServiceMock = new Mock<IMediationServiceImpl>();
            m_ProjectConfigurationMock = new Mock<IProjectConfiguration>();
            m_InstallationIdMock = new Mock<IInstallationId>();
            MediationService.s_Instance = m_MediationServiceMock.Object;
        }

        [TearDown]
        public void TearDown()
        {
            LogAssert.ignoreFailingMessages = false;
        }

        [Test]
        public void GameIdSetInInitOptionsObject()
        {
            string testGameId = "123456789";

            InitializationOptions initializationOptions = new InitializationOptions();
            initializationOptions.SetGameId(testGameId);

            Assert.True(initializationOptions.TryGetOption(InitializationOptionsExtensions.GameIdKey, out string result));
            Assert.AreEqual(testGameId, result, "Game ID not stored in Initialization Options Object.");
        }

        [Test]
        public void NullGameIdCannotBeSetInInitOptionsObject()
        {
            InitializationOptions initializationOptions = new InitializationOptions();
            Assert.Throws<ArgumentException>(() => initializationOptions.SetGameId(null));
        }

        [Test]
        public void NonDigitGameIdCannotBeSetInInitOptionsObject()
        {
            string testGameId = "BAD_TEST";

            InitializationOptions initializationOptions = new InitializationOptions();
            Assert.Throws<ArgumentException>(() => initializationOptions.SetGameId(testGameId));
        }

        [Test]
        public void GameIdSet()
        {
            InitializationOptions initializationOptions = new InitializationOptions();
            string testGameId = "123456789";
            initializationOptions.SetGameId(testGameId);

            string mediationGameId = string.Empty;

            m_ProjectConfigurationMock.Setup(configuration =>
                configuration.GetString(It.IsAny<string>(), null)).Returns(() =>
                {
                    initializationOptions.TryGetOption(InitializationOptionsExtensions.GameIdKey, out string result);
                    return result;
                });

            m_InstallationIdMock.Setup(id => id.GetOrCreateIdentifier()).Returns(() => GUID.Generate().ToString());

            m_MediationServiceMock
                .Setup(impl => impl.Initialize(It.IsAny<string>(), It.IsAny<string>()))
                .Callback<string,string>( (gid,iid) => mediationGameId = gid);

            new MediationServiceInitializer().Initialize(m_InstallationIdMock.Object, m_ProjectConfigurationMock.Object);

            Assert.AreEqual(testGameId, mediationGameId, "Mediation Initialized with incorrect game id.");
        }
    }
}
#endif
