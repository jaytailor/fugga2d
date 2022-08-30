using System;
using System.Collections;
using System.Threading.Tasks;
using NUnit.Framework;
using UnityEngine;

namespace Unity.Services.Mediation.Tests
{
    static class RuntimeTestUtils
    {
        public static IEnumerator LoadSuccessStateTest(InterstitialAd ad, int retryCount, float retryDelay)
        {
            bool isSuccessState;
            do
            {
                isSuccessState = false;

                var task = LoadInterstitial(ad);

                yield return new WaitUntil(() => task.IsCompleted);

                if (task.IsFaulted)
                {
                    yield return new WaitForSeconds(retryDelay);
                    if (retryCount <= 0)
                    {
                        Assert.Fail(task.Exception.Message);
                    }
                }
                else
                {
                    Assert.AreEqual(AdState.Loaded, ad.AdState, "Expected loaded state for loaded ad");
                    isSuccessState = true;
                }

                retryCount--;
            }
            while (!isSuccessState && retryCount >= 0);
        }

        static async Task LoadInterstitial(InterstitialAd interstitialAd)
        {
            await interstitialAd.LoadAsync();
        }

        public static IEnumerator LoadSuccessStateTest(RewardedAd ad, int retryCount, float retryDelay)
        {
            bool isSuccessState;
            do
            {
                isSuccessState = false;

                var task = LoadRewarded(ad);

                yield return new WaitUntil(() => task.IsCompleted);

                if (task.IsFaulted)
                {
                    yield return new WaitForSeconds(retryDelay);
                    if (retryCount <= 0)
                    {
                        Assert.Fail(task.Exception.Message);
                    }
                }
                else
                {
                    Assert.AreEqual(AdState.Loaded, ad.AdState, "Expected loaded state for loaded ad");
                    isSuccessState = true;
                }

                retryCount--;
            }
            while (!isSuccessState && retryCount >= 0);
        }
        
        static async Task LoadRewarded(RewardedAd rewardedAd)
        {
            await rewardedAd.LoadAsync();
        }
    }
}
