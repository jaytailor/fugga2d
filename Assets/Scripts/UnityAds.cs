using System.Collections;

using UnityEngine;
using UnityEngine.Advertisements;
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
                Manager.PremiumScore = Manager.PremiumScore + 500;
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
}