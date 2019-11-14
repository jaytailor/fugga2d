using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;
using UnityEngine.Purchasing;
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
		
		
		Debug.Log("UnityAds.Init()");
		StartCoroutine("InitAds");
	}

	public void Init()
	{
		
	}

	public void ShowPromo()
	{
		if (Advertisement.IsReady())
		{
			Debug.Log("Unity Ads Log: Promo Shown");
			if (gameId.Equals("1737343"))
			{
				Advertisement.Show("rcsPromoPlacement"); // for ios promo placementId is different
			}
			else
			{
				Advertisement.Show("premium1000"); // android promo placement
			}
		}
	}

	 public void ShowVideo()
	 {
		 if (Advertisement.IsReady())
		 {
			 Debug.Log("Unity Ads Log: Video AD Shown");
			 Advertisement.Show("video"); // Ad Placement ID for video here
		 }
	 }

     public void ShowRewardedVideo()
     {
         ShowOptions options = new ShowOptions();
         options.resultCallback = HandleShowResult;

         if (Advertisement.IsReady())
         {
             Advertisement.Show("rewardedVideo", options); // Ad Placement ID for rewarded video here
             Debug.Log("Unity Ads Log: Rewarded Video AD Shown");
         }
       
     }

    public void HandleShowResult(ShowResult result)
    {
	    Debug.Log("Ads Version(" + Advertisement.isInitialized + "): " + Advertisement.version + "\n");
	    switch (result)
        {
            case ShowResult.Finished:
                Debug.Log("ad finished");
                Manager.PremiumScore = Manager.PremiumScore + 200;
                break;
            case ShowResult.Skipped:
                Debug.Log("ad skipped");
                break;
            case ShowResult.Failed:
                Debug.Log("ad failed");
                break;
        }
    }
    public void ShowBanner()
	 {
	     if (Advertisement.IsReady())
	     {
		     Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
		     Advertisement.Banner.Show("bannerads"); // Ad Placement ID for banner here
		     Debug.Log("Unity Ads Log: Banner AD Shown");
	     }
	 }
		
	 public IEnumerator InitAds()
	 {
		 yield return new WaitForSeconds(3);
		 if (!Advertisement.isSupported || Advertisement.isInitialized)
		 {
			 Debug.Log("Trying to initialise ads:\n" +
			           "\tAdvertisement.isSupported: " + Advertisement.isSupported + "\n" +
			           "\tAdvertisement.isInitialized: " + Advertisement.isInitialized);
			 yield break;
		 }

		 Advertisement.Initialize(this.gameId);
	 }
	 
//	 public void OnSegmentsReady(ISegments segments)
//	 {
//		 if (segments.Result.Length < 1) {
//			 Debug.Log("Empty Segments List");
//			 return;
//		 }
//		 segmentResponse = segments;
//
//		 // my own game threshold to consider it as payer if probability is > 0%
//		 if (segments.Result.Length >= 2) // only if two segment information returned
//		 {
//			 Debug.Log("OnSegmentsReady: [" + segments.Result[0].segment + "] " + segments.Result[0].probability);
//			 Debug.Log("OnSegmentsReady: [" + segments.Result[1].segment + "] " + segments.Result[1].probability);
//			 var seg1 = "";
//			 var seg2 = "";
//			 if (segments.Result[0].probability > 5) // if user is likely payer
//			 {
//				 payerResult = segments.Result[0].segment;
//				 Debug.Log("User is a : " + payerResult);
//				 seg1 = "P";
//			 }
//			 else
//			 {
//				 seg1 = "NP";
//			 }
//            
//			 if (segments.Result[1].probability > 20) // if user is churner
//			 {
//				 churnerResult = segments.Result[1].segment;
//				 Debug.Log("User is also a : " + churnerResult);
//				 seg2 = "C";
//			 }
//			 else
//			 {
//				 seg2 = "NC";
//			 }
//            
//			 segmentText.text = "UP: " + seg1 + " and " + seg2 ;
//		 }
//		 Debug.Log(segmentText.text);
//        
//	 }


}