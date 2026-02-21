using UnityEngine;
using UnityEngine.UI;

// Attach this script to your IAP purchase buttons
public class IAPButton : MonoBehaviour
{
    public enum CoinPackage
    {
        Coins500,   // $0.99
        Coins1500,  // $1.99
        Coins3000   // $2.99
    }

    [Header("Configuration")]
    public CoinPackage package = CoinPackage.Coins500;

    [Header("Optional UI")]
    public Text priceText; // Optional: Display the price

    void Start()
    {
        // Update price display if text is assigned
        if (priceText != null)
        {
            UpdatePriceDisplay();
        }
    }

    // Call this method from your button's OnClick event
    public void OnPurchaseButtonClick()
    {
        if (IAPManager.Instance == null)
        {
            Debug.LogError("IAPButton: IAPManager not found in scene!");
            Debug.LogError("IAPButton: Make sure IAPManager GameObject exists in the scene.");
            return;
        }

        Debug.Log("IAPButton: Purchase button clicked for " + package);

        // Attempt purchase even if not ready - let IAPManager provide detailed error feedback
        switch (package)
        {
            case CoinPackage.Coins500:
                IAPManager.Instance.BuyCoins500();
                break;
            case CoinPackage.Coins1500:
                IAPManager.Instance.BuyCoins1500();
                break;
            case CoinPackage.Coins3000:
                IAPManager.Instance.BuyCoins3000();
                break;
        }
    }

    void UpdatePriceDisplay()
    {
        if (IAPManager.Instance == null || !IAPManager.Instance.IsIAPReady())
        {
            priceText.text = "Loading...";
            Invoke("UpdatePriceDisplay", 1f); // Retry in 1 second
            return;
        }

        string productId = "";
        switch (package)
        {
            case CoinPackage.Coins500:
                productId = IAPManager.PRODUCT_500_COINS;
                break;
            case CoinPackage.Coins1500:
                productId = IAPManager.PRODUCT_1500_COINS;
                break;
            case CoinPackage.Coins3000:
                productId = IAPManager.PRODUCT_3000_COINS;
                break;
        }

        priceText.text = IAPManager.Instance.GetProductPrice(productId);
    }
}
