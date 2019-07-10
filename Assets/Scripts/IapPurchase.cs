using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class IapPurchase : MonoBehaviour {

	public UnityAds ads;

	void Start(){
	}

	void Awake(){
		ads = GameObject.Find ("IAP Listener").GetComponent<UnityAds>();
	}
	
	public void OnPurchaseFailed(Product item, PurchaseFailureReason r)
	{
		Debug.Log("UnityIAP.OnPurchaseFailed(" + item + ", " + r + ")");
	}

	public void OnPurchaseComplete(Product item)
	{
		Debug.Log("UnityIAP.OnPurchaseComplete(" + item + ")");
		Manager.PremiumScore += 1000;
	}

	public void PurchaseBeach(){
		// Check the premium amount 
		if (Manager.PremiumScore >= 1000) {
			Manager.Theme = "Beach";
			Debug.Log ("bought beach..");

			Manager.PremiumScore -= 1000;
		} else {
			// Need to setup IAP promo here
//			GameObject purchaseScreen = GameObject.Find ("PurchaseScreen");
//			purchaseScreen.SetActive (true);
			
			ads.ShowPromo ();
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
			// Need to setup IAP promo here
//			GameObject purchaseScreen = GameObject.Find ("PurchaseScreen");
//			purchaseScreen.SetActive (true);
			
			ads.ShowPromo ();
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
			// Need to setup IAP promo here
//			GameObject purchaseScreen = GameObject.Find ("PurchaseScreen");
//			purchaseScreen.SetActive (true);
			
			ads.ShowPromo ();
		}
	}

    public void Upgrade200()
    {
        Manager.Ads.ShowRewardedVideo();
    }

}
