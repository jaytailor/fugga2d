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
        // Ensure UnityAds exists
        if (Manager.Ads == null)
        {
            Debug.Log("UnityAds not found, creating it...");
            GameObject adsObj = new GameObject("UnityAds");
            adsObj.AddComponent<UnityAds>();
        }

        if (Manager.Ads != null)
        {
            Manager.Ads.Initialize();
        }
        else
        {
            Debug.LogError("Failed to create UnityAds instance!");
        }

        if (Manager.PremiumGranted == false) {
            Manager.PremiumScore = 100; // Starting coins
            Manager.PremiumGranted = true;
        }

        // Log current coin balance for debugging
        Debug.Log("=== PLAYER COIN BALANCE: " + Manager.PremiumScore + " ===");
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