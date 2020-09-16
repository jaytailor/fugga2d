using System;
using System.Collections;

using UnityEngine;
using Unity.Mediation;
using UnityEngine.UI;
using DeltaDNA;

public class UnityAds : MonoBehaviour
{
	#if UNITY_IOS
		private string gameId = "1737343"; // Your iOS game ID here
	#elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
	#else
		private string gameId = "0123456"; // Prevents Editor Errors
	#endif

	private string interstitialAdUnitId = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~mediation_interstitial_test1";
    private string quitBtnInterstitialAdUnitId = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~quitBtnMedi";

    private string rewardedAdUnitId = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~mediation_test1";
    private string gameOverRewardedAdunit = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~gameOverBtnMediAdunit";
    private string gameWinnerRewardedAdunit = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~winnerBtnAdUnit";
    private string rewardedBtn1 = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~rewardMediAdunit1";
    private string rewardedBtn2 = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~rewardMediAdunit2";
    private string rewardedBtn3 = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~rewardedAndroidMediAdunit3";
    private string rewardedCloudBtn = "2af4a5e2-eecd-4bb0-85f7-47a6dbabf670~ANDROID~cloudUnityAdUnitRewarded";


    Unity.Mediation.InterstitialAd interstitialAd;
    Unity.Mediation.InterstitialAd interstitialAd2;

    Unity.Mediation.RewardedAd rewardedAd;
    Unity.Mediation.RewardedAd rewardedAd1;
    Unity.Mediation.RewardedAd rewardedAd2;
    Unity.Mediation.RewardedAd rewardedAd3;
    Unity.Mediation.RewardedAd goRewardedAd;
    Unity.Mediation.RewardedAd gwRewardedAd;
    Unity.Mediation.RewardedAd cloudRewardedAd;


    // delta dna settings
    public const string ENVIRONMENT_KEY = "27352707823785445427718399015682";
	public const string COLLECT_URL     = "https://collect15753fggqz.deltadna.net/collect/api";
	public const string ENGAGE_URL      = "https://engage15753fggqz.deltadna.net";

	public void Awake()
	{
		// Configure the SDK
		DDNA.Instance.SetLoggingLevel(DeltaDNA.Logger.Level.DEBUG);
		DDNA.Instance.ClientVersion = "1.0.0";
		
		// Start collecting data
		DDNA.Instance.StartSDK();

        //Debug.Log("UnityAds.Init()");
        //StartCoroutine("InitAds");

        // Initialize unity mediation
        InitializeClicked();

    }

    public void Start()
    {
		UnityMediation.OnInitializationComplete += OnInitializationComplete;
		UnityMediation.OnInitializationFailed += OnInitializationFailed;

		ImpressionEventPublisher.OnImpression += OnImpression;
	}

    public void InitializeClicked()
    {
        Debug.Log("Initializing unity mediation");
        MediationProperties.UseStubbedResponse = false;
        UnityMediation.Initialize(gameId);
    }

    public void LoadInterstitial()
    {
        interstitialAd = new Unity.Mediation.InterstitialAd(gameId, interstitialAdUnitId);
        interstitialAd.OnLoaded += OnLoaded;
        interstitialAd.OnFailedLoad += OnFailedLoad;
        Debug.Log("Loading Interstitial...");
        interstitialAd.Load();
    }

    public void LoadQuitBtnInterstitial()
    {
        interstitialAd2 = new Unity.Mediation.InterstitialAd(gameId, quitBtnInterstitialAdUnitId);
        interstitialAd2.OnLoaded += OnLoaded;
        interstitialAd2.OnFailedLoad += OnFailedLoad;
        Debug.Log("Loading quit button Interstitial...");
        interstitialAd2.Load();
    }

    public void ShowInterstitial()
    {
        if(interstitialAd != null)
        {
            interstitialAd.OnFailedShow += OnFailedShow;
            interstitialAd.Show();
        }
        // load again
        LoadInterstitial();
    }

    public void ShowQuitBtnInterstitial()
    {
        if(interstitialAd2 != null)
        {
            interstitialAd2.OnFailedShow += OnFailedShow;
            interstitialAd2.Show();
        }
        // load again
        LoadQuitBtnInterstitial();
    }

    public void LoadRewarded()
    { 
        rewardedAd = new Unity.Mediation.RewardedAd(gameId, rewardedAdUnitId);
        rewardedAd.OnLoaded += OnLoaded;
        rewardedAd.OnFailedLoad += OnFailedLoad;
        rewardedAd.Load();
    }

    public void LoadRewarded1()
    {
        rewardedAd1 = new Unity.Mediation.RewardedAd(gameId, rewardedBtn1);
        rewardedAd1.OnLoaded += OnLoaded;
        rewardedAd1.OnFailedLoad += OnFailedLoad;
        rewardedAd1.Load();
    }

    public void LoadRewarded2()
    {
        rewardedAd2 = new Unity.Mediation.RewardedAd(gameId, rewardedBtn2);
        rewardedAd2.OnLoaded += OnLoaded;
        rewardedAd2.OnFailedLoad += OnFailedLoad;
        rewardedAd2.Load();
    }

    public void LoadRewarded3()
    {
        rewardedAd3 = new Unity.Mediation.RewardedAd(gameId, rewardedBtn3);
        rewardedAd3.OnLoaded += OnLoaded;
        rewardedAd3.OnFailedLoad += OnFailedLoad;
        rewardedAd3.Load();
    }

    public void LoadGameOverRewarded()
    {
        goRewardedAd = new Unity.Mediation.RewardedAd(gameId, gameOverRewardedAdunit);
        goRewardedAd.OnLoaded += OnLoaded;
        goRewardedAd.OnFailedLoad += OnFailedLoad;
        goRewardedAd.Load();
    }

    public void LoadGameWinnerRewarded()
    {
        gwRewardedAd = new Unity.Mediation.RewardedAd(gameId, gameWinnerRewardedAdunit);
        gwRewardedAd.OnLoaded += OnLoaded;
        gwRewardedAd.OnFailedLoad += OnFailedLoad;
        gwRewardedAd.Load();
    }
    
    public void LoadCloudRewarded()
    {
        cloudRewardedAd = new Unity.Mediation.RewardedAd(gameId, rewardedCloudBtn);
        cloudRewardedAd.OnLoaded += OnLoaded;
        cloudRewardedAd.OnFailedLoad += OnFailedLoad;
        cloudRewardedAd.Load();
    }

    public void ShowRewarded()
    {
        if (rewardedAd != null)
        {
            rewardedAd.OnFailedShow += OnFailedShow;
            rewardedAd.Show();
        }
        
        // load again before showing
        LoadRewarded();
    }

    public void ShowRewarded1()
    {
        if (rewardedAd1 != null)
        {
            rewardedAd1.OnFailedShow += OnFailedShow;
            rewardedAd1.Show();
        }
        
        // load again
        LoadRewarded1();
    }

    public void ShowRewarded2()
    {
        if(rewardedAd2 != null)
        {
            rewardedAd2.OnFailedShow += OnFailedShow;
            rewardedAd2.Show();
        }
        
        // load again
        LoadRewarded2();
    }

    public void ShowRewarded3()
    {
        if(rewardedAd3 != null)
        {
            rewardedAd3.OnFailedShow += OnFailedShow;
            rewardedAd3.Show();
        }
        
        // load again
        LoadRewarded3();
    }

    public void ShowGameOverRewarded()
    {
        if(goRewardedAd != null)
        {
            goRewardedAd.OnFailedShow += OnFailedShow;
            goRewardedAd.Show();
        }
        
        // load again
        LoadGameOverRewarded();
    }

    public void ShowGameWinRewarded()
    {
        if (gwRewardedAd != null)
        {
            gwRewardedAd.OnFailedShow += OnFailedShow;
            gwRewardedAd.Show();
        }
        // also call load to load another instance
        LoadGameWinnerRewarded();
    }
    
    public void ShowCloudRewarded()
    {
        if (cloudRewardedAd != null)
        {
            cloudRewardedAd.OnFailedShow += OnFailedShow;
            cloudRewardedAd.Show();
        }
        
        // also call load to load another instance
        LoadCloudRewarded();
    }

    void OnInitializationFailed(object sender, InitializationErrorEventArgs e)
    {
        Debug.LogError($"{e.Error}:{e.Message}");
    }

    void OnInitializationComplete(object sender, EventArgs e)
    {
        Debug.Log("Initialization of mediation complete");

        // load interstitial ads
        LoadInterstitial();
        LoadQuitBtnInterstitial();

        // load rewarded ads
        LoadRewarded();
        LoadRewarded1();
        LoadRewarded2();
        LoadRewarded3();
        LoadGameOverRewarded();
        LoadGameWinnerRewarded();
        LoadCloudRewarded();

    }

    void OnLoaded(object sender, EventArgs e)
    {
        Debug.Log("Ad loaded from mediation partner");
    }

    void OnFailedLoad(object sender, LoadErrorEventArgs e)
    {
        Debug.LogError($"{e.Error}:{e.Message}");
    }

    void OnFailedShow(object sender, ShowErrorEventArgs e)
    {
        Debug.LogError($"{e.Error}: {e.Message}");
    }


    static void OnImpression(object sender, ImpressionEventArgs e)
    {
        var impressionData = e.ImpressionData != null ? JsonUtility.ToJson(e.ImpressionData, true) : "null";
        Debug.Log($"Impression event from ad unit id {e.AdUnitId} : {impressionData}");
    }

    public void Init()
	{
		
	}

	public void ShowPromo()
	{
        ShowInterstitial();
        //if (Advertisement.IsReady())
        //{
        //	Debug.Log("Unity Ads Log: Promo Shown");
        //	if (gameId.Equals("1737343"))
        //	{
        //		Advertisement.Show("rcsPromoPlacement"); // for ios promo placementId is different
        //	}
        //	else
        //	{
        //		Advertisement.Show("premium1000"); // android promo placement
        //	}
        //}
    }

	 public void ShowVideo()
	 {
        ShowRewarded();
		 //if (Advertisement.IsReady())
		 //{
			// Debug.Log("Unity Ads Log: Video AD Shown");
			// Advertisement.Show("video"); // Ad Placement ID for video here
		 //}
	 }

     public void ShowRewardedVideo()
     {
        ShowRewarded();
        //ShowOptions options = new ShowOptions();
        //options.resultCallback = HandleShowResult;

        //if (Advertisement.IsReady())
        //{
        //    Advertisement.Show("rewardedVideo", options); // Ad Placement ID for rewarded video here
        //    Debug.Log("Unity Ads Log: Rewarded Video AD Shown");
        //}

    }

    //public void HandleShowResult(ShowResult result)
    //{
	   // Debug.Log("Ads Version(" + Advertisement.isInitialized + "): " + Advertisement.version + "\n");
	   // switch (result)
    //    {
    //        case ShowResult.Finished:
    //            Debug.Log("ad finished");
    //            Manager.PremiumScore = Manager.PremiumScore + 200;
    //            break;
    //        case ShowResult.Skipped:
    //            Debug.Log("ad skipped");
    //            break;
    //        case ShowResult.Failed:
    //            Debug.Log("ad failed");
    //            break;
    //    }
    //}
    public void ShowBanner()
	 {
	     //if (Advertisement.IsReady())
	     //{
		    // Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
		    // Advertisement.Banner.Show("bannerads"); // Ad Placement ID for banner here
		    // Debug.Log("Unity Ads Log: Banner AD Shown");
	     //}
	 }
		
	 //public IEnumerator InitAds()
	 //{
		// //yield return new WaitForSeconds(3);
		// //if (!Advertisement.isSupported || Advertisement.isInitialized)
		// //{
		//	// Debug.Log("Trying to initialise ads:\n" +
		//	//           "\tAdvertisement.isSupported: " + Advertisement.isSupported + "\n" +
		//	//           "\tAdvertisement.isInitialized: " + Advertisement.isInitialized);
		//	// yield break;
		// //}

		// //Advertisement.Initialize(this.gameId);
	 //}

}