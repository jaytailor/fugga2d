using System.Collections;
using System.Threading.Tasks;
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
            m_BannerAd = new BannerAd(TestConstants.AdUnitBannerId, BannerAdPredefinedSize.Banner.ToBannerAdSize());
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void LoadAsyncTest()
        {
            // Check to see if underlying bridge connection is valid
            Assert.AreEqual(m_BannerAd.AdState, AdState.Unloaded, "Expected unloaded state for ad not loaded");
            Assert.DoesNotThrow(() => m_BannerAd.LoadAsync());
            //Make sure the load has finished before checking the state
            var task = Task.Run(async() =>
            {
                await m_BannerAd.LoadAsync();
            });
            task.GetAwaiter().GetResult();
            Assert.AreEqual(m_BannerAd.AdState, AdState.Loaded, "Expected loaded state for loaded ad");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            Assert.AreEqual(TestConstants.AdUnitBannerId, m_BannerAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void UnloadedLoadStateTest()
        {
            Assert.AreEqual(AdState.Unloaded, m_BannerAd.AdState, "Expected unloaded state for ad not loaded");
        }
    }
}
