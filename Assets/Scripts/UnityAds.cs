using System;
using System.Collections;
using Unity.Services.Core;
using UnityEngine;
using Unity.Services.Mediation;

public class UnityAds : MonoBehaviour
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
		private string gameId = "0123456"; // Prevents Editor Errors
	#endif

	public GameObject adBtn;
	
    InterstitialAd interstitialAdNew;
    RewardedAd rewardedVideoAdNew;

 //    // delta dna settings
 //    public const string ENVIRONMENT_KEY = "27352707823785445427718399015682";
	// public const string COLLECT_URL     = "https://collect15753fggqz.deltadna.net/collect/api";
	// public const string ENGAGE_URL      = "https://engage15753fggqz.deltadna.net";

	public async void Awake()
	{
		// // Configure the SDK
		// DDNA.Instance.SetLoggingLevel(DeltaDNA.Logger.Level.DEBUG);
		// DDNA.Instance.ClientVersion = "1.0.0";
		//
		// // Start collecting data
		// DDNA.Instance.StartSDK();

		try
		{
			print("Initializing Mediation...");
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

	public void LoadInterstitialNew()
    {
	    interstitialAdNew = MediationService.Instance.CreateInterstitialAd(interstitialAdunitIdNew) as InterstitialAd;

	    if (interstitialAdNew != null)
	    {
		    interstitialAdNew.OnLoaded += OnLoadedInterstitial;
		    interstitialAdNew.OnFailedLoad += OnFailedLoadInterstitial;
		    Debug.Log("Loading Interstitial adunit...");
        
		    // Show events callback registration
		    interstitialAdNew.OnFailedShow += OnFailedShowInterstitial;
		    interstitialAdNew.OnClosed += OnClosedInterstitial;
		    interstitialAdNew.OnShowed += InterstitialAdShown;
        
		    interstitialAdNew.Load();   
	    }
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
        rewardedVideoAdNew = MediationService.Instance.CreateRewardedAd(rewardedVideoAdunitIdNew) as RewardedAd;

        if (rewardedVideoAdNew != null)
        {
	        rewardedVideoAdNew.OnLoaded += OnLoadedRewarded;
	        rewardedVideoAdNew.OnFailedLoad += OnFailedLoadRewarded;
        
	        // Show events call back 
	        rewardedVideoAdNew.OnFailedShow += OnFailedShowRewarded;
	        rewardedVideoAdNew.OnShowed += RewardedAdShown;
	        rewardedVideoAdNew.OnClosed += OnClosedRewarded;
	        rewardedVideoAdNew.OnUserRewarded += UserRewarded;
        
	        rewardedVideoAdNew.Load();
        }
    }
    
    public void ShowRewardedNew()
    {
	    if (rewardedVideoAdNew.AdState == AdState.Loaded)
	    {
		    rewardedVideoAdNew.Show();
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