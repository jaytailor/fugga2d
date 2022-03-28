using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using AppsFlyerSDK;

public class IapPurchase : MonoBehaviour {

    public void PurchaseBeach(){
        // Check the premium amount 
        if (Manager.PremiumScore >= 1000) {
            Dictionary<string, string> eventValues = new Dictionary<string, string>();
            eventValues.Add("Purchase_Level", "Beach");
            AppsFlyer.sendEvent(AFInAppEvents.PURCHASE,eventValues);
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
            Dictionary<string, string> eventValues = new Dictionary<string, string>();
            eventValues.Add("Purchase_Level", "Dream");
            AppsFlyer.sendEvent(AFInAppEvents.PURCHASE,eventValues);
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
            Dictionary<string, string> eventValues = new Dictionary<string, string>();
            eventValues.Add("Purchase_Level", "Cloud");
            AppsFlyer.sendEvent(AFInAppEvents.PURCHASE,eventValues);
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