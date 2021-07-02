using System;
using System.Collections;
using System.Runtime.CompilerServices;
using UnityEngine;
using Unity.Mediation;
using UnityEngine.UI;
using Unity.RemoteConfig;

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
	
    Unity.Mediation.InterstitialAd interstitialAdNew;
    Unity.Mediation.RewardedAd rewardedVideoAdNew;

    //    // delta dna settings
    //    public const string ENVIRONMENT_KEY = "27352707823785445427718399015682";
    // public const string COLLECT_URL     = "https://collect15753fggqz.deltadna.net/collect/api";
    // public const string ENGAGE_URL      = "https://engage15753fggqz.deltadna.net";


    private int interstitials = 100;
    private int rewardedVideos = 100;

    public struct userAttributes
    {
        // Optionally declare variables for any custom user attributes:
    }

    public struct appAttributes
    {
        // Optionally declare variables for any custom app attributes:
    }


    public void Awake()
	{
        // // Configure the SDK
        // DDNA.Instance.SetLoggingLevel(DeltaDNA.Logger.Level.DEBUG);
        // DDNA.Instance.ClientVersion = "1.0.0";
        //
        // // Start collecting data
        // DDNA.Instance.StartSDK();


        // Add a listener to apply settings when successfully retrieved:
        ConfigManager.FetchCompleted += ApplyRemoteSettings;

        // Fetch configuration setting from the remote service:
        ConfigManager.FetchConfigs<userAttributes, appAttributes>(new userAttributes(), new appAttributes());

        UnityMediation.OnInitializationComplete += OnInitializationComplete;
		UnityMediation.OnInitializationFailed += OnInitializationFailed;
		
		Debug.Log("Hey UnityMediation Initialization");
		UnityMediation.Initialize(this.gameId);

		// load interstitial ads
		LoadInterstitialNew();
        
		// load rewarded ads
		LoadRewardedNew();
		ImpressionEventPublisher.OnImpression += OnImpression;

	}

    public void Start()
    {
	    
	}

    
    public void LoadInterstitialNew()
    {
	    interstitialAdNew = new Unity.Mediation.InterstitialAd(interstitialAdunitIdNew);
        interstitialAdNew.OnLoaded += OnLoadedInterstitial;
        interstitialAdNew.OnFailedLoad += OnFailedLoadInterstitial;
        Debug.Log("Loading Interstitial adunit...");
        interstitialAdNew.Load();
    }
    
    public void ShowInterstitialNew()
    {
        if (interstitials == 0)
        {
            Debug.Log("Not showing reward video");
            return;
        }

        if (interstitialAdNew != null)
        {
            interstitialAdNew.OnFailedShow += OnFailedShowInterstitial;
            interstitialAdNew.OnClosed += OnClosedInterstitial;
            interstitialAdNew.Show();
            interstitials--;
        }
    }
    
    public void LoadRewardedNew()
    { 
        rewardedVideoAdNew = new Unity.Mediation.RewardedAd(rewardedVideoAdunitIdNew);
        rewardedVideoAdNew.OnLoaded += OnLoadedRewarded;
        rewardedVideoAdNew.OnFailedLoad += OnFailedLoadRewarded;
        rewardedVideoAdNew.Load();
    }
    
    public void ShowRewardedNew()
    {
        if (rewardedVideos==0)
        {
            Debug.Log("Not showing reward video");
            return;
        }

	    if (rewardedVideoAdNew != null)
	    {
		    rewardedVideoAdNew.OnFailedShow += OnFailedShowRewarded;
		    rewardedVideoAdNew.OnClosed += OnClosedRewarded;
		    rewardedVideoAdNew.Show();
            rewardedVideos--;
            if (rewardedVideos == 0)
            {
                Debug.Log("Hiding the purchase button");
                GameObject btn = GameObject.FindGameObjectWithTag("purchase");
                if (btn != null)
                {
                    btn.SetActive(false);
                }
            }
        }
    }

    void OnInitializationFailed(object sender, InitializationErrorEventArgs e)
    {
        Debug.LogError($"{e.Error}:{e.Message}");
    }

    void OnInitializationComplete(object sender, EventArgs e)
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

    void OnFailedLoadRewarded(object sender, LoadErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}:{e.Message}");
    }
    
    void OnFailedLoadInterstitial(object sender, LoadErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}:{e.Message}");
    }
    
    void OnFailedShowRewarded(object sender, ShowErrorEventArgs e)
    {
	    Debug.LogError($"{e.Error}: {e.Message}");
        rewardedVideos++;
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
        interstitials++;
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

    public void ShowPromo()
	{
        ShowInterstitialNew();
	}

	 public void ShowVideo()
	 {
		 ShowInterstitialNew();
	 }

     public void ShowRewardedVideo()
     {
        ShowRewardedNew();
     }

     public IEnumerator initMediation()
	 {
		 yield return new WaitForSeconds(3);
		 Debug.Log("Initializing unity mediation");
		 
	 }

    void ApplyRemoteSettings(ConfigResponse configResponse)
    {
        // Conditionally update settings, depending on the response's origin:
        switch (configResponse.requestOrigin)
        {
            case ConfigOrigin.Default:
                Debug.Log("No settings loaded this session; using default values.");
                break;
            case ConfigOrigin.Cached:
                Debug.Log("No settings loaded this session; using cached values from a previous session.");
                break;
            case ConfigOrigin.Remote:
                Debug.Log("New settings loaded this session; update values accordingly.");
                interstitials = ConfigManager.appConfig.GetInt("interstitials");
                rewardedVideos = ConfigManager.appConfig.GetInt("rewardedVideos");
                break;
        }

        Debug.Log($"interstitials={interstitials}, rewardedVideos={rewardedVideos}");

    }

}