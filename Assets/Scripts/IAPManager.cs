using System;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using Unity.Services.Core;

public class IAPManager : MonoBehaviour, IDetailedStoreListener
{
    public static IAPManager Instance { get; private set; }

    private static IStoreController storeController;
    private static IExtensionProvider storeExtensionProvider;

    // Product IDs
    public const string PRODUCT_500_COINS = "com.jayt.fugga.coins500";
    public const string PRODUCT_1500_COINS = "com.jayt.fugga.coins1500";
    public const string PRODUCT_3000_COINS = "com.jayt.fugga.coins3000";

    void Awake()
    {
        // Singleton pattern
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    async void Start()
    {
        await InitializeUnityServices();

        if (storeController == null)
        {
            InitializePurchasing();
        }
    }

    async Task InitializeUnityServices()
    {
        try
        {
            Debug.Log("IAP: Initializing Unity Services...");
            await UnityServices.InitializeAsync();
            Debug.Log("IAP: Unity Services initialized successfully");
        }
        catch (Exception e)
        {
            Debug.LogError("IAP: Failed to initialize Unity Services: " + e.Message);
        }
    }

    void InitializePurchasing()
    {
        if (IsInitialized())
        {
            return;
        }

        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        // Add consumable products
        builder.AddProduct(PRODUCT_500_COINS, ProductType.Consumable);
        builder.AddProduct(PRODUCT_1500_COINS, ProductType.Consumable);
        builder.AddProduct(PRODUCT_3000_COINS, ProductType.Consumable);

        Debug.Log("IAP: Initializing Unity IAP...");
        UnityPurchasing.Initialize(this, builder);
    }

    private bool IsInitialized()
    {
        return storeController != null && storeExtensionProvider != null;
    }

    // Called when Unity IAP is ready
    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        Debug.Log("IAP: Initialization SUCCESS");
        storeController = controller;
        storeExtensionProvider = extensions;
    }

    // Called when Unity IAP initialization fails
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.LogError("IAP: Initialization FAILED - " + error);
    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {
        Debug.LogError("IAP: Initialization FAILED - " + error + ": " + message);
    }

    // Purchase 500 coins
    public void BuyCoins500()
    {
        BuyProductID(PRODUCT_500_COINS);
    }

    // Purchase 1500 coins
    public void BuyCoins1500()
    {
        BuyProductID(PRODUCT_1500_COINS);
    }

    // Purchase 3000 coins
    public void BuyCoins3000()
    {
        BuyProductID(PRODUCT_3000_COINS);
    }

    void BuyProductID(string productId)
    {
        if (!IsInitialized())
        {
            Debug.LogError("IAP: Store not initialized yet!");
            Debug.LogError("IAP: This usually means:");
            Debug.LogError("IAP: 1. App needs to be uploaded to Google Play Console (Internal testing)");
            Debug.LogError("IAP: 2. Products need to be created and activated (takes 2-4 hours)");
            Debug.LogError("IAP: 3. App must be installed from Play Store, not sideloaded");
            return;
        }

        Product product = storeController.products.WithID(productId);

        if (product == null)
        {
            Debug.LogError("IAP: Product not found: " + productId);
            Debug.LogError("IAP: Make sure product ID matches exactly in Google Play Console");
            return;
        }

        if (!product.availableToPurchase)
        {
            Debug.LogError("IAP: Product not available for purchase: " + productId);
            Debug.LogError("IAP: Product definition: " + product.definition.id);
            Debug.LogError("IAP: Product metadata: " + (product.metadata != null ? product.metadata.localizedTitle : "null"));
            return;
        }

        Debug.Log("IAP: Initiating purchase for: " + product.definition.id);
        storeController.InitiatePurchase(product);
    }

    // Called when a purchase completes
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        Debug.Log("IAP: Purchase SUCCESS - " + args.purchasedProduct.definition.id);

        // Grant the purchased coins
        if (string.Equals(args.purchasedProduct.definition.id, PRODUCT_500_COINS, StringComparison.Ordinal))
        {
            GrantCoins(500);
        }
        else if (string.Equals(args.purchasedProduct.definition.id, PRODUCT_1500_COINS, StringComparison.Ordinal))
        {
            GrantCoins(1500);
        }
        else if (string.Equals(args.purchasedProduct.definition.id, PRODUCT_3000_COINS, StringComparison.Ordinal))
        {
            GrantCoins(3000);
        }
        else
        {
            Debug.LogWarning("IAP: Unknown product purchased: " + args.purchasedProduct.definition.id);
        }

        return PurchaseProcessingResult.Complete;
    }

    // Grant coins to the player
    void GrantCoins(int amount)
    {
        Manager.PremiumScore += amount;
        Debug.Log("IAP: Granted " + amount + " coins. New balance: " + Manager.PremiumScore);

        // Optional: Show a confirmation message to the player
        // You can add UI feedback here
    }

    // Called when a purchase fails
    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.LogError("IAP: Purchase FAILED - " + product.definition.storeSpecificId + " - " + failureReason);
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        Debug.LogError("IAP: Purchase FAILED - " + product.definition.storeSpecificId +
                      " - " + failureDescription.reason + ": " + failureDescription.message);
    }

    // Get price of a product (for displaying in UI)
    public string GetProductPrice(string productId)
    {
        if (IsInitialized())
        {
            Product product = storeController.products.WithID(productId);
            if (product != null)
            {
                return product.metadata.localizedPriceString;
            }
        }
        return "N/A";
    }

    // Check if IAP is ready
    public bool IsIAPReady()
    {
        return IsInitialized();
    }
}
