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
        }
    }

    public void PurchaseDream(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 2000){
            Manager.Theme = "Dream";
            Debug.Log ("bought dream..");

            Manager.PremiumScore -= 2000;
        }
        else {
            Manager.Ads.ShowRewardedNew();
        }
    }

    public void PurchaseCloud(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 3000){
            Manager.Theme = "Cloud";
            Debug.Log ("bought cloud..");

            Manager.PremiumScore -= 3000;
        }
        else {
            Manager.Ads.ShowRewardedNew();
        }
    }

    public void Upgrade200()
    {
        Manager.Ads.ShowRewardedVideo();
    }
}