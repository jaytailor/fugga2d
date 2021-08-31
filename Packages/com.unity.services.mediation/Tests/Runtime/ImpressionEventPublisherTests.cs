#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using Moq;
using NUnit.Framework;
using Unity.Services.Mediation.Platform;
using UnityEngine;

namespace Unity.Services.Mediation.Tests
{
    public class ImpressionEventPublisherTests
    {
        Mock<IImpressionEventPublisher> m_ImpressionEventPublisherMock;

        [SetUp]
        public async void Setup()
        {
            m_ImpressionEventPublisherMock = new Mock<IImpressionEventPublisher>(MockBehavior.Strict);
            await MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            ((MediationServiceImpl)MediationService.Instance).impressionEventPublisherImpl = m_ImpressionEventPublisherMock.Object;
        }

        [Test]
        public void ImpressionEventTest()
        {
            string eventName = nameof(IImpressionEventPublisher.OnImpression);

            var mockedEvent = new MockedEvent<IImpressionEventPublisher>(m_ImpressionEventPublisherMock,
                ((MediationServiceImpl)MediationService.Instance).impressionEventPublisherImpl, eventName, new ImpressionEventArgs(TestConstants.GameId, new ImpressionData()));

            mockedEvent.SubscribeToRealEvent();
            mockedEvent.RaiseMockedEvent();

            //Verify that the real event has fired
            Assert.IsTrue(mockedEvent.RealEventFired, $"Event {eventName} did not fire");
            Assert.AreEqual(mockedEvent.obj, mockedEvent.RealEventFiredSender, $"Event {eventName} did not fire with the right sender");
            Assert.AreEqual(mockedEvent.eventArgs, mockedEvent.RealEventFiredArgs, $"Event {eventName} did not fire with the right arguments");

            mockedEvent.UnsubscribeFromRealEvent();
        }
    }
}
#endif
