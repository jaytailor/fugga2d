using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class IapPurchase : MonoBehaviour {

    public void PurchaseBeach(){
        int cost = 1000;

        // Check if player has enough coins
        if (Manager.PremiumScore >= cost) {
            Manager.Theme = "Beach";
            Manager.PremiumScore -= cost;
            Debug.Log("Beach theme unlocked! Remaining coins: " + Manager.PremiumScore);
        } else {
            // Not enough coins - show how many they need
            int needed = cost - Manager.PremiumScore;
            Debug.Log("Not enough coins! You have " + Manager.PremiumScore + ", need " + cost + " (short by " + needed + ")");

            // For now, offer to watch an ad to earn coins
            // TODO: Add UI popup to let player choose between watching ad or buying coins via IAP
            ShowNotEnoughCoinsMessage(needed);
        }
    }

    public void PurchaseDream(){
        int cost = 2000;

        // Check if player has enough coins
        if (Manager.PremiumScore >= cost){
            Manager.Theme = "Dream";
            Manager.PremiumScore -= cost;
            Debug.Log("Dream theme unlocked! Remaining coins: " + Manager.PremiumScore);
        }
        else {
            int needed = cost - Manager.PremiumScore;
            Debug.Log("Not enough coins! You have " + Manager.PremiumScore + ", need " + cost + " (short by " + needed + ")");
            ShowNotEnoughCoinsMessage(needed);
        }
    }

    public void PurchaseCloud(){
        int cost = 3000;

        // Check if player has enough coins
        if (Manager.PremiumScore >= cost){
            Manager.Theme = "Cloud";
            Manager.PremiumScore -= cost;
            Debug.Log("Cloud theme unlocked! Remaining coins: " + Manager.PremiumScore);
        }
        else {
            int needed = cost - Manager.PremiumScore;
            Debug.Log("Not enough coins! You have " + Manager.PremiumScore + ", need " + cost + " (short by " + needed + ")");
            ShowNotEnoughCoinsMessage(needed);
        }
    }

    // Show message when player doesn't have enough coins
    void ShowNotEnoughCoinsMessage(int coinsNeeded)
    {
        Debug.Log("=== NOT ENOUGH COINS ===");
        Debug.Log("Options:");
        Debug.Log("1. Watch a rewarded ad to earn coins");
        Debug.Log("2. Purchase coin packs: 500 ($0.99), 1500 ($1.99), or 3000 ($2.99)");

        // For now, just show the rewarded ad
        // In a real game, you'd show a popup UI with options
        Manager.Ads.ShowRewardedVideo();
    }

    public void Upgrade200()
    {
        Manager.Ads.ShowRewardedVideo();
    }
}