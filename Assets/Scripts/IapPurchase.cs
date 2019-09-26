﻿using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class IapPurchase : MonoBehaviour, IStoreListener {

	public UnityAds ads;
	private IStoreController controller;
	private IExtensionProvider extensions;

	void Start()
	{
		Debug.Log("called and " + PlayerPrefs.GetString("PARENTAL_GATE_PASSED") );
		if (PlayerPrefs.GetString("PARENTAL_GATE_PASSED").Equals("true"))
		{
			var module = StandardPurchasingModule.Instance();
			ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
			if (Application.platform.Equals(RuntimePlatform.Android))
			{
				builder.AddProduct("1000_premium", ProductType.Consumable);	
			}
			else
			{
				builder.AddProduct("1000_premium_ios", ProductType.Consumable);	
			}
			UnityPurchasing.Initialize(this, builder);
		}
		else
		{
			Debug.Log("Parental gate failed hence will not initialise ads or iap");
		}
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
    
    /// <summary>
    /// Called when Unity IAP is ready to make purchases.
    /// </summary>
    public void OnInitialized (IStoreController controller, IExtensionProvider extensions)
    {
	    this.controller = controller;
	    this.extensions = extensions;
	    
	    Debug.Log("Unity IAP Initialisation succeeded, init ads now...");
	    ads.Init();
    }

    /// <summary>
    /// Called when Unity IAP encounters an unrecoverable initialization error.
    ///
    /// Note that this will not be called if Internet is unavailable; Unity IAP
    /// will attempt initialization until it becomes available.
    /// </summary>
    public void OnInitializeFailed (InitializationFailureReason error)
    {
	    Debug.Log("Unity IAP Initialisation failed");
    }
    
    /// <summary>
    /// Called when a purchase completes.
    ///
    /// May be called at any time after OnInitialized().
    /// </summary>
    public PurchaseProcessingResult ProcessPurchase (PurchaseEventArgs e)
    {
	    Debug.Log("Unity IAP ProcessPurchase executed");
	    return PurchaseProcessingResult.Complete;
    }


}
