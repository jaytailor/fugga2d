namespace Unity.Services.Mediation.Tests
{
    public class TestConstants
    {
        public const int Timeout = 10000;
        public const string InvalidGameId = "InvalidGameId";

        public const string InstallId = "test-install-id";

#if UNITY_ANDROID
        public const string GameId = "3804049";
#elif UNITY_IOS
        public const string GameId = "3804048";
#else
        public const string GameId = "test-game-id";
#endif

#if UNITY_ANDROID
        public const string AdUnitInterstitialId = "interstitial_all_adunit";
        public const string AdUnitRewardedId = "rewarded_unity_adunit_1";
#elif UNITY_IOS
        public const string AdUnitInterstitialId = "interstitial_am_adunit";
        public const string AdUnitRewardedId = "rewarded_am_adunit";
#else
        public const string AdUnitInterstitialId = "test-interstitial-id";
        public const string AdUnitRewardedId = "test-rewarded-id";
#endif
    }
}
