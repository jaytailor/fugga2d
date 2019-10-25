using System.Collections;
using System.Collections.Generic;
using DeltaDNA;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToMenu : MonoBehaviour {
	
	GameObject backMenuObj;

	private Mediation mediation = null;

	// Use this for initialization
	void Start () {
		backMenuObj = GameObject.Find ("BackToMenu");
		backMenuObj.SetActive(false);
        Manager.Ads.ShowBanner();

		var go = GameObject.Find("Mediation");
		if (go != null)
		{
			mediation = go.GetComponent<Mediation>();
			mediation.LoadInterstital();
		} else {
			Debug.LogError("Mediation not found");
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showBackMenu(){
		backMenuObj.SetActive (true);
	}
	
	private void myGameParameterHandler(Dictionary<string,object> gameParameters)
	{
		// Parameters Received      
		Debug.Log("Received game parameters from event trigger: " + DeltaDNA.MiniJSON.Json.Serialize(gameParameters));
	}
	
		
	public void takeToMainMenu(){
		int CurrPremium = Manager.PremiumScore;
		
		// if (Manager.Ads.payerResult != null && Manager.Ads.segmentResponse != null)
		// {
		// 	if (Manager.Ads.payerResult == "Payer")
		// 	{
		// 		Manager.Ads.ShowPromo();
		// 		Manager.Ads.segmentResponse.OperativeEvents.PromotionShown();
		// 		Debug.Log("user is a payer so promo shown");
				
		// 	}
		// 	else
		// 	{
		// 		Manager.Ads.ShowVideo();
		// 		Manager.Ads.segmentResponse.OperativeEvents.AdvertisementShown();
		// 		Debug.Log("user is not a payer so ad shown");
		// 	}	
		// }
		
		SceneManager.LoadScene (0);
		resetValues (CurrPremium);
		if (Manager.Ads.payerResult != null && Manager.Ads.segmentResponse != null){
			var gameEvent2 = new GameEvent("playerState").
			AddParam("payer", Manager.Ads.payerProbability);
				
			// Record ddnaEventTriggeredAction event and wire up handler callbacks
			DDNA.Instance.RecordEvent(gameEvent2).Run();
		}

		Debug.Log("BackToMenu: mediation.handler.Show()");
		mediation.handler.Show();
	}

	public void resetValues(int premium){
		// Move the score back to 0
		Score.scoreValue = 0;

		// and reset the life to 3
		LifeValue.lifeValue = 3; 

		// reset to the last premium value
		Manager.PremiumScore = premium;
	}
}
