#if NUGET_MOQ_AVAILABLE && UNITY_EDITOR
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Moq;
using NUnit.Framework;
using Unity.Services.Core;
using Unity.Services.Core.Internal;
using Unity.Services.Core.Scheduler.Internal;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class RewardedAdTests
    {
        Mock<IPlatformRewardedAd> m_RewardedAdMock;
        RewardedAd m_RewardedAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
#if TEMP_REMOVED
            var done = false;
            UnityServices.InitializeAsync().ContinueWith(x =>
            {
                done = true;
            });

            while (!done)
            {
                yield return null;
            }

            IActionScheduler actionScheduler = CoreRegistry.Instance.GetServiceComponent<IActionScheduler>();
            Assert.NotNull(actionScheduler);

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);
#endif
            yield return null;
            m_RewardedAdMock = new Mock<IPlatformRewardedAd>(MockBehavior.Strict);
            m_RewardedAd = new RewardedAd(m_RewardedAdMock.Object);
        }

#if TEMP_REMOVED
        [UnityTest]
        public IEnumerator AutoReloadTest()
        {
            RewardedAdShowOptions showOptions = new RewardedAdShowOptions();

            m_RewardedAdMock.Setup(ad => ad.Show(showOptions)).Raises(e => e.OnClosed += null, EventArgs.Empty);
            m_RewardedAdMock.Setup(ad => ad.Load()).Raises(e => e.OnLoaded += null, EventArgs.Empty);

            var task = Task.Run(async() =>
            {
                showOptions.AutoReload = true;
                await m_RewardedAd.ShowAsync(showOptions);
            });
            //wait an extra 100ms for threading, to be safe
            yield return new WaitForSeconds((float)RewardedAd.k_ReloadDelay + 0.1f);
            task.GetAwaiter().GetResult();
            m_RewardedAdMock.Verify(ad => ad.Load());

            task = Task.Run(async() =>
            {
                showOptions.AutoReload = false;
                await m_RewardedAd.ShowAsync(showOptions);
            });
            //wait an extra 100ms for threading, to be safe
            yield return new WaitForSeconds((float)RewardedAd.k_ReloadDelay + 0.1f);
            task.GetAwaiter().GetResult();
            m_RewardedAdMock.Verify(ad => ad.Load(), Times.Once());
        }

#endif

        async Task ShowAsync(RewardedAd rewardedAd, RewardedAdShowOptions showOptions = null)
        {
            await rewardedAd.ShowAsync(showOptions);
        }

        [UnityTest]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator ShowAsyncTest()
        {
            m_RewardedAdMock.Setup(ad => ad.Show(null)).Raises(e => e.OnClosed += null, EventArgs.Empty);

            var task = ShowAsync(m_RewardedAd);
            yield return new WaitUntil(() => task.IsCompleted);

            m_RewardedAdMock.Verify(ad => ad.Show(null));
        }

        [UnityTest]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadAsyncTest()
        {
            m_RewardedAdMock.Setup(ad => ad.Load()).Raises(e => e.OnLoaded += null, EventArgs.Empty);

            var task = LoadAsync(m_RewardedAd);
            yield return new WaitUntil(() => task.IsCompleted);

            m_RewardedAdMock.Verify(ad => ad.Load());
        }

        static async Task LoadAsync(RewardedAd rewardedAd)
        {
            await rewardedAd.LoadAsync();
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

            var mockedEvent = new MockedEvent<IPlatformRewardedAd>(m_RewardedAdMock, m_RewardedAd, eventName, eventArgs[eventName]);

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
