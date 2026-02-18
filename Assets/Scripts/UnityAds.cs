using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.LevelPlay;
using com.adjust.sdk;
#if UNITY_IOS
using Unity.Advertisement.IosSupport;
#endif

public class UnityAds
{
#if UNITY_IOS
    private string appKey = "18d4c8215"; // iOS App Key
    private string interstitialAdUnitId = "qxh03014vynv6w2v";
    private string rewardedAdUnitId = "edzxurvkum1rmx3u";
#elif UNITY_ANDROID
    private string appKey = "18d4c488d"; // Android App Key
    private string interstitialAdUnitId = "qxh03014vynv6w2v";
    private string rewardedAdUnitId = "edzxurvkum1rmx3u";
#else
    private string appKey = "18d4c488d"; // Editor fallback
    private string interstitialAdUnitId = "qxh03014vynv6w2v";
    private string rewardedAdUnitId = "edzxurvkum1rmx3u";
#endif

    public GameObject adBtn;

    private LevelPlayInterstitialAd interstitialAd;
    private LevelPlayRewardedAd rewardedAd;

    public void Initialize()
    {
        Debug.Log("=== LEVELPLAY INITIALIZATION START ===");
        Debug.Log("App Key: " + appKey);
        Debug.Log("Platform: " + Application.platform);

#if UNITY_IOS
        // Request ATT permission on iOS
        if (ATTrackingStatusBinding.GetAuthorizationTrackingStatus() == ATTrackingStatusBinding.AuthorizationTrackingStatus.NOT_DETERMINED)
        {
            Debug.Log("Requesting iOS ATT permission...");
            ATTrackingStatusBinding.RequestAuthorizationTracking();
        }
#endif

        // Register initialization callbacks
        LevelPlay.OnInitSuccess += OnInitSuccess;
        LevelPlay.OnInitFailed += OnInitFailed;

        // Initialize LevelPlay SDK
        Debug.Log("Initializing LevelPlay SDK...");
        LevelPlay.Init(appKey);
    }

    void OnInitSuccess(LevelPlayConfiguration config)
    {
        Debug.Log("=== LEVELPLAY INITIALIZED SUCCESSFULLY ===");
        Debug.Log("LevelPlay Config: " + config);

        // Validate integration (useful for debugging)
        LevelPlay.ValidateIntegration();

        // Load ads after successful initialization
        LoadInterstitial();
        LoadRewarded();
    }

    void OnInitFailed(LevelPlayInitError error)
    {
        Debug.LogError("=== LEVELPLAY INITIALIZATION FAILED ===");
        Debug.LogError("Error Code: " + error.ErrorCode);
        Debug.LogError("Error Message: " + error.ErrorMessage);
    }

    #region Interstitial Ads

    public void LoadInterstitial()
    {
        if (interstitialAd != null)
        {
            Debug.Log("Interstitial ad already exists, checking if loaded...");
            if (interstitialAd.IsAdReady())
            {
                Debug.Log("Interstitial ad already loaded and ready");
                return;
            }
        }

        Debug.Log("Creating Interstitial Ad...");
        interstitialAd = new LevelPlayInterstitialAd(interstitialAdUnitId);

        // Register to interstitial events
        interstitialAd.OnAdLoaded += InterstitialOnAdLoaded;
        interstitialAd.OnAdLoadFailed += InterstitialOnAdLoadFailed;
        interstitialAd.OnAdDisplayed += InterstitialOnAdDisplayed;
        interstitialAd.OnAdDisplayFailed += InterstitialOnAdDisplayFailed;
        interstitialAd.OnAdClicked += InterstitialOnAdClicked;
        interstitialAd.OnAdClosed += InterstitialOnAdClosed;
        interstitialAd.OnAdInfoChanged += InterstitialOnAdInfoChanged;

        // Load the ad
        Debug.Log("Loading Interstitial Ad...");
        interstitialAd.LoadAd();
    }

    public void ShowInterstitial()
    {
        Debug.Log("ShowInterstitial called");
        if (interstitialAd != null && interstitialAd.IsAdReady())
        {
            Debug.Log("Showing Interstitial Ad...");
            interstitialAd.ShowAd();
        }
        else
        {
            Debug.LogWarning("Interstitial ad not ready. Loading...");
            LoadInterstitial();
        }
    }

    public void ShowVideo()
    {
        ShowInterstitial();
    }

    // Interstitial Event Handlers
    void InterstitialOnAdLoaded(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Interstitial Ad Loaded: " + adInfo.AdUnitId);
        if (adBtn != null)
        {
            adBtn.SetActive(true);
        }
    }

    void InterstitialOnAdLoadFailed(LevelPlayAdError error)
    {
        Debug.LogError("INTERSTITIAL AD LOAD FAILED");
        Debug.LogError("Error Code: " + error.ErrorCode);
        Debug.LogError("Error Message: " + error.ErrorMessage);
        Debug.LogError("Ad Unit ID: " + interstitialAdUnitId);
    }

    void InterstitialOnAdDisplayed(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Interstitial Ad Displayed: " + adInfo.AdUnitId);
    }

    void InterstitialOnAdDisplayFailed(LevelPlayAdDisplayInfoError error)
    {
        Debug.LogError("INTERSTITIAL AD DISPLAY FAILED");
        Debug.LogError("Error Code: " + error.ErrorCode);
        Debug.LogError("Error Message: " + error.ErrorMessage);

        // Try to reload
        LoadInterstitial();
    }

    void InterstitialOnAdClicked(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Interstitial Ad Clicked: " + adInfo.AdUnitId);
    }

    void InterstitialOnAdClosed(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Interstitial Ad Closed: " + adInfo.AdUnitId);

        // Load next ad
        LoadInterstitial();
    }

    void InterstitialOnAdInfoChanged(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Interstitial Ad Info Changed: " + adInfo.AdUnitId);
    }

    #endregion

    #region Rewarded Ads

    public void LoadRewarded()
    {
        if (rewardedAd != null)
        {
            Debug.Log("Rewarded ad already exists, checking if loaded...");
            if (rewardedAd.IsAdReady())
            {
                Debug.Log("Rewarded ad already loaded and ready");
                return;
            }
        }

        Debug.Log("Creating Rewarded Ad...");
        rewardedAd = new LevelPlayRewardedAd(rewardedAdUnitId);

        // Register to rewarded events
        rewardedAd.OnAdLoaded += RewardedOnAdLoaded;
        rewardedAd.OnAdLoadFailed += RewardedOnAdLoadFailed;
        rewardedAd.OnAdDisplayed += RewardedOnAdDisplayed;
        rewardedAd.OnAdDisplayFailed += RewardedOnAdDisplayFailed;
        rewardedAd.OnAdClicked += RewardedOnAdClicked;
        rewardedAd.OnAdClosed += RewardedOnAdClosed;
        rewardedAd.OnAdRewarded += RewardedOnAdRewarded;
        rewardedAd.OnAdInfoChanged += RewardedOnAdInfoChanged;

        // Load the ad
        Debug.Log("Loading Rewarded Ad...");
        rewardedAd.LoadAd();
    }

    public void ShowRewarded()
    {
        Debug.Log("ShowRewarded called");
        if (rewardedAd != null && rewardedAd.IsAdReady())
        {
            Debug.Log("Showing Rewarded Ad...");
            rewardedAd.ShowAd();
        }
        else
        {
            Debug.LogWarning("Rewarded ad not ready. Loading...");
            LoadRewarded();
        }
    }

    public void ShowRewardedVideo()
    {
        ShowRewarded();
    }

    // Rewarded Event Handlers
    void RewardedOnAdLoaded(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Rewarded Ad Loaded: " + adInfo.AdUnitId);
    }

    void RewardedOnAdLoadFailed(LevelPlayAdError error)
    {
        Debug.LogError("REWARDED AD LOAD FAILED");
        Debug.LogError("Error Code: " + error.ErrorCode);
        Debug.LogError("Error Message: " + error.ErrorMessage);
        Debug.LogError("Ad Unit ID: " + rewardedAdUnitId);
    }

    void RewardedOnAdDisplayed(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Rewarded Ad Displayed: " + adInfo.AdUnitId);
    }

    void RewardedOnAdDisplayFailed(LevelPlayAdDisplayInfoError error)
    {
        Debug.LogError("REWARDED AD DISPLAY FAILED");
        Debug.LogError("Error Code: " + error.ErrorCode);
        Debug.LogError("Error Message: " + error.ErrorMessage);

        // Try to reload
        LoadRewarded();
    }

    void RewardedOnAdClicked(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Rewarded Ad Clicked: " + adInfo.AdUnitId);
    }

    void RewardedOnAdClosed(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Rewarded Ad Closed: " + adInfo.AdUnitId);

        // Load next ad
        LoadRewarded();
    }

    void RewardedOnAdRewarded(LevelPlayAdInfo adInfo, LevelPlayReward reward)
    {
        Debug.Log("=== USER REWARDED ===");
        Debug.Log("Reward Name: " + reward.Name);
        Debug.Log("Reward Amount: " + reward.Amount);

        // Grant reward to user
        Manager.PremiumScore += 1000;
        Debug.Log("Granted 1000 premium points. Total: " + Manager.PremiumScore);
    }

    void RewardedOnAdInfoChanged(LevelPlayAdInfo adInfo)
    {
        Debug.Log("Rewarded Ad Info Changed: " + adInfo.AdUnitId);
    }

    #endregion
}
