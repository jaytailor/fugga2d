using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public IapPurchase purchaseHandler;

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
        Application.Quit();
    }

    public void ShowVideo()
    {
        Manager.Ads.ClickShowAd();
    }
}