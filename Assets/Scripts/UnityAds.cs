using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.LevelPlay;

public class UnityAds
{
#if UNITY_IOS
    private string levelPlayAppKey = "23bb0c215";
    private string bannerAdUnitId = "zjvzv4s694behqme";
    private string interstitialAdUnitId = "liu8jgw8tn5txxos";
    private string rewardedAdUnitIdHome = "pr1c92hwibckvn3s";
    private string rewardedAdUnitIdShop = "ft0izbk84to6h5yl";
#else
    private string levelPlayAppKey = "Unknown";
    private string bannerAdUnitId = "Unknown";
    private string interstitialAdUnitId = "Unknown";
    private string rewardedAdUnitIdHome = "Unknown";
    private string rewardedAdUnitIdShop = "Unknown";
#endif
    private LevelPlayBannerAd bannerAd;
    private LevelPlayInterstitialAd interstitialAd;
    private LevelPlayRewardedAd rewardedAd;

    public void Initialize()
    {
        Debug.Log("UnityAds Initialize");    
        // Register OnInitFailed and OnInitSuccess listeners
        LevelPlay.OnInitSuccess += SdkInitializationCompletedEvent;
        LevelPlay.OnInitFailed += SdkInitializationFailedEvent;
        // SDK init
        LevelPlay.Init(levelPlayAppKey);
    }

    void SdkInitializationCompletedEvent(LevelPlayConfiguration config)
    {
        Debug.Log($"[LevelPlaySample] Received SdkInitializationCompletedEvent with Config: {config}");
        // LevelPlay.LaunchTestSuite();
        LevelPlay.ValidateIntegration();
    }

    void SdkInitializationFailedEvent(LevelPlayInitError error)
    {
        Debug.Log($"[LevelPlaySample] Received SdkInitializationFailedEvent with Error: {error}");
    }

#region Banner
    public void LoadBanner()
    {
        if (bannerAd != null) {
            bannerAd.ShowAd();
            return;
        }
        bannerAd = new LevelPlayBannerAd(bannerAdUnitId);   

        // Register to the events 
        bannerAd.OnAdLoaded += BannerOnAdLoadedEvent;
        bannerAd.OnAdLoadFailed += BannerOnAdLoadFailedEvent;
        bannerAd.OnAdDisplayed += BannerOnAdDisplayedEvent;
        bannerAd.OnAdDisplayFailed += BannerOnAdDisplayFailedEvent;
        bannerAd.OnAdClicked += BannerOnAdClickedEvent;
        bannerAd.OnAdCollapsed += BannerOnAdCollapsedEvent;
        bannerAd.OnAdLeftApplication += BannerOnAdLeftApplicationEvent;
        bannerAd.OnAdExpanded += BannerOnAdExpandedEvent;
        // Load the ad
        bannerAd.LoadAd();
    }

    public void HideBanner()
    {
        if (bannerAd != null) {
            bannerAd.HideAd();
        }
    }

    public void ShowBanner()
    {
        if (bannerAd != null) {
            bannerAd.ShowAd();
        }
    }

    // Implement the events
    void BannerOnAdLoadedEvent(LevelPlayAdInfo adInfo) {
        ShowBanner();
    }
    void BannerOnAdLoadFailedEvent(LevelPlayAdError ironSourceError) {}
    void BannerOnAdClickedEvent(LevelPlayAdInfo adInfo) {}
    void BannerOnAdDisplayedEvent(LevelPlayAdInfo adInfo) {}
    void BannerOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error){}
    void BannerOnAdCollapsedEvent(LevelPlayAdInfo adInfo) {}
    void BannerOnAdLeftApplicationEvent(LevelPlayAdInfo adInfo) {}
    void BannerOnAdExpandedEvent(LevelPlayAdInfo adInfo) {}

#endregion

#region Interstitial
    public void LoadInterstitial()    {
        interstitialAd = new LevelPlayInterstitialAd(interstitialAdUnitId);
        // Register to interstitial events
        interstitialAd.OnAdLoaded += InterstitialOnAdLoadedEvent;
        interstitialAd.OnAdLoadFailed += InterstitialOnAdLoadFailedEvent;
        interstitialAd.OnAdDisplayed += InterstitialOnAdDisplayedEvent;
        interstitialAd.OnAdDisplayFailed += InterstitialOnAdDisplayFailedEvent;
        interstitialAd.OnAdClicked += InterstitialOnAdClickedEvent;
        interstitialAd.OnAdClosed += InterstitialOnAdClosedEvent;
        interstitialAd.OnAdInfoChanged += InterstitialOnAdInfoChangedEvent;
        // Load the ad
        interstitialAd.LoadAd();
    }

    public void ShowInterstitial()
    {
        if (interstitialAd != null && interstitialAd.IsAdReady())
        {
            interstitialAd.ShowAd();
        }
        else
        {
            Debug.Log("Interstitial ad is not ready to show");
        }
    }

// Implement the events
    void InterstitialOnAdLoadedEvent(LevelPlayAdInfo adInfo){
        Debug.Log($"[LevelPlaySample] Received InterstitialOnAdLoadedEvent With AdInfo: {adInfo}");
        ShowInterstitial();
    }
    
    void InterstitialOnAdLoadFailedEvent(LevelPlayAdError error){}
    void InterstitialOnAdDisplayedEvent(LevelPlayAdInfo adInfo){}
    void InterstitialOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error){}
    void InterstitialOnAdClickedEvent(LevelPlayAdInfo adInfo){}
    void InterstitialOnAdClosedEvent(LevelPlayAdInfo adInfo){}
    void InterstitialOnAdInfoChangedEvent(LevelPlayAdInfo adInfo){}
#endregion

#region Rewarded Video
    public void LoadRewardedVideo(bool isHome)
    {
        rewardedAd = new LevelPlayRewardedAd(isHome ? rewardedAdUnitIdHome : rewardedAdUnitIdShop);
        rewardedAd.OnAdLoaded += RewardedOnAdLoadedEvent;
        rewardedAd.OnAdLoadFailed += RewardedOnAdLoadFailedEvent;
        rewardedAd.OnAdDisplayed += RewardedOnAdDisplayedEvent;
        rewardedAd.OnAdDisplayFailed += RewardedOnAdDisplayFailedEvent;
        rewardedAd.OnAdRewarded += RewardedOnAdRewardedEvent; 
        rewardedAd.OnAdClosed += RewardedOnAdClosedEvent;
        // Optional 
        rewardedAd.OnAdClicked += RewardedOnAdClickedEvent;
        rewardedAd.OnAdInfoChanged += RewardedOnAdInfoChangedEvent;
        // Load the ad
        rewardedAd.LoadAd();
    }

    public void ShowRewardedVideo()
    {
        if (rewardedAd != null && rewardedAd.IsAdReady())
        {
            rewardedAd.ShowAd();
        }
        else
        {
            Debug.Log("Rewarded video ad is not ready to show");
        }
    }
    
    void RewardedOnAdLoadedEvent(LevelPlayAdInfo adInfo){
        ShowRewardedVideo();
    }
    void RewardedOnAdLoadFailedEvent(LevelPlayAdError error){}
    void RewardedOnAdDisplayedEvent(LevelPlayAdInfo adInfo){}
    void RewardedOnAdDisplayFailedEvent(LevelPlayAdInfo adInfo, LevelPlayAdError error){}
    void RewardedOnAdRewardedEvent(LevelPlayAdInfo adInfo, LevelPlayReward adReward){}
    void RewardedOnAdClosedEvent(LevelPlayAdInfo adInfo){}
    void RewardedOnAdClickedEvent(LevelPlayAdInfo adInfo){} 
    void RewardedOnAdInfoChangedEvent(LevelPlayAdInfo adInfo){}
#endregion

}
