using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class PlatformBannerAdTests
    {
        BannerAd m_BannerAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);
            m_BannerAd = new BannerAd(TestConstants.AdUnitBannerId, BannerAdSize.Banner);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void LoadAsyncTest()
        {
            // Check to see if underlying bridge connection is valid
            Assert.Equals(m_BannerAd.AdState, AdState.Unloaded);
            Assert.DoesNotThrow(() => m_BannerAd.LoadAsync());
            Assert.Equals(m_BannerAd.AdState, AdState.Loaded);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            Assert.AreEqual(TestConstants.AdUnitBannerId, m_BannerAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }
    }
}
