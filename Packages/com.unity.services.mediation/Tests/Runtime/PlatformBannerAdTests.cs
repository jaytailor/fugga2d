using System.Collections;
using System.Threading.Tasks;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class PlatformBannerAdTests
    {
        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (MediationService.InitializationState != InitializationState.Initialized)
            {
                MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            }

            yield return new WaitUntil(() => MediationService.InitializationState == InitializationState.Initialized);
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadAsyncTest()
        {
            var bannerAd = new BannerAd(TestConstants.AdUnitBannerId, BannerAdPredefinedSize.Banner.ToBannerAdSize());
            // Check to see if underlying bridge connection is valid
            Assert.AreEqual(bannerAd.AdState, AdState.Unloaded, "Expected unloaded state for ad not loaded");

            var task = LoadBanner(bannerAd);
            yield return new WaitUntil(() => task.IsCompleted);
            Debug.Log("Task status:" + task.Status + "\n is completed:" + task.IsCompleted + "\n is faulted:" + task.IsFaulted + "\n is canceled:" + task.IsCanceled);

            Assert.AreEqual(task.Status, TaskStatus.RanToCompletion);
            Assert.AreEqual(bannerAd.AdState, AdState.Showing, "Expected showing state for loaded banner ad");
        }

        static async Task LoadBanner(BannerAd bannerAd)
        {
            await bannerAd.LoadAsync();
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            var bannerAd = new BannerAd(TestConstants.AdUnitBannerId, BannerAdPredefinedSize.Banner.ToBannerAdSize());
            Assert.AreEqual(TestConstants.AdUnitBannerId, bannerAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void UnloadedLoadStateTest()
        {
            var bannerAd = new BannerAd(TestConstants.AdUnitBannerId, BannerAdPredefinedSize.Banner.ToBannerAdSize());
            Assert.AreEqual(AdState.Unloaded, bannerAd.AdState, "Expected unloaded state for ad not loaded");
        }
    }
}
