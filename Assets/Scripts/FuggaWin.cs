using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FuggaWin : MonoBehaviour {

    GameObject winScreenObj;

    // Use this for initialization
    void Start () {
        winScreenObj = GameObject.Find ("FuggaWin");
        winScreenObj.SetActive(false);

    }

    public void showWinningScreen(){
        winScreenObj.SetActive (true);
    }

    public void takeToMainMenu(){
        Manager.Ads.ShowRewardedNew();

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