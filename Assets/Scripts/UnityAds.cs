using System;
using System.Collections;
using Unity.Services.Core;
using UnityEngine;
using Unity.Services.Mediation;
using Unity.Services.Analytics;
using Unity.Services.Core;
using AppsFlyerSDK;
#if UNITY_IOS
using Unity.Advertisement.IosSupport;
#endif
public class UnityAds
{
	#if UNITY_IOS
		private string gameId = "1737343"; // Your iOS game ID here
		private string rewardedVideoAdunitIdNew = "rv_ios_medi_adunit";
		private string interstitialAdunitIdNew = "interstitial_ios_medi_adunit";
		
    #elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
		private string rewardedVideoAdunitIdNew = "rv_android_medi_adunit";
		private string interstitialAdunitIdNew = "Android_Interstitial";
	#else
		private string gameId = "1737342"; // Prevents Editor Errors
		private string rewardedVideoAdunitIdNew = "rv_android_medi_adunit";
		private string interstitialAdunitIdNew = "Android_Interstitial";
	#endif

	public GameObject adBtn;
	
    IInterstitialAd interstitialAdNew;
    IRewardedAd rewardedVideoAdNew;

	public async void Initialize()
	{
		Debug.Log("Awake Mediation State: " + MediationService.InitializationState);
		if (MediationService.InitializationState == InitializationState.Uninitialized)
		{

			try
			{
#if UNITY_IOS

				// Check the user’s consent status. If it returns undetermined, display the permission dialogue:
				if (ATTrackingStatusBinding.GetAuthorizationTrackingStatus() == ATTrackingStatusBinding.AuthorizationTrackingStatus.NOT_DETERMINED)
				{
					Debug.Log("Preparing popup...");
					ATTrackingStatusBinding.RequestAuthorizationTracking();
				}
#endif

				Debug.Log("Initializing Mediation...");
				await UnityServices.InitializeAsync();
				Debug.Log("Mediation Initialized!");
			}
			catch (InitializeFailedException e)
			{
				OnInitializationFailed(e);
				throw;
			}

			// load interstitial ads
			LoadInterstitialNew();

			// load rewarded ads
			LoadRewardedNew();
			MediationService.Instance.ImpressionEventPublisher.OnImpression += OnImpression;
		}
	}

	public void LoadInterstitialNew()
    {
	    if (interstitialAdNew == null)
	    {
		    interstitialAdNew = MediationService.Instance.CreateInterstitialAd(interstitialAdunitIdNew);
		    interstitialAdNew.OnLoaded += OnLoadedInterstitial;
		    interstitialAdNew.OnFailedLoad += OnFailedLoadInterstitial;
        
		    // Show events callback registration
		    interstitialAdNew.OnFailedShow += OnFailedShowInterstitial;
		    interstitialAdNew.OnClosed += OnClosedInterstitial;
		    interstitialAdNew.OnShowed += InterstitialAdShown;
	    }
	    Debug.Log("Loading Interstitial adunit...");
	    interstitialAdNew.Load(); 
    }
    
    public void ShowInterstitialNew()
    {
        if(interstitialAdNew.AdState == AdState.Loaded)
        {
	        interstitialAdNew.Show();
        }
    }
    
    public void LoadRewardedNew()
    {
        if (rewardedVideoAdNew == null)
        {
	        rewardedVideoAdNew = MediationService.Instance.CreateRewardedAd(rewardedVideoAdunitIdNew);
	        rewardedVideoAdNew.OnLoaded += OnLoadedRewarded;
	        rewardedVideoAdNew.OnFailedLoad += OnFailedLoadRewarded;
        
	        // Show events call back 
	        rewardedVideoAdNew.OnFailedShow += OnFailedShowRewarded;
	        rewardedVideoAdNew.OnShowed += RewardedAdShown;
	        rewardedVideoAdNew.OnClosed += OnClosedRewarded;
	        rewardedVideoAdNew.OnUserRewarded += UserRewarded;
        
        }
        Debug.Log("Loading Rewarded adunit...");
        rewardedVideoAdNew.Load();
    }
    
    public void ShowRewardedNew()
    {
	    if (rewardedVideoAdNew.AdState == AdState.Loaded)
	    {	
		    RewardedAdShowOptions showOptions = new RewardedAdShowOptions();
		    
		    // s2s callback option
		    S2SRedeemData s2SData;
		    s2SData.UserId = "my user id";
		    s2SData.CustomData = "{\"reward\":\"Premium\",\"amount\":200}";
		    showOptions.S2SData = s2SData;
		    rewardedVideoAdNew.Show(showOptions);
	    }
    }

    void OnInitializationFailed(InitializeFailedException e)
    {
        Debug.LogError($"{e.initializationError}:{e.Message}");
    }

    void OnInitializationComplete(EventArgs e)
    {
        Debug.Log("Initialization of mediation complete");
    }

    void OnLoadedInterstitial(object sender, EventArgs e)
    {
	    Debug.Log("Interstitial Ad loaded from mediation partner");
	    if (adBtn != null)
	    {
		    adBtn.SetActive(true);   
	    }
    }
    void OnLoadedRewarded(object sender, EventArgs e)
    {
        Debug.Log("Rewarded Ad loaded from mediation partner");
    }
    
    void UserRewarded(object sender, RewardEventArgs args)
    {
	    Debug.Log("Ad has rewarded user.");
	    Manager.PremiumScore += 1000;
		// Execute logic for rewarding the user.
    }

    void OnFailedLoadRewarded(object sender, LoadErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}:{e.Message}");
    }
    
    void RewardedAdShown(object sender, EventArgs args)
    {
	    Debug.Log("Rewarded Ad shown successfully.");
		// Execute logic for the ad showing successfully.
    }
    
    void OnFailedLoadInterstitial(object sender, LoadErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}:{e.Message}");
    }
    
    void InterstitialAdShown(object sender, EventArgs args)
    {
	    Debug.Log("Interstitial Ad shown successfully.");
	    // Execute logic for the ad showing successfully.
    }
    
    void OnFailedShowRewarded(object sender, ShowErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}: {e.Message}");
    }
    
    void OnClosedRewarded(object sender, EventArgs e)
    {
	    // load again
	    Debug.Log("loading again rewarded video ad");
	    LoadRewardedNew();
    }
    
    void OnFailedShowInterstitial(object sender, ShowErrorEventArgs e)
    {
        Debug.LogError($"{e.Error}: {e.Message}");
    }
    
    void OnClosedInterstitial(object sender, EventArgs e)
    {
	    // load again
	    Debug.Log("loading again interstitial ad");
	    LoadInterstitialNew();
    }
    
    static void OnImpression(object sender, ImpressionEventArgs e)
    {
	    var impressionData = e.ImpressionData != null ? JsonUtility.ToJson(e.ImpressionData, true) : "null";
        Debug.Log($"Impression event from ad unit id {e.AdUnitId} : {impressionData}");

        // Send impression data to adjust 
        if (e.ImpressionData != null)
        {
	        AppsFlyerAdRevenue.start(AppsFlyerAdRevenueType.Generic);
	        System.Collections.Generic.Dictionary<string, string> dic = new System.Collections.Generic.Dictionary<string, string>();
	        dic.Add("custom", "foo");
	        dic.Add("custom_2", "bar");
	        dic.Add("af_quantity", "1");
	        AppsFlyerAdRevenue.logAdRevenue(e.ImpressionData.AdSourceName, AppsFlyerAdRevenueMediationNetworkType.AppsFlyerAdRevenueMediationNetworkTypeIronSource, e.ImpressionData.PublisherRevenuePerImpression, e.ImpressionData.Currency, dic);

	        // AdjustAdRevenue adjustAdRevenue = new AdjustAdRevenue(AdjustConfig.AdjustAdRevenueSourceUnity);
	        // adjustAdRevenue.setRevenue(e.ImpressionData.PublisherRevenuePerImpression, e.ImpressionData.Currency);
	        // // optional fields
	        // adjustAdRevenue.setAdRevenueNetwork(e.ImpressionData.AdSourceName);
	        // adjustAdRevenue.setAdRevenueUnit(e.ImpressionData.AdUnitId);
	        // adjustAdRevenue.setAdRevenuePlacement(e.ImpressionData.AdSourceInstance);
	        // // track Adjust ad revenue
	        // Adjust.trackAdRevenue(adjustAdRevenue);
	        // Debug.Log("Sending impression events to Adjust " + adjustAdRevenue);
        }
        
    }

	 public void ShowVideo()
	 {
		 ShowInterstitialNew();
	 }

     public void ShowRewardedVideo()
     {
        ShowRewardedNew();
     }
}
