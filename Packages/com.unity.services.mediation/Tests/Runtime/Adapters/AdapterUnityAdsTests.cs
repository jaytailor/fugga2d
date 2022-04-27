#if UNITY_MEDIATION_INCLUDE_ADAPTER_TESTS
using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class AdapterUnityAdsTests
    {
        InterstitialAd m_RegularInterstitialAd;
        InterstitialAd m_HeaderBiddingInterstitialAd;
        RewardedAd m_RegularRewardedAd;
        RewardedAd m_HeaderBiddingRewardedAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);

            m_RegularInterstitialAd       = new InterstitialAd(TestConstants.AdUnitRegularInterstitialUnity);
            m_HeaderBiddingInterstitialAd = new InterstitialAd(TestConstants.AdUnitHeaderBiddingInterstitialUnity);

            m_RegularRewardedAd       = new RewardedAd(TestConstants.AdUnitRegularRewardedUnity);
            m_HeaderBiddingRewardedAd = new RewardedAd(TestConstants.AdUnitHeaderBiddingRewardedUnity);
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadRegularInterstitialTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_RegularInterstitialAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
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
        public IEnumerator LoadRegularRewardedTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_RegularRewardedAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
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
