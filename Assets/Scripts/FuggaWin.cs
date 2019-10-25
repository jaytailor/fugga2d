using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FuggaWin : MonoBehaviour {

	GameObject winScreenObj;
	public GameObject premiumMsg;

	// Use this for initialization
	void Start () {
		winScreenObj = GameObject.Find ("FuggaWin");
		winScreenObj.SetActive(false);

	}

	// Update is called once per frame
	void Update () {

	}

	public void close()
	{
		premiumMsg = GameObject.Find("freePremium");
		premiumMsg.SetActive(false);
	}


	public void showWinningScreen(){
		winScreenObj.SetActive (true);
	}

	public void takeToMainMenu(){
		if (Manager.Ads.churnerResult != null && Manager.Ads.segmentResponse != null)
		{
			if (Manager.Ads.churnerResult == "Churner")
			{
				Manager.Ads.ShowPromo();
				Manager.Ads.segmentResponse.OperativeEvents.PromotionShown();
				Debug.Log("user is a Churner so promo shown");
			}
			else
			{
				Manager.Ads.ShowVideo();
				Manager.Ads.segmentResponse.OperativeEvents.AdvertisementShown();
				Debug.Log("user is not a Churner so ad shown");
			}
		}

		SceneManager.LoadScene (0);
		resetValues ();
	}

	public void resetValues(){
		// Move the score back to 0
		Score.scoreValue = 0;

		// and reset the life to 3
		LifeValue.lifeValue = 3; 
	}
}
