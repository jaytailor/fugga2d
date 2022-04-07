using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour {

    // Use this for initialization
    public GameObject iapListener = null;
    //[SerializeField] private string appID = "ca-app-pub-4734320296886796~5938213117";

    void Awake()
    {
        Manager.Ads.Initialize();
        if (Manager.PremiumGranted == false) {
            Manager.PremiumScore = 100; 
            Manager.PremiumGranted = true;
        }
        //Mono behaviour ANR attempt
        // while (true)
        // {
        //     Debug.Log("Loop");
        // }
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
        Manager.Ads.ShowVideo();
    }

}