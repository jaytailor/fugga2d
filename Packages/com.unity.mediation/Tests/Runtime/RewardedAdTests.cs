#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Collections.Generic;
using Moq;
using NUnit.Framework;
using Unity.Mediation.Platform;

namespace Unity.Mediation.Tests
{
    public class RewardedAdTests
    {
        Mock<IRewardedAd> m_RewardedAdMock;
        RewardedAd m_RewardedAd;

        [SetUp]
        public void Setup()
        {
            m_RewardedAdMock = new Mock<IRewardedAd>(MockBehavior.Strict);
            m_RewardedAd = new RewardedAd(m_RewardedAdMock.Object);
        }

        [Test]
        public void ShowTest()
        {
            m_RewardedAdMock.Setup(ad => ad.Show());
            m_RewardedAd.Show();
            m_RewardedAdMock.Verify(ad => ad.Show());
        }

        [Test]
        public void LoadTest()
        {
            m_RewardedAdMock.Setup(ad => ad.Load());
            m_RewardedAd.Load();
            m_RewardedAdMock.Verify(ad => ad.Load());
        }

        [Test]
        [TestCase(nameof(RewardedAd.OnLoaded))]
        [TestCase(nameof(RewardedAd.OnFailedLoad))]
        [TestCase(nameof(RewardedAd.OnShowed))]
        [TestCase(nameof(RewardedAd.OnUserRewarded))]
        [TestCase(nameof(RewardedAd.OnClicked))]
        [TestCase(nameof(RewardedAd.OnClosed))]
        [TestCase(nameof(RewardedAd.OnFailedShow))]
        public void EventTest(string eventName)
        {
            var eventArgs = new Dictionary<string, EventArgs>
            {
                {nameof(RewardedAd.OnLoaded), EventArgs.Empty},
                {nameof(RewardedAd.OnFailedLoad), new LoadErrorEventArgs(LoadError.Unknown, "Test error message")},
                {nameof(RewardedAd.OnShowed), EventArgs.Empty},
                {nameof(RewardedAd.OnUserRewarded), new RewardEventArgs("test", "0.0")},
                {nameof(RewardedAd.OnClicked), EventArgs.Empty},
                {nameof(RewardedAd.OnClosed), EventArgs.Empty},
                {nameof(RewardedAd.OnFailedShow), new ShowErrorEventArgs(ShowError.Unknown, "Test error message")},
            };

            var mockedEvent = new MockedEvent<IRewardedAd>(m_RewardedAdMock, m_RewardedAd, eventName, eventArgs[eventName]);

            //Subscribe to event: e.g. m_RewardedAd.OnLoaded
            mockedEvent.SubscribeToRealEvent();

            //Raise mocked event: e.g. m_RewardedAdAdMock.Raise(ad => ad.OnLoaded += null, args);
            mockedEvent.RaiseMockedEvent();

            //Verify that the real event has fired
            Assert.IsTrue(mockedEvent.RealEventFired, $"Event {eventName} did not fire");
            Assert.AreEqual(mockedEvent.obj, mockedEvent.RealEventFiredSender, $"Event {eventName} did not fire with the right sender");
            Assert.AreEqual(mockedEvent.eventArgs, mockedEvent.RealEventFiredArgs, $"Event {eventName} did not fire with the right arguments");

            mockedEvent.UnsubscribeFromRealEvent();
        }

        [Test]
        public void StateTest()
        {
            foreach (var state in (AdState[])Enum.GetValues(typeof(AdState)))
            {
                m_RewardedAdMock.Setup(mediation => mediation.AdState).Returns(state);
                Assert.AreEqual(m_RewardedAd.AdState, state, "RewardedAd.State mismatch");
            }
        }

        [Test]
        public void AdUnitIdTest()
        {
            m_RewardedAdMock.Setup((ad => ad.AdUnitId)).Returns(TestConstants.AdUnitRewardedId);
            Assert.AreEqual(m_RewardedAd.AdUnitId, TestConstants.AdUnitRewardedId, "RewardedAd.AdUnitId mismatch");
        }

        [Test]
        public void DisposeTest()
        {
            m_RewardedAdMock.Setup(ad => ad.Dispose());
            m_RewardedAd.Dispose();
            m_RewardedAdMock.Verify(ad => ad.Dispose(), Times.Once());
        }
    }
}
#endif
