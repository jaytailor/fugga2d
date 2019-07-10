using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToMenu : MonoBehaviour {
	
	GameObject backMenuObj;

	// Use this for initialization
	void Start () {
		backMenuObj = GameObject.Find ("BackToMenu");
		backMenuObj.SetActive(false);
        //Manager.Ads.ShowBanner();
        Manager.Ads.ClickShowBanner();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showBackMenu(){
		backMenuObj.SetActive (true);
	}
		
	public void takeToMainMenu(){
		int CurrPremium = Manager.PremiumScore;
        //Manager.Ads.ShowVideo();
		
        Manager.Ads.ClickShowAd();
        SceneManager.LoadScene (0);
		resetValues (CurrPremium);
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
