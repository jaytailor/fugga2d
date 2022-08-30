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
    public class BannerAdTests
    {
        Mock<IPlatformBannerAd> m_BannerAdMock;
        BannerAd m_BannerAd;

        [SetUp]
        public void Setup()
        {
            m_BannerAdMock = new Mock<IPlatformBannerAd>(MockBehavior.Strict);
            m_BannerAd = new BannerAd(m_BannerAdMock.Object);
        }

        [UnityTest]
        public IEnumerator LoadAsyncTest()
        {
            m_BannerAdMock.Setup(ad => ad.Load()).Raises(e => e.OnLoaded += null, EventArgs.Empty);

            var task = LoadAsync(m_BannerAd);
            yield return new WaitUntil(() => task.IsCompleted);

            m_BannerAdMock.Verify(ad => ad.Load());
        }

        static async Task LoadAsync(BannerAd bannerAd)
        {
            await bannerAd.LoadAsync();
        }

        [Test]
        [TestCase(nameof(BannerAd.OnLoaded))]
        [TestCase(nameof(BannerAd.OnFailedLoad))]
        [TestCase(nameof(BannerAd.OnClicked))]
        [TestCase(nameof(BannerAd.OnRefreshed))]
        public void EventTest(string eventName)
        {
            var eventArgs = new Dictionary<string, EventArgs>
            {
                {nameof(BannerAd.OnLoaded), EventArgs.Empty},
                {nameof(BannerAd.OnFailedLoad), new LoadErrorEventArgs(LoadError.Unknown, "Test error message")},
                {nameof(BannerAd.OnClicked), EventArgs.Empty},
                {nameof(BannerAd.OnRefreshed), new LoadErrorEventArgs(LoadError.Unknown, "Test error message")}
            };

            var mockedEvent = new MockedEvent<IPlatformBannerAd>(m_BannerAdMock, m_BannerAd, eventName, eventArgs[eventName]);

            mockedEvent.SubscribeToRealEvent();

            mockedEvent.RaiseMockedEvent();

            //Verify that the real event has fired
            Assert.IsTrue(mockedEvent.RealEventFired, $"Event {eventName} did not fire");
            Assert.AreEqual(mockedEvent.obj, mockedEvent.RealEventFiredSender, $"Event {eventName} did not fire with the right sender");
            Assert.AreEqual(mockedEvent.eventArgs, mockedEvent.RealEventFiredArgs, $"Event {eventName} did not fire with the right arguments");

            mockedEvent.UnsubscribeFromRealEvent();
        }

        [Test]
        public void AdUnitIdTest()
        {
            m_BannerAdMock.Setup((ad => ad.AdUnitId)).Returns(TestConstants.AdUnitBannerId);
            Assert.AreEqual(m_BannerAd.AdUnitId, TestConstants.AdUnitBannerId, "BannerAd.AdUnitId mismatch");
        }

        [Test]
        public void StateTest()
        {
            m_BannerAdMock.Setup((ad => ad.AdState)).Returns(AdState.Unloaded);
            Assert.AreEqual(m_BannerAd.AdState, AdState.Unloaded, "BannerAd.AdState mismatch");
            m_BannerAdMock.Setup((ad => ad.AdState)).Returns(AdState.Loaded);
            Assert.AreEqual(m_BannerAd.AdState, AdState.Loaded, "BannerAd.AdState mismatch");
        }

        [Test]
        public void DisposeTest()
        {
            m_BannerAdMock.Setup(ad => ad.Dispose());
            m_BannerAd.Dispose();
            m_BannerAdMock.Verify(ad => ad.Dispose(), Times.Once());
        }
    }
}
#endif
