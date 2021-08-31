#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Collections.Generic;
using Moq;
using NUnit.Framework;
using Unity.Services.Mediation.Platform;

namespace Unity.Services.Mediation.Tests
{
    public class InterstitialAdTests
    {
        Mock<IInterstitialAd> m_InterstitialAdMock;
        InterstitialAd m_InterstitialAd;

        [SetUp]
        public void Setup()
        {
            m_InterstitialAdMock = new Mock<IInterstitialAd>(MockBehavior.Strict);
            m_InterstitialAd = new InterstitialAd(m_InterstitialAdMock.Object);
        }

        [Test]
        public void LoadTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Load());
            m_InterstitialAd.Load();
            m_InterstitialAdMock.Verify(ad => ad.Load());
        }

        [Test]
        public void ShowTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Show());
            m_InterstitialAd.Show();
            m_InterstitialAdMock.Verify(ad => ad.Show());
        }

        [Test]
        [TestCase(nameof(InterstitialAd.OnLoaded))]
        [TestCase(nameof(InterstitialAd.OnFailedLoad))]
        [TestCase(nameof(InterstitialAd.OnShowed))]
        [TestCase(nameof(InterstitialAd.OnClosed))]
        [TestCase(nameof(InterstitialAd.OnClicked))]
        [TestCase(nameof(InterstitialAd.OnFailedShow))]
        public void EventTest(string eventName)
        {
            var eventArgs = new Dictionary<string, EventArgs>
            {
                {nameof(InterstitialAd.OnLoaded), EventArgs.Empty},
                {nameof(InterstitialAd.OnFailedLoad), new LoadErrorEventArgs(LoadError.Unknown, "Test error message")},
                {nameof(InterstitialAd.OnShowed), EventArgs.Empty},
                {nameof(InterstitialAd.OnClosed), EventArgs.Empty},
                {nameof(InterstitialAd.OnClicked), EventArgs.Empty},
                {nameof(InterstitialAd.OnFailedShow), new ShowErrorEventArgs(ShowError.Unknown, "Test error message")},
            };

            var mockedEvent = new MockedEvent<IInterstitialAd>(m_InterstitialAdMock, m_InterstitialAd, eventName, eventArgs[eventName]);

            //Subscribe to event: e.g. m_InterstitialAd.OnLoaded
            mockedEvent.SubscribeToRealEvent();

            //Raise mocked event: e.g. m_InterstitialAdMock.Raise(ad => ad.OnLoaded += null, args);
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
                m_InterstitialAdMock.Setup(mediation => mediation.AdState).Returns(state);
                Assert.AreEqual(m_InterstitialAd.AdState, state, "InterstitialAd.State mismatch");
            }
        }

        [Test]
        public void AdUnitIdTest()
        {
            m_InterstitialAdMock.Setup((ad => ad.AdUnitId)).Returns(TestConstants.AdUnitInterstitialId);
            Assert.AreEqual(m_InterstitialAd.AdUnitId, TestConstants.AdUnitInterstitialId, "InterstitialAd.State mismatch");
        }

        [Test]
        public void DisposeTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Dispose());
            m_InterstitialAd.Dispose();
            m_InterstitialAdMock.Verify(ad => ad.Dispose(), Times.Once());
        }
    }
}
#endif
