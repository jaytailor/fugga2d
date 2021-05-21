using System;
using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Mediation.Tests
{
    public class PlatformInitializationTests
    {
        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator FailInitialization()
        {
            var isSuccessState = false;
            System.EventHandler initializationComplete = (sender, args) => {};
            System.EventHandler<InitializationErrorEventArgs> initializationFailed = (sender, args) => {};
            initializationComplete = (sender, args) =>
            {
                UnityMediation.OnInitializationFailed -= initializationFailed;
                UnityMediation.OnInitializationComplete -= initializationComplete;
                Assert.Fail("Initialization shouldn't succeed newtest test");
            };
            initializationFailed = (sender, args) =>
            {
                UnityMediation.OnInitializationComplete -= initializationComplete;
                UnityMediation.OnInitializationFailed -= initializationFailed;
                isSuccessState = true;
                Assert.AreEqual(InitializationState.Uninitialized, UnityMediation.InitializationState);
            };
            UnityMediation.OnInitializationComplete += initializationComplete;//(sender, args) => Assert.Fail("Initialization shouldn't succeed");
            UnityMediation.OnInitializationFailed += initializationFailed;
            UnityMediation.Initialize(TestConstants.InvalidGameId);
            yield return new WaitUntil(() => isSuccessState);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void InitialStateUninitialized()
        {
            Assert.AreEqual(InitializationState.Uninitialized, UnityMediation.InitializationState, "SDK should be in Uninitialized State when first used");
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
            UnityMediation.Initialize(TestConstants.GameId);
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
            UnityMediation.Initialize(TestConstants.GameId);
            yield return new WaitUntil(() => isSuccessState);
        }
    }
}
