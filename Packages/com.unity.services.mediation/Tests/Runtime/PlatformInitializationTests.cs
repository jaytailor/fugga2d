using System;
using System.Collections;
using System.Threading.Tasks;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Services.Mediation.Tests
{
    public class PlatformInitializationTests
    {
        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator FailInitialization()
        {
            var initializeTask = MediationService.Initialize(TestConstants.InvalidGameId, TestConstants.InstallId);
            yield return new WaitUntil(() =>
            {
                return initializeTask.IsCompleted;
            });
            Assert.AreEqual(InitializationState.Uninitialized, MediationService.InitializationState);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void InitialStateUninitialized()
        {
            Assert.AreEqual(InitializationState.Uninitialized, MediationService.InitializationState, "SDK should be in Uninitialized State when first used");
        }

        // [UnityTest]
        // [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        // [Timeout(TestConstants.Timeout)]
        public IEnumerator InverseInterstitialAdInitializeLoadCall()
        {
            var isSuccessState = false;
            var interstitialAd = new InterstitialAd(TestConstants.AdUnitInterstitialId);
            interstitialAd.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, interstitialAd.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };
            interstitialAd.OnFailedLoad += (sender, args) =>
            {
                Assert.Fail(args.Message);
            };

            interstitialAd.Load();
            Assert.AreEqual(interstitialAd.AdState, AdState.Unloaded);
            MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            yield return new WaitUntil(() => isSuccessState);
        }

        // [UnityTest]
        // [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        // [Timeout(TestConstants.Timeout)]
        public IEnumerator InverseRewardedAdInitializeLoadCall()
        {
            var isSuccessState = false;
            var rewardedAd = new RewardedAd(TestConstants.AdUnitRewardedId);
            rewardedAd.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, rewardedAd.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };
            rewardedAd.OnFailedLoad += (sender, args) =>
            {
                Assert.Fail(args.Message);
            };

            rewardedAd.Load();
            Assert.AreEqual(rewardedAd.AdState, AdState.Unloaded);
            MediationService.Initialize(TestConstants.GameId, TestConstants.InstallId);
            yield return new WaitUntil(() => isSuccessState);
        }
    }
}
