#if UNITY_MEDIATION_INCLUDE_ADAPTER_TESTS
using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class AdapterFacebookTests
    {
        InterstitialAd m_HeaderBiddingInterstitialAd;
        RewardedAd m_HeaderBiddingRewardedAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);

            m_HeaderBiddingInterstitialAd = new InterstitialAd(TestConstants.AdUnitHeaderBiddingInterstitialFacebook);
            m_HeaderBiddingRewardedAd = new RewardedAd(TestConstants.AdUnitHeaderBiddingRewardedFacebook);
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadHeaderBiddingInterstitialTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_HeaderBiddingInterstitialAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadHeaderBiddingRewardedTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_HeaderBiddingRewardedAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
        }
    }
}
#endif
