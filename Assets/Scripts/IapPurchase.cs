using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class IapPurchase : MonoBehaviour {

    public void PurchaseBeach(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 1000) {
            Manager.Theme = "Beach";
            Debug.Log ("bought beach..");

            Manager.PremiumScore -= 1000;
        } else {
            Manager.Ads.ShowRewardedNew();
            Manager.PremiumScore += 1000;
        }
    }

    public void PurchaseDream(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 5000){
            Manager.Theme = "Dream";
            Debug.Log ("bought dream..");

            Manager.PremiumScore -= 5000;
        }
        else {
            Manager.Ads.ShowRewardedNew();
            Manager.PremiumScore += 5000;
        }
    }

    public void PurchaseCloud(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 10000){
            Manager.Theme = "Cloud";
            Debug.Log ("bought cloud..");

            Manager.PremiumScore -= 10000;
        }
        else {
            Manager.Ads.ShowRewardedNew();
            Manager.PremiumScore += 10000;
        }
    }

    public void Upgrade200()
    {
        Manager.Ads.ShowRewardedVideo();
    }
}