using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Advertisements;

public class IapPurchase : MonoBehaviour, IStoreListener
{
    public UnityAds ads;

    void Awake()
    {
        InitialiseAdsAndIap();
    }

    public void InitialiseAdsAndIap()
    {
        if (ads == null)
        {
            Debug.LogError("Ad not defined");
        }
        //UnityPurchasing.Initialize(this, BuildStore());
        UnityAdsPurchasing.Initialize(this, BuildStore());
    }

    private ConfigurationBuilder BuildStore()
    {
        ProductCatalog catalog = ProductCatalog.LoadDefaultCatalog();
        Debug.Log(catalog.allProducts.Count);
        var module = StandardPurchasingModule.Instance();
//        module.useFakeStoreAlways = true;
//        module.useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
        ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
        IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, catalog);
        return builder;
    }

    public void OnPurchaseComplete(Product item)
    {
    }

    public void PurchaseBeach()
    {
        if (Manager.PremiumScore >= 1000)
        {
            Manager.Theme = "Beach";
            Debug.Log("bought beach..");
            Manager.PremiumScore -= 1000;
        }
        else
        {
            ShowPromo();
        }
    }

    public void PurchaseDream()
    {
        if (Manager.PremiumScore >= 5000)
        {
            Manager.Theme = "Dream";
            Debug.Log("bought dream..");
            Manager.PremiumScore -= 5000;
        }
        else
        {
            ShowPromo();
        }
    }

    public void PurchaseCloud()
    {
        // Check the premium amount 
        if (Manager.PremiumScore >= 10000)
        {
            Manager.Theme = "Cloud";
            Debug.Log("bought cloud..");

            Manager.PremiumScore -= 10000;
        }
        else
        {
            ShowPromo();
        }
    }

    public void ShowPromo()
    {
        Manager.Ads.ShowPromo();
    }

    public void Upgrade200()
    {
        //Manager.Ads.ShowRewardedVideo();
        Manager.Ads.ClickShowAd();
    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.LogError(error);
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
    {
        Debug.Log("UnityIAP.OnPurchaseComplete(" + e.purchasedProduct.definition.id + ")");
        Manager.PremiumScore += 1000;
        Manager.Theme = "Beach";
        return PurchaseProcessingResult.Complete;
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {    
        Debug.Log("called and " + PlayerPrefs.GetString("PARENTAL_GATE_PASSED") );
        if (PlayerPrefs.GetString("PARENTAL_GATE_PASSED").Equals("true"))
        {
            Debug.Log("parental gate passed, ads will be shown: " + Manager.ParentalGatePassed);
            Debug.Log("Purchasing Initialized");
            ads.Init();   
        }
    }

    public void OnPurchaseFailed(Product item, PurchaseFailureReason r)
    {
        Debug.Log("UnityIAP.OnPurchaseFailed(" + item + ", " + r + ")");
    }
}