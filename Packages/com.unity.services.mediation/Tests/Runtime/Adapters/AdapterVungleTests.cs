#if UNITY_MEDIATION_INCLUDE_ADAPTER_TESTS
using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class AdapterVungleTests
    {
        InterstitialAd m_RegularInterstitialAd;
        RewardedAd m_RegularRewardedAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);

            m_RegularInterstitialAd = new InterstitialAd(TestConstants.AdUnitRegularInterstitialVungle);
            m_RegularRewardedAd     = new RewardedAd(TestConstants.AdUnitRegularRewardedVungle);
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
        public IEnumerator LoadRegularRewardedTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_RegularRewardedAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
        }
    }
}
#endif
