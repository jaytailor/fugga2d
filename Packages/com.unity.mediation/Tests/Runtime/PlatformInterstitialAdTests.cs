using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Mediation.Tests
{
    public class PlatformInterstitialAdTests
    {
        InterstitialAd m_InterstitialAd;

        [UnitySetUp]
        public IEnumerator SetUp()
        {
            if (UnityMediation.State != InitializationState.Initialized)
            {
                UnityMediation.OnInitializationComplete += (sender, args) =>
                    Assert.AreEqual(InitializationState.Initialized, UnityMediation.State);
                UnityMediation.OnInitializationFailed += (sender, args) => Assert.Fail("Initialization Failed");
                UnityMediation.Initialize(TestConstants.GameId);
            }

            yield return new WaitUntil(() => UnityMediation.State == InitializationState.Initialized);
            m_InterstitialAd = new InterstitialAd(TestConstants.GameId, TestConstants.AdUnitInterstitialId);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void LoadTest()
        {
            // Check to see if underlying bridge connection is valid
            Assert.DoesNotThrow(() => m_InterstitialAd.Load());
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
            bool isSuccessState = false;
            m_InterstitialAd.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, m_InterstitialAd.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };
            m_InterstitialAd.OnFailedLoad += (sender, args) =>
            {
                Assert.Fail(args.Message);
            };

            m_InterstitialAd.Load();
            yield return new WaitUntil(() => isSuccessState);
        }
    }
}
