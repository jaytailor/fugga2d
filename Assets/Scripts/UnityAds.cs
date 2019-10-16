using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;
using UnityEngine.Purchasing;
using UnityEngine.UI;
using UnityEngine.RCS.DecisionEngine;
using DeltaDNA;

public class UnityAds : MonoBehaviour, ISegmentsListener
{
	#if UNITY_IOS
		private string gameId = "1737343"; // Your iOS game ID here
	#elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
	#else
		private string gameId = "0123456"; // Prevents Editor Errors
	#endif

	public ISegments segmentResponse = null;
	public String payerResult = "Non-Payer";
	public String churnerResult = "Non-Churner";
	public Text segmentText;
	
	// delta dna settings
	public const string ENVIRONMENT_KEY = "27352707823785445427718399015682";
	public const string COLLECT_URL     = "https://collect15753fggqz.deltadna.net/collect/api";
	public const string ENGAGE_URL      = "https://engage15753fggqz.deltadna.net";

	public void Awake()
	{
		// Configure the SDK
		DDNA.Instance.SetLoggingLevel(DeltaDNA.Logger.Level.DEBUG);
		DDNA.Instance.ClientVersion = "1.0.0";
		
		// Hook up callback to fire when DDNA SDK has received session config info, including Event Triggered campaigns.
		DDNA.Instance.NotifyOnSessionConfigured(true);
		DDNA.Instance.OnSessionConfigured += (bool cachedConfig) => GetGameConfig(cachedConfig);

		// Allow multiple game parameter actions callbacks from a single event trigger        
		DDNA.Instance.Settings.MultipleActionsForEventTriggerEnabled = true;
		
		//Register default handlers for event triggered campaigns. These will be candidates for handling ANY Event-Triggered Campaigns. 
		//Any handlers added to RecordEvent() calls with the .Add method will be evaluated before these default handlers. 
		DDNA.Instance.Settings.DefaultImageMessageHandler =
			new ImageMessageHandler(DDNA.Instance, imageMessage => {
				// do something with the image message
				myImageMessageHandler(imageMessage);
			});
		DDNA.Instance.Settings.DefaultGameParameterHandler = new GameParametersHandler(gameParameters => {
			// do something with the game parameters
			myGameParameterHandler(gameParameters);
		});
		
		// Start collecting data
		DDNA.Instance.StartSDK();
		
		
		Debug.Log("UnityAds.Init()");
		StartCoroutine("InitAds");

		Debug.Log("Initialising rcs");
		RCS.Initialize();
		RCS.RequestSegment(this);
	}

	public void Init()
	{
		
	}
	
	// The callback indicating that the deltaDNA has downloaded its session configuration, including 
	// Event Triggered Campaign actions and logic, is used to record a "sdkConfigured" event 
	// that can be used provision remotely configured parameters. 
	// i.e. deferring the game session config until it knows it has received any info it might need
	public void GetGameConfig(bool cachedConfig)
	{
		Debug.Log("Configuration Loaded, Cached =  "  +cachedConfig.ToString());
		Debug.Log("Recording a sdkConfigured event for Event Triggered Campaign to react to");

		// Create an sdkConfigured event object
		var gameEvent = new GameEvent("sdkConfigured")
			.AddParam("clientVersion", DDNA.Instance.ClientVersion);

		// Record sdkConfigured event and run default response hander
		DDNA.Instance.RecordEvent(gameEvent).Run();
	}
	
	private void myGameParameterHandler(Dictionary<string, object> gameParameters)
	{
		// Parameters Received      
		Debug.Log("Received game parameters from event trigger: " + DeltaDNA.MiniJSON.Json.Serialize(gameParameters));
	}
	
	private void myImageMessageHandler(ImageMessage imageMessage)
	{                       
		// Add a handler for the 'dismiss' action.
		imageMessage.OnDismiss += (ImageMessage.EventArgs obj) => {
			Debug.Log("Image Message dismissed by " + obj.ID);
 
			// NB : parameters not processed in this example if player dismisses action
		};
 
		// Add a handler for the 'action' action.
		imageMessage.OnAction += (ImageMessage.EventArgs obj) => {
			Debug.Log("Image Message actioned by " + obj.ID + " with command " + obj.ActionValue);
 
			// Process parameters on image message if player triggers image message action
			if (imageMessage.Parameters != null) myGameParameterHandler(imageMessage.Parameters);
		};
 
		// the image message is already cached and prepared so it will show instantly
		imageMessage.Show();
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
	 
	 public void OnSegmentsReady(ISegments segments)
	 {
		 if (segments.Result.Length < 1) {
			 Debug.Log("Empty Segments List");
			 return;
		 }
		 segmentResponse = segments;

		 // my own game threshold to consider it as payer if probability is > 0%
		 if (segments.Result.Length >= 2) // only if two segment information returned
		 {
			 Debug.Log("OnSegmentsReady: [" + segments.Result[0].segment + "] " + segments.Result[0].probability);
			 Debug.Log("OnSegmentsReady: [" + segments.Result[1].segment + "] " + segments.Result[1].probability);
			 var seg1 = "";
			 var seg2 = "";
			 if (segments.Result[0].probability > 5) // if user is likely payer
			 {
				 payerResult = segments.Result[0].segment;
				 Debug.Log("User is a : " + payerResult);
				 seg1 = "P";
			 }
			 else
			 {
				 seg1 = "NP";
			 }
            
			 if (segments.Result[1].probability > 20) // if user is churner
			 {
				 churnerResult = segments.Result[1].segment;
				 Debug.Log("User is also a : " + churnerResult);
				 seg2 = "C";
			 }
			 else
			 {
				 seg2 = "NC";
			 }
            
			 segmentText.text = "UP: " + seg1 + " and " + seg2 ;
		 }
		 Debug.Log(segmentText.text);
        
	 }

	 public void OnSegmentsError(ISegments segments)
	 {
		 Debug.Log("Segment Error: " + segments.ErrorMessage);
	 }

}