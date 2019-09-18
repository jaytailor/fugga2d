using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class UnityAds : MonoBehaviour
{
	#if UNITY_IOS
		private string gameId = "1737343"; // Your iOS game ID here
	#elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
	#else
		private string gameId = "0123456"; // Prevents Editor Errors
	#endif

	public GameObject shopBtn;
	public GameObject gamesAd; 

	public void Awake()
	{
		Debug.Log("called and " + PlayerPrefs.GetString("PARENTAL_GATE_PASSED") );
		if (PlayerPrefs.GetString("PARENTAL_GATE_PASSED").Equals("true"))
		{
			Debug.Log("UnityAds.Init()");
			StartCoroutine("InitAds");
			shopBtn.SetActive(true);
			gamesAd.SetActive(true);
		}
		else
		{
			Debug.Log("Parental gate failed hence will not initialise ads");
		}
	}

	public void ShowPromo()
	{
		if (Advertisement.IsReady())
		{
			Debug.Log("Unity Ads Log: Promo Shown");
			Advertisement.Show("premium1000"); // Ad Placement ID for Promo here
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

}