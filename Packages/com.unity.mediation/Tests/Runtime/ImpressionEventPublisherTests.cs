#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using Moq;
using NUnit.Framework;
using Unity.Mediation.Platform;

namespace Unity.Mediation.Tests
{
    public class ImpressionEventPublisherTests
    {
        Mock<IImpressionEventPublisher> m_ImpressionEventPublisherMock;

        [SetUp]
        public void Setup()
        {
            m_ImpressionEventPublisherMock = new Mock<IImpressionEventPublisher>(MockBehavior.Strict);
            ImpressionEventPublisher.ImpressionEventPublisherImpl = m_ImpressionEventPublisherMock.Object;
        }

        [Test]
        public void ImpressionEventTest()
        {
            string eventName = nameof(ImpressionEventPublisher.OnImpression);

            var mockedEvent = new MockedStaticEvent<IImpressionEventPublisher>(m_ImpressionEventPublisherMock,
                typeof(ImpressionEventPublisher), eventName, new ImpressionEventArgs(TestConstants.GameId, new ImpressionData()));

            mockedEvent.SubscribeToRealEvent();

            mockedEvent.RaiseMockedEvent();

            //Verify that the real event has fired
            Assert.IsTrue(mockedEvent.RealEventFired, $"Event {eventName} did not fire");
            Assert.AreEqual(null, mockedEvent.RealEventFiredSender, $"Event {eventName} did not fire with the right sender");
            Assert.AreEqual(mockedEvent.eventArgs, mockedEvent.RealEventFiredArgs, $"Event {eventName} did not fire with the right arguments");

            mockedEvent.UnsubscribeFromRealEvent();
        }
    }
}
#endif
