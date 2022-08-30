#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Moq;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class InterstitialAdTests
    {
        Mock<IPlatformInterstitialAd> m_InterstitialAdMock;
        InterstitialAd m_InterstitialAd;

        [SetUp]
        public void Setup()
        {
            m_InterstitialAdMock = new Mock<IPlatformInterstitialAd>(MockBehavior.Strict);
            m_InterstitialAd = new InterstitialAd(m_InterstitialAdMock.Object);
        }

        [UnityTest]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadAsyncTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Load()).Raises(e => e.OnLoaded += null, EventArgs.Empty);
            var task = LoadAsync(m_InterstitialAd);
            yield return new WaitUntil(() => task.IsCompleted);
            m_InterstitialAdMock.Verify(ad => ad.Load());
        }

        static async Task LoadAsync(InterstitialAd interstitialAd)
        {
            await interstitialAd.LoadAsync();
        }

        [UnityTest]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator AutoReloadTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Show()).Raises(e => e.OnClosed += null, EventArgs.Empty);
            m_InterstitialAdMock.Setup(ad => ad.Load()).Raises(e => e.OnLoaded += null, EventArgs.Empty);

            InterstitialAdShowOptions showOptions = new InterstitialAdShowOptions();
            showOptions.AutoReload = true;

            var task = ShowAsync(m_InterstitialAd, showOptions);
            yield return new WaitUntil(() => task.IsCompleted);

            m_InterstitialAdMock.Verify(ad => ad.Load());

            showOptions.AutoReload = false;
            task = ShowAsync(m_InterstitialAd, showOptions);
            yield return new WaitUntil(() => task.IsCompleted);

            task.GetAwaiter().GetResult();
            m_InterstitialAdMock.Verify(ad => ad.Load(), Times.Once());
        }

        static async Task ShowAsync(InterstitialAd interstitialAd, InterstitialAdShowOptions showOptions)
        {
            await interstitialAd.ShowAsync(showOptions);
        }

        [UnityTest]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator ShowAsyncTest()
        {
            m_InterstitialAdMock.Setup(ad => ad.Show()).Raises(e => e.OnClosed += null, EventArgs.Empty);

            var task = ShowAsync(m_InterstitialAd);
            yield return new WaitUntil(() => task.IsCompleted);

            m_InterstitialAdMock.Verify(ad => ad.Show());
        }

        static async Task ShowAsync(InterstitialAd interstitialAd)
        {
            await interstitialAd.ShowAsync();
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

            var mockedEvent = new MockedEvent<IPlatformInterstitialAd>(m_InterstitialAdMock, m_InterstitialAd, eventName, eventArgs[eventName]);

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
            Assert.AreEqual(m_InterstitialAd.AdUnitId, TestConstants.AdUnitInterstitialId, "InterstitialAd.AdUnitId mismatch");
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
