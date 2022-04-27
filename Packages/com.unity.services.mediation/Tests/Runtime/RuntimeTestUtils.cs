using System.Collections;
using NUnit.Framework;
using UnityEngine;

namespace Unity.Services.Mediation.Tests
{
    static class RuntimeTestUtils
    {
        public static IEnumerator LoadSuccessStateTest(InterstitialAd ad, int retryCount, float retryDelay)
        {
            bool? isSuccessState;

            ad.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, ad.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };

            ad.OnFailedLoad += (sender, args) =>
            {
                isSuccessState = false;
            };

            do
            {
                isSuccessState = null;

                if (retryCount <= 0)
                {
                    ad.OnFailedLoad += (sender, args) =>
                    {
                        Assert.Fail(args.Message);
                    };
                }

                ad.Load();
                yield return new WaitUntil(() => isSuccessState != null);

                if (retryCount > 0 && !isSuccessState.Value)
                {
                    yield return new WaitForSeconds(retryDelay);
                }

                retryCount--;
            }
            while (!isSuccessState.Value && retryCount >= 0);
        }

        public static IEnumerator LoadSuccessStateTest(RewardedAd ad, int retryCount, float retryDelay)
        {
            bool? isSuccessState;

            ad.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, ad.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };

            ad.OnFailedLoad += (sender, args) =>
            {
                isSuccessState = false;
            };

            do
            {
                isSuccessState = null;

                if (retryCount <= 0)
                {
                    ad.OnFailedLoad += (sender, args) =>
                    {
                        Assert.Fail(args.Message);
                    };
                }

                ad.Load();
                yield return new WaitUntil(() => isSuccessState != null);

                if (retryCount > 0 && !isSuccessState.Value)
                {
                    yield return new WaitForSeconds(retryDelay);
                }

                retryCount--;
            }
            while (!isSuccessState.Value && retryCount >= 0);
        }
    }
}
