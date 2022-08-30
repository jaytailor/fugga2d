#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Threading.Tasks;
using Moq;
using NUnit.Framework;

namespace Unity.Services.Mediation.Tests
{
    public class MediationServiceTests
    {
        Mock<IMediationServiceImpl> m_MediationServiceMock;

        [SetUp]
        public void Setup()
        {
            m_MediationServiceMock = new Mock<IMediationServiceImpl>(MockBehavior.Strict);
            MediationService.s_Instance = m_MediationServiceMock.Object;
        }

        [TearDown]
        public void TearDown()
        {
            MediationService.s_Instance = null;
        }

        [Test]
        public void InitializationSuccessTest()
        {
            var taskCompletionSource = new TaskCompletionSource<object>();
            taskCompletionSource.SetResult(null);

            m_MediationServiceMock.Setup(x => x.Initialize(It.IsAny<string>(), It.IsAny<string>())).Returns(taskCompletionSource.Task);
            Assert.AreEqual(TaskStatus.RanToCompletion, MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId).Status);
            m_MediationServiceMock.Verify(x => x.Initialize(It.IsAny<string>(), It.IsAny<string>()), Times.Once());
        }

        [Test]
        public void InitializationFailTest()
        {
            var taskCompletionSource = new TaskCompletionSource<object>();
            taskCompletionSource.TrySetException(new Exception());

            m_MediationServiceMock.Setup(x => x.Initialize(It.IsAny<string>(), It.IsAny<string>())).Returns(taskCompletionSource.Task);
            Assert.AreEqual(TaskStatus.Faulted, MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId).Status);
            m_MediationServiceMock.Verify(x => x.Initialize(It.IsAny<string>(), It.IsAny<string>()), Times.Once());
        }

        [Test]
        public void StateTest()
        {
            foreach (var state in (InitializationState[])Enum.GetValues(typeof(InitializationState)))
            {
                m_MediationServiceMock.Setup(mediation => mediation.InitializationState).Returns(state);
                Assert.AreEqual(MediationService.InitializationState, state, "UnityMediation.InitializationState mismatch");
            }
        }
    }
}
#endif
