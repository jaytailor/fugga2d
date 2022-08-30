using System;
using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class PlatformInterstitialAdTests
    {
        InterstitialAd m_InterstitialAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);
            m_InterstitialAd = new InterstitialAd(TestConstants.AdUnitInterstitialId);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void UnloadedLoadStateTest()
        {
            Assert.AreEqual(AdState.Unloaded, m_InterstitialAd.AdState, "Expected unloaded state for ad not loaded");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            Assert.AreEqual(TestConstants.AdUnitInterstitialId, m_InterstitialAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadSuccessStateTest()
        {
            yield return RuntimeTestUtils.LoadSuccessStateTest(m_InterstitialAd, TestConstants.LoadRetryCount, TestConstants.LoadRetryDelay);
        }
    }
}
