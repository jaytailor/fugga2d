using System.Collections;
using System.Collections.Generic;
using DeltaDNA;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;


public class MainMenu : MonoBehaviour {

	// Use this for initialization
	public GameObject iapListener = null;
	//[SerializeField] private string appID = "ca-app-pub-4734320296886796~5938213117";

	void Awake()
	{
		Manager.Ads = iapListener.GetComponent<UnityAds> ();

		if (Manager.PremiumGranted == false) {
			Manager.PremiumScore = 100; 
			Manager.PremiumGranted = true;
		}
	}

	void Start(){
        //Manager.Ads.ShowBanner();
	}

	public void PlayGame(){
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void QuitGame(){
		Debug.Log ("Quitting the Game");
		Application.Quit();
	}

	public void ShowVideo(){
		
		DDNA.Instance.RecordEvent(new GameEvent("ddnaEventTriggeredAction").AddParam("eventName", "rcs"))
			.Add(new GameParametersHandler(gameParameters => {
				// do something with the game parameters
			}))
			.Add(new ImageMessageHandler(DDNA.Instance, imageMessage => {
				// the image message is already prepared so it will show instantly
				UnityAds.shownPromo = true;
				imageMessage.Show();
			}))
			.Run();

		if (!UnityAds.shownPromo)
		{
			Manager.Ads.ShowVideo();
			Manager.Ads.segmentResponse.OperativeEvents.AdvertisementShown();
			Debug.Log("user is not a payer so ad shown");	
		}

//		if (Manager.Ads.payerResult != null && Manager.Ads.segmentResponse != null)
//		{
//			if (Manager.Ads.payerResult == "Payer")
//			{
//				Debug.Log("sent ddnaEventTriggeredAction");
//
//				var gameEvent = new GameEvent("ddnaEventTriggeredAction").
//					AddParam("eventName", "rcs");
//				
//					// Record ddnaEventTriggeredAction event and wire up handler callbacks
//				DDNA.Instance.RecordEvent(gameEvent).Run();
//
////				Manager.Ads.ShowPromo();
////				Manager.Ads.segmentResponse.OperativeEvents.PromotionShown();
////				Debug.Log("user is a payer so promo shown");
//			}
//			else
//			{
//				Manager.Ads.ShowVideo();
//				Manager.Ads.segmentResponse.OperativeEvents.AdvertisementShown();
//				Debug.Log("user is not a payer so ad shown");
//			}
//		}
//		
	}

}
