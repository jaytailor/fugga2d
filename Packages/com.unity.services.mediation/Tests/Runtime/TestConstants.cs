namespace Unity.Services.Mediation.Tests
{
    public class TestConstants
    {
        public const int Timeout = 10000;
        public const int LoadRetryCount = 3;
        public const float LoadRetryDelay = 2f;
        public const string InvalidGameId = "InvalidGameId";

        public const string InstallId = "test-install-id";

#if UNITY_ANDROID
        public const string GameId = "4302165";
#elif UNITY_IOS
        public const string GameId = "4302164";
#else
        public const string GameId = "test-game-id";
#endif

#if UNITY_ANDROID
        public const string AdUnitInterstitialId = "and_reg_int_unity";
        public const string AdUnitRewardedId     = "and_reg_rew_unity";

        //Unity Ads
        public const string AdUnitRegularInterstitialUnity       = "and_reg_int_unity";
        public const string AdUnitHeaderBiddingInterstitialUnity = "and_hb_int_unity";
        public const string AdUnitRegularRewardedUnity           = "and_reg_rew_unity";
        public const string AdUnitHeaderBiddingRewardedUnity     = "and_hb_rew_unity";

        //AppLovin Ads
        public const string AdUnitRegularInterstitialAppLovin    = "and_reg_int_applovin";
        public const string AdUnitRegularRewardedAppLovin        = "and_reg_rew_applovin";

        //AdMob Ads
        public const string AdUnitRegularInterstitialAdMob       = "and_reg_int_admob";
        public const string AdUnitRegularRewardedAdMob           = "and_reg_rew_admob";

        //AdColony Ads
        public const string AdUnitRegularInterstitialAdColony       = "and_reg_int_adcolony";
        public const string AdUnitHeaderBiddingInterstitialAdColony = "and_hb_int_adcolony";
        public const string AdUnitRegularRewardedAdColony           = "and_reg_rew_adcolony";
        public const string AdUnitHeaderBiddingRewardedAdColony     = "and_hb_rew_adcolony";

        //Facebook Ads
        public const string AdUnitHeaderBiddingInterstitialFacebook = "and_hb_int_facebook";
        public const string AdUnitHeaderBiddingRewardedFacebook     = "and_hb_rew_facebook";

        //IronSource Ads
        public const string AdUnitRegularInterstitialIronSource       = "and_reg_int_ironsource";
        public const string AdUnitHeaderBiddingInterstitialIronSource = "and_hb_int_ironsource";
        public const string AdUnitRegularRewardedIronSource           = "and_reg_rew_ironsource";
        public const string AdUnitHeaderBiddingRewardedIronSource     = "and_hb_rew_ironsource";

        //Vungle Ads
        public const string AdUnitRegularInterstitialVungle = "and_reg_int_vungle";
        public const string AdUnitRegularRewardedVungle     = "and_reg_rew_vungle";

#elif UNITY_IOS
        public const string AdUnitInterstitialId = "ios_reg_int_unity";
        public const string AdUnitRewardedId     = "ios_reg_rew_unity";

        //Unity Ads
        public const string AdUnitRegularInterstitialUnity       = "ios_reg_int_unity";
        public const string AdUnitHeaderBiddingInterstitialUnity = "ios_hb_int_unity";
        public const string AdUnitRegularRewardedUnity           = "ios_reg_int_unity";
        public const string AdUnitHeaderBiddingRewardedUnity     = "ios_hb_rew_unity";

        //AppLovin Ads
        public const string AdUnitRegularInterstitialAppLovin    = "ios_reg_int_applovin";
        public const string AdUnitRegularRewardedAppLovin        = "ios_reg_rew_applovin";

        //AdMob Ads
        public const string AdUnitRegularInterstitialAdMob       = "ios_reg_int_admob";
        public const string AdUnitRegularRewardedAdMob           = "ios_reg_rew_admob";

        //AdColony Ads
        public const string AdUnitRegularInterstitialAdColony       = "ios_reg_int_adcolony";
        public const string AdUnitHeaderBiddingInterstitialAdColony = "ios_hb_int_adcolony";
        public const string AdUnitRegularRewardedAdColony           = "ios_reg_rew_adcolony";
        public const string AdUnitHeaderBiddingRewardedAdColony     = "ios_hb_rew_adcolony";

        //Facebook Ads
        public const string AdUnitHeaderBiddingInterstitialFacebook = "ios_hb_int_facebook";
        public const string AdUnitHeaderBiddingRewardedFacebook     = "ios_hb_rew_facebook";

        //IronSource Ads
        public const string AdUnitRegularInterstitialIronSource       = "ios_reg_int_ironsource";
        public const string AdUnitHeaderBiddingInterstitialIronSource = "ios_hb_int_ironsource";
        public const string AdUnitRegularRewardedIronSource           = "ios_reg_rew_ironsource";
        public const string AdUnitHeaderBiddingRewardedIronSource     = "ios_hb_rew_ironsource";

        //Vungle Ads
        public const string AdUnitRegularInterstitialVungle = "ios_reg_int_vungle";
        public const string AdUnitRegularRewardedVungle     = "ios_reg_rew_vungle";
#else
        public const string AdUnitInterstitialId = "test-interstitial-id";
        public const string AdUnitRewardedId     = "test-rewarded-id";
#endif
    }
}
