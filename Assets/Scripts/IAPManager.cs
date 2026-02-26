using System;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using Unity.Services.Core;

public class IAPManager : MonoBehaviour, IDetailedStoreListener
{
    // #region agent log
    static void DebugLog(string location, string message, string dataJson, string hypothesisId)
    {
        try
        {
            string path = Application.isEditor
                ? Path.GetFullPath(Path.Combine(Application.dataPath, "..", ".cursor", "debug-8642dd.log"))
                : Path.Combine(Application.persistentDataPath, "debug-8642dd.log");
            string dataStr = string.IsNullOrEmpty(dataJson) ? "{}" : dataJson;
            string line = "{\"sessionId\":\"8642dd\",\"location\":\"" + EscapeJson(location) + "\",\"message\":\"" + EscapeJson(message) + "\",\"data\":" + dataStr + ",\"timestamp\":" + DateTimeOffset.UtcNow.ToUnixTimeMilliseconds() + ",\"hypothesisId\":\"" + hypothesisId + "\"}\n";
            File.AppendAllText(path, line);
        }
        catch { }
    }
    static string EscapeJson(string s) { return (s ?? "").Replace("\\", "\\\\").Replace("\"", "\\\"").Replace("\n", "\\n").Replace("\r", "\\r"); }
    // #endregion

    public static IAPManager Instance { get; private set; }

    private static IStoreController storeController;
    private static IExtensionProvider storeExtensionProvider;

    // Product IDs (must match Google Play Console one-time product IDs exactly)
    public const string PRODUCT_500_COINS = "500_coins";
    public const string PRODUCT_1500_COINS = "1500_coins";
    public const string PRODUCT_3000_COINS = "3000_coins";

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
        // #region agent log
        DebugLog("IAPManager.cs:Start", "IAP Start began", "{}", "H1");
        // #endregion
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
            // #region agent log
            DebugLog("IAPManager.cs:InitializeUnityServices", "Unity Services init OK", "{}", "H1");
            // #endregion
        }
        catch (Exception e)
        {
            Debug.LogError("IAP: Failed to initialize Unity Services: " + e.Message);
            // #region agent log
            DebugLog("IAPManager.cs:InitializeUnityServices", "Unity Services init FAILED", "{\"error\":\"" + EscapeJson(e.Message) + "\"}", "H1");
            // #endregion
        }
    }

    void InitializePurchasing()
    {
        // #region agent log
        DebugLog("IAPManager.cs:InitializePurchasing", "InitializePurchasing called", "{\"alreadyInit\":" + (IsInitialized() ? "true" : "false") + "}", "H1");
        // #endregion
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
        // #region agent log
        DebugLog("IAPManager.cs:OnInitialized", "IAP store initialized successfully", "{}", "H1");
        // #endregion
        storeController = controller;
        storeExtensionProvider = extensions;
    }

    // Called when Unity IAP initialization fails
    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.LogError("IAP: Initialization FAILED - " + error);
        // #region agent log
        DebugLog("IAPManager.cs:OnInitializeFailed", "IAP init failed", "{\"error\":\"" + EscapeJson(error.ToString()) + "\"}", "H1");
        // #endregion
    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {
        Debug.LogError("IAP: Initialization FAILED - " + error + ": " + message);
        // #region agent log
        DebugLog("IAPManager.cs:OnInitializeFailed", "IAP init failed (detailed)", "{\"error\":\"" + EscapeJson(error.ToString()) + "\",\"message\":\"" + EscapeJson(message) + "\"}", "H1");
        // #endregion
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
        // #region agent log
        DebugLog("IAPManager.cs:BuyProductID", "BuyProductID called", "{\"productId\":\"" + EscapeJson(productId) + "\",\"isInitialized\":" + (IsInitialized() ? "true" : "false") + "}", "H1");
        // #endregion
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
            // #region agent log
            DebugLog("IAPManager.cs:BuyProductID", "Product not found", "{\"productId\":\"" + EscapeJson(productId) + "\"}", "H2");
            // #endregion
            return;
        }

        if (!product.availableToPurchase)
        {
            Debug.LogError("IAP: Product not available for purchase: " + productId);
            Debug.LogError("IAP: Product definition: " + product.definition.id);
            Debug.LogError("IAP: Product metadata: " + (product.metadata != null ? product.metadata.localizedTitle : "null"));
            // #region agent log
            DebugLog("IAPManager.cs:BuyProductID", "Product not availableToPurchase", "{\"productId\":\"" + EscapeJson(productId) + "\"}", "H3");
            // #endregion
            return;
        }

        Debug.Log("IAP: Initiating purchase for: " + product.definition.id);
        // #region agent log
        DebugLog("IAPManager.cs:BuyProductID", "Calling InitiatePurchase", "{\"productId\":\"" + EscapeJson(productId) + "\"}", "H4");
        // #endregion
        storeController.InitiatePurchase(product);
    }

    // Called when a purchase completes
    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        Debug.Log("IAP: Purchase SUCCESS - " + args.purchasedProduct.definition.id);
        // #region agent log
        DebugLog("IAPManager.cs:ProcessPurchase", "Purchase SUCCESS", "{\"productId\":\"" + EscapeJson(args.purchasedProduct.definition.id) + "\"}", "H5");
        // #endregion

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
        // #region agent log
        DebugLog("IAPManager.cs:OnPurchaseFailed", "Purchase FAILED", "{\"productId\":\"" + EscapeJson(product != null ? product.definition.storeSpecificId : "null") + "\",\"reason\":\"" + EscapeJson(failureReason.ToString()) + "\"}", "H4");
        // #endregion
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        Debug.LogError("IAP: Purchase FAILED - " + product.definition.storeSpecificId +
                      " - " + failureDescription.reason + ": " + failureDescription.message);
        // #region agent log
        DebugLog("IAPManager.cs:OnPurchaseFailed", "Purchase FAILED (detailed)", "{\"productId\":\"" + EscapeJson(product != null ? product.definition.storeSpecificId : "null") + "\",\"reason\":\"" + EscapeJson(failureDescription.reason.ToString()) + "\",\"message\":\"" + EscapeJson(failureDescription.message) + "\"}", "H4");
        // #endregion
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
