using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class PlatformRewardedAdTests
    {
        RewardedAd m_RewardedAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);
            m_RewardedAd = new RewardedAd(TestConstants.AdUnitRewardedId);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void LoadTest()
        {
            // Check to see if underlying bridge connection is valid
            Assert.DoesNotThrow(() => m_RewardedAd.Load());
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void UnloadedLoadStateTest()
        {
            Assert.AreEqual(AdState.Unloaded, m_RewardedAd.AdState, "Expected unloaded state for ad not loaded");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            Assert.AreEqual(TestConstants.AdUnitRewardedId, m_RewardedAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadSuccessStateTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_RewardedAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
        }
    }
}
