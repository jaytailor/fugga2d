using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public IapPurchase purchaseHandler;

#if UNITY_IOS
    public string gameId = "1737343"; // Your iOS game ID here
#elif UNITY_ANDROID
		private string gameId = "1737342"; // Your Android game ID here
#else
    private string gameId = "0123456"; // Prevents Editor Errors
#endif

    void Start()
    {
        Manager.Ads = purchaseHandler.ads;

        if (Manager.PremiumGranted == false)
        {
            Manager.PremiumScore = 100;
            Manager.PremiumGranted = true;
        }
    }

    public void PlayGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void QuitGame()
    {
        Debug.Log("Quitting the Game");
        ShowVideo();
        Application.Quit();
    }

    public void ShowVideo()
    {
        
        if (Manager.Ads.payerResult == "Payer")
        {
            Debug.Log("Ads is : " + Manager.Ads);
            Manager.Ads.ShowPromo();
            Manager.Ads.segmentResponse.OperativeEvents.PromotionShown();
            Debug.Log("user is a payer so promo shown");
        }
        else
        {
            Manager.Ads.ClickShowAd();
            Manager.Ads.segmentResponse.OperativeEvents.AdvertisementShown();
            Debug.Log("user is not a payer so ad shown");
        }
        
    }
}