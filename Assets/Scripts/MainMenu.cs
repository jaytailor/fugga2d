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

        #if HAS_UNITY_PURCHASING
        // Create IAPManager if not exists
        if (IAPManager.Instance == null)
        {
            Debug.Log("IAPManager not found, creating it...");
            GameObject iapObj = new GameObject("IAPManager");
            iapObj.AddComponent<IAPManager>();
        }
        #endif

        // Create MonetizationManager
        if (Manager.Monetization == null)
        {
            Debug.Log("MonetizationManager not found, creating it...");
            GameObject monetizationObj = new GameObject("MonetizationManager");
            monetizationObj.AddComponent<MonetizationManager>();
        }

        // Initialize MonetizationManager
        if (Manager.Monetization != null)
        {
            Manager.Monetization.Initialize();
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
        // Use MonetizationManager for 50/50 ads/IAP decision
        if (Manager.Monetization != null)
        {
            Debug.Log("Using MonetizationManager for manual earn coins");
            Manager.Monetization.ShowManualEarnCoins();
        }
        else
        {
            Debug.Log("MonetizationManager not available, using fallback ad system");
            Manager.Ads.ShowVideo();
        }
    }

}