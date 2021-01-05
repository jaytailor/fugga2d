using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Unity.Mediation.Tests
{
    public class PlatformRewardedAdTests
    {
        RewardedAd m_RewardedAd;

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
            m_RewardedAd = new RewardedAd(TestConstants.GameId, TestConstants.AdUnitRewardedId);
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void LoadTest()
        {
            // Check to see if underlying bridge connection is valid
            Assert.DoesNotThrow(() => m_RewardedAd.Load());
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void UnloadedLoadStateTest()
        {
            Assert.AreEqual(AdState.Unloaded, m_RewardedAd.AdState, "Expected unloaded state for ad not loaded");
        }

        [Test]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        public void GetAdUnitTest()
        {
            Assert.AreEqual(TestConstants.AdUnitRewardedId, m_RewardedAd.AdUnitId, "Expected identical adUnitId's from bridge layer");
        }

        [UnityTest]
        [UnityPlatform(RuntimePlatform.Android, RuntimePlatform.IPhonePlayer)]
        [Timeout(TestConstants.Timeout)]
        public IEnumerator LoadSuccessStateTest()
        {
            bool isSuccessState = false;
            m_RewardedAd.OnLoaded += (sender, args) =>
            {
                Assert.AreEqual(AdState.Loaded, m_RewardedAd.AdState, "Expected loaded state for loaded ad");
                isSuccessState = true;
            };
            m_RewardedAd.OnFailedLoad += (sender, args) =>
            {
                Assert.Fail(args.Message);
            };

            m_RewardedAd.Load();
            yield return new WaitUntil(() => isSuccessState);
        }
    }
}
