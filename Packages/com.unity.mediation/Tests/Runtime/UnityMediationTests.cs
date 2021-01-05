#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Collections.Generic;
using Moq;
using NUnit.Framework;
using Unity.Mediation.Platform;

namespace Unity.Mediation.Tests
{
    public class UnityMediationTests
    {
        Mock<IUnityMediation> m_UnityMediationMock;

        [SetUp]
        public void Setup()
        {
            m_UnityMediationMock = new Mock<IUnityMediation>(MockBehavior.Strict);
            UnityMediation.UnityMediationImpl = m_UnityMediationMock.Object;
        }

        [Test]
        public void InitializeTest()
        {
            m_UnityMediationMock.Setup(ad => ad.Initialize(TestConstants.GameId));
            UnityMediation.Initialize(TestConstants.GameId);
            m_UnityMediationMock.Verify(ad => ad.Initialize(TestConstants.GameId));
        }

        [Test]
        [TestCase(nameof(UnityMediation.OnInitializationComplete))]
        [TestCase(nameof(UnityMediation.OnInitializationFailed))]
        public void EventTest(string eventName)
        {
            var eventArgs = new Dictionary<string, EventArgs>
            {
                {nameof(UnityMediation.OnInitializationComplete), EventArgs.Empty},
                {nameof(UnityMediation.OnInitializationFailed), new InitializationErrorEventArgs(SdkInitializationError.Unknown, "Test error message")},
            };

            var mockedEvent = new MockedStaticEvent<IUnityMediation>(m_UnityMediationMock, typeof(UnityMediation), eventName, eventArgs[eventName]);

            //Subscribe to event: e.g. UnityMediation.OnInitializationComplete
            mockedEvent.SubscribeToRealEvent();

            //Raise mocked event: e.g. m_UnityMediationMock.Raise(ad => ad.OnInitializationComplete += null, args);
            mockedEvent.RaiseMockedEvent();

            //Verify that the real event has fired
            Assert.IsTrue(mockedEvent.RealEventFired, $"Event {eventName} did not fire");
            Assert.AreEqual(null, mockedEvent.RealEventFiredSender, $"Event {eventName} did not fire with the right sender");
            Assert.AreEqual(mockedEvent.eventArgs, mockedEvent.RealEventFiredArgs, $"Event {eventName} did not fire with the right arguments");

            mockedEvent.UnsubscribeFromRealEvent();
        }

        [Test]
        public void StateTest()
        {
            foreach (var state in (InitializationState[])Enum.GetValues(typeof(InitializationState)))
            {
                m_UnityMediationMock.Setup(mediation => mediation.State).Returns(state);
                Assert.AreEqual(UnityMediation.State, state, "UnityMediation.State mismatch");
            }
        }
    }
}
#endif
