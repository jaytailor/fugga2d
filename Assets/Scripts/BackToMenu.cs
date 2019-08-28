using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToMenu : MonoBehaviour
{
    GameObject backMenuObj;

    void Start()
    {
        backMenuObj = GameObject.Find("BackToMenu");
        backMenuObj.SetActive(false);
        //Manager.Ads.ShowBanner();
        Manager.Ads.ClickShowBanner();
    }

    public void showBackMenu()
    {
        backMenuObj.SetActive(true);
    }

    public void takeToMainMenu()
    {
        Debug.Log("TakeToMainMenu");
        int CurrPremium = Manager.PremiumScore;

        if(Manager.Ads.decisionResult != null)
        {
            if (Manager.Ads.decisionResult.Result.ToString() == "SHOW_ADS")
            {
                Debug.Log("ad shown");
                Manager.Ads.ClickShowAd();
                Manager.Ads.decisionResult.OperativeEvents.AdvertisementShown();
            }
            else
            {
                Debug.Log("promo shown");
                Manager.Ads.ShowPromo();
                Manager.Ads.decisionResult.OperativeEvents.PromotionShown();
            }
        }

        resetValues(CurrPremium);
        SceneManager.LoadScene(0);

        //if (Manager.Ads.segmentResult == "Payer")
        //{
        //    Debug.Log("promo shown");
        //}
        //else {
        //    Manager.Ads.ClickShowAd();
        //    Debug.Log("show video ad");
        //    SceneManager.LoadScene(0);
        //    resetValues(CurrPremium);
        //}

        //      Manager.Ads.ClickShowAd();
        //      Debug.Log("show video ad");
        //      SceneManager.LoadScene (0);
        //resetValues (CurrPremium);
    }

    public void resetValues(int premium)
    {
        // Move the score back to 0
        Score.scoreValue = 0;

        // and reset the life to 3
        LifeValue.lifeValue = 3;

        // reset to the last premium value
        Manager.PremiumScore = premium;
    }

}
