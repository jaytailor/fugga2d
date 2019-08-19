using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using UnityEngine.RCS.DecisionEngine;
using GoogleMobileAds.Api.Mediation.UnityAds;

public class UnityAds : MonoBehaviour, IDecisionListener, ISegmentsListener
{
    public AdMobSettings adMobSettings;
    private BannerView bannerView;
	private InterstitialAd interstitialAd;
    private InterstitialAd promoAd;

    public IDecision decisionResult = null;
    public String segmentResult = null;
    public Text segmentText = null;
    public Text decisionText = null;

#if UNITY_IOS
		public string gameId = "1737343"; // Your iOS game ID here
#elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
#else
    private string gameId = "0123456"; // Prevents Editor Errors
	#endif

	public void Awake()
	{
        RCS.Initialize();
        RCS.RequestDecision(this);
        RCS.RequestSegment(this);
        //Invoke("Init", 3);
        //Init();
	}

    public void Init()
    {
        Debug.Log("Starting Ads Init");
        GoogleMobileAds.Api.Mediation.UnityAds.UnityAds.SetGDPRConsentMetaData(true);
        
        MobileAds.Initialize(adMobSettings.GetAppID());
        RequestBanner();
        RequestAd();
        RequestPromo();
    }

    public string GetGameID()
    {
        return gameId;
    }

    public void ClickShowBanner()
    {
        bannerView.Show();
    }

    public void ClickShowAd()
    {
        if (interstitialAd.IsLoaded())
        {
            interstitialAd.Show();
        }
    }

    public void ShowPromo()
    {
        if (promoAd.IsLoaded())
        {
            promoAd.Show();
            Debug.Log("Unity Ads Log: Promo Shown");
        }
    }

    private void RequestBanner()
    {
        //bannerID = "ca-app-pub-3940256099942544/6300978111";
        bannerView = new BannerView(adMobSettings.GetBannerID(), AdSize.Banner, AdPosition.Bottom);
        
        //AdRequest request = new AdRequest.Builder().AddTestDevice("F5A8FCBC2AE9263F3335ECAD4F28A140").Build();
        AdRequest request = new AdRequest.Builder().Build();
        
        bannerView.LoadAd(request);
    }
    
    private void RequestAd()
    {
        Debug.Log("Requesting Ad:" + adMobSettings.GetVideoID());
        //regularID = "ca-app-pub-3940256099942544/1033173712";
        interstitialAd = new InterstitialAd(adMobSettings.GetVideoID());
        interstitialAd.OnAdFailedToLoad += OnVideoFailed;
        interstitialAd.OnAdClosed += OnVideoClosed;

        //AdRequest request = new AdRequest.Builder().AddTestDevice("F5A8FCBC2AE9263F3335ECAD4F28A140").Build();
        AdRequest request = new AdRequest.Builder().Build();

        interstitialAd.LoadAd(request);

    }

    void RequestPromo()
    {
        promoAd = new InterstitialAd(adMobSettings.GetPromoID());
        promoAd.OnAdFailedToLoad += OnPromoFailed;
        promoAd.OnAdClosed += OnPromoClosed;
        //AdRequest request = new AdRequest.Builder().AddTestDevice("F5A8FCBC2AE9263F3335ECAD4F28A140").Build();
        AdRequest request = new AdRequest.Builder().Build();
        promoAd.LoadAd(request);
    }
    
    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
       ClickShowBanner();
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        // load it again
        RequestBanner();
    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpened event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
    }

    public void HandleOnAdLeavingApplication(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLeavingApplication event received");
    }

    void OnVideoClosed(object sender, EventArgs args)
    {
        Debug.Log("Ad Closed");
        RequestAd();
    }
    void OnPromoClosed(object sender, EventArgs args)
    {
        Debug.Log("Promo Closed");
        RequestPromo();
    }

    void OnVideoFailed(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("OnAdFailedToLoad - Video");
        RequestAd();
    }

    void OnPromoFailed(object sender, AdFailedToLoadEventArgs args)
    {
        Debug.Log("OnAdFailedToLoad - Promo");
        RequestPromo();
    }

    void HandleBannerAdEvents(bool subcribe)
    {
        if (subcribe)
        {
            // Called when an ad request has successfully loaded.
            bannerView.OnAdLoaded += HandleOnAdLoaded;
            // Called when an ad request failed to load.
            bannerView.OnAdFailedToLoad += HandleOnAdFailedToLoad;
            // Called when an ad is clicked.
            bannerView.OnAdOpening += HandleOnAdOpened;
            // Called when the user returned from the app after an ad click.
            bannerView.OnAdClosed += HandleOnAdClosed;
            // Called when the ad click caused the user to leave the application.
            bannerView.OnAdLeavingApplication += HandleOnAdLeavingApplication;
        }
        else
        {
            // Called when an ad request has successfully loaded.
            bannerView.OnAdLoaded -= HandleOnAdLoaded;
            // Called when an ad request failed to load.
            bannerView.OnAdFailedToLoad -= HandleOnAdFailedToLoad;
            // Called when an ad is clicked.
            bannerView.OnAdOpening -= HandleOnAdOpened;
            // Called when the user returned from the app after an ad click.
            bannerView.OnAdClosed -= HandleOnAdClosed;
            // Called when the ad click caused the user to leave the application.
            bannerView.OnAdLeavingApplication -= HandleOnAdLeavingApplication;
        }
    }

    void OnEnable()
    {
        if(bannerView != null)
        {
            HandleBannerAdEvents(true);
        }
    }

    void OnDisable()
    {
        if (bannerView != null)
        {
            HandleBannerAdEvents(false);
        }
        if (interstitialAd != null)
        {
            interstitialAd.OnAdClosed -= OnVideoClosed;
            interstitialAd.OnAdFailedToLoad -= OnVideoFailed;
        }
        if (promoAd != null)
        {
            promoAd.OnAdClosed -= OnPromoClosed;
            promoAd.OnAdFailedToLoad -= OnPromoFailed;
        }
    }

    public void OnDecisionReady(IDecision decision)
    {
        Debug.Log("Decision Result: " + decision.Result);
        decisionResult = decision;
        decisionText.text = "The Decision to: " + decision.Result;
    }

    public void OnDecisionError(IDecision decision)
    {
        Debug.Log("Decision Error: " + decision.ErrorMessage);
        decisionText.text = "Decision Error" + decision.ErrorMessage;
    }

    public void OnSegmentsReady(ISegments segments)
    {
        if (segments.Result.Length < 1) {
            Debug.Log("Empty Segments List");
        }
        Debug.Log("OnSegmentsReady: [" + segments.Result[0].segment + "] " + segments.Result[0].probability);

        // my own game threshold to consider it as payer if probability is > 0%
        if (segments.Result[0].probability > 0)
        {
            segmentResult = segments.Result[0].segment;
            segmentText.text = "This user is a payer";
        }
    }

    public void OnSegmentsError(ISegments segments)
    {
        Debug.Log("Segment Error: " + segments.ErrorMessage);
        segmentText.text = "Segment Error: " + segments.ErrorMessage;
    }

    //	public void ShowPromo()
    //	{
    //		Debug.Log("Unity Ads Log: Promo Shown");
    //		Advertisement.Show("premium1000"); // Ad Placement ID for Promo here
    //	}
    //
    //	 public void ShowVideo()
    //	 {
    //	 	Debug.Log("Unity Ads Log: Video AD Shown");
    //	 	Advertisement.Show("video"); // Ad Placement ID for video here
    //	 }
    //
    //     public void ShowRewardedVideo()
    //     {
    //         ShowOptions options = new ShowOptions();
    //         options.resultCallback = HandleShowResult;
    //
    //         if (Advertisement.IsReady())
    //         {
    //             Advertisement.Show("rewardedVideo", options); // Ad Placement ID for rewarded video here
    //             Debug.Log("Unity Ads Log: Rewarded Video AD Shown");
    //         }
    //       
    //     }
    //
    //    public void HandleShowResult(ShowResult result)
    //    {
    //        switch (result)
    //        {
    //            case ShowResult.Finished:
    //                Debug.Log("ad finished");
    //                Manager.PremiumScore = Manager.PremiumScore + 200;
    //                break;
    //            case ShowResult.Skipped:
    //                Debug.Log("ad skipped");
    //                break;
    //            case ShowResult.Failed:
    //                Debug.Log("ad failed");
    //                break;
    //        }
    //    }
    //    public void ShowBanner()
    //	 {
    //	     if (Advertisement.IsReady())
    //	     {
    //	         Advertisement.Banner.Show("bannerads"); // Ad Placement ID for banner here
    //	         Debug.Log("Unity Ads Log: Banner AD Shown");
    //	     }
    //	 }
    //		
    //	 public IEnumerator InitAds()
    //	 {
    //		 yield return new WaitForSeconds(3);
    //		 if (!Advertisement.isSupported || Advertisement.isInitialized)
    //		 {
    //			 Debug.Log("Could not start:\n" +
    //			           "\tAdvertisement.isSupported: " + Advertisement.isSupported + "\n" +
    //			           "\tAdvertisement.isInitialized: " + Advertisement.isInitialized);
    //			 yield break;
    //		 }
    //
    //		 Advertisement.Initialize(this.gameId);
    //	 }

}