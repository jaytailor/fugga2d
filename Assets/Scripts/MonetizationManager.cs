using System.Collections;
using UnityEngine;
using Unity.Monetization;

/// <summary>
/// MonetizationManager integrates the Unity Monetization SDK with the game.
/// The SDK automatically handles showing ads or IAP promos based on decision engine.
/// Game dev just calls Prepare/Present and handles rewards on completion.
/// </summary>
public class MonetizationManager : MonoBehaviour
{
    public static MonetizationManager Instance { get; private set; }

    // Placement IDs for different monetization points
    private const string PLACEMENT_LEVEL_COMPLETE = "level_complete_reward";
    private const string PLACEMENT_GAME_OVER = "game_over_reward";
    private const string PLACEMENT_NOT_ENOUGH_COINS = "not_enough_coins";
    private const string PLACEMENT_MANUAL_EARN = "manual_earn_coins";

    private string _currentPlacementId = null;
    private System.Action _onCompleteCallback = null;

    #if UNITY_IOS
    private string levelPlayAppKey = "18d4c8215";
    #elif UNITY_ANDROID
    private string levelPlayAppKey = "18d4c488d";
    #else
    private string levelPlayAppKey = "18d4c488d"; // Editor fallback
    #endif

    private bool isInitialized = false;
    private bool isShowingContent = false; // Prevent overlapping monetization flows

    public bool IsInitialized => isInitialized;

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

    public void Initialize()
    {
        Debug.Log("=== MONETIZATION MANAGER INITIALIZATION START ===");
        StartCoroutine(InitializeAsync());
    }

    private IEnumerator InitializeAsync()
    {
        // Use ServerDecisionEngine to connect to local decision engine
        Debug.Log("Setting ServerDecisionEngine pointing to local decision engine at http://127.0.0.1:8080");
        var serverEngine = new ServerDecisionEngine(
            serverUrl: "http://127.0.0.1:8080",
            gameId: "upid_fugga2d",
            apiKey: "game_api_key_secret_123",
            timeoutSeconds: 10
        );
        MonetizationService.SetDecisionEngine(serverEngine);

        // Subscribe to SDK events (event-based API)
        MonetizationService.OnPrepared += OnContentPrepared;
        MonetizationService.OnPrepareFailed += OnPrepareFailed;
        MonetizationService.OnCompleted += OnContentCompleted;
        MonetizationService.OnPresentFailed += OnPresentFailed;

        // Initialize with LevelPlay app key
        Debug.Log("Initializing MonetizationService with LevelPlay key: " + levelPlayAppKey);
        var config = new MonetizationConfig
        {
            MediationAppKey = levelPlayAppKey,
            TestMode = false
        };

        var initTask = MonetizationService.Initialize(config);
        while (!initTask.IsCompleted)
        {
            yield return null;
        }

        if (MonetizationService.IsInitialized)
        {
            isInitialized = true;
            Debug.Log("=== MONETIZATION MANAGER INITIALIZED SUCCESSFULLY ===");
        }
        else
        {
            Debug.LogError("=== MONETIZATION MANAGER INITIALIZATION FAILED ===");
        }
    }

    public void ShowLevelCompleteReward(System.Action onComplete = null)
    {
        ShowMonetizationContent(PLACEMENT_LEVEL_COMPLETE, "level complete", onComplete);
    }

    public void ShowGameOverReward(System.Action onComplete = null)
    {
        ShowMonetizationContent(PLACEMENT_GAME_OVER, "game over", onComplete);
    }

    public void ShowNotEnoughCoinsOffer(System.Action onComplete = null)
    {
        ShowMonetizationContent(PLACEMENT_NOT_ENOUGH_COINS, "not enough coins", onComplete);
    }

    public void ShowManualEarnCoins(System.Action onComplete = null)
    {
        ShowMonetizationContent(PLACEMENT_MANUAL_EARN, "manual earn", onComplete);
    }

    private void ShowMonetizationContent(string placementId, string context, System.Action onComplete = null)
    {
        if (!isInitialized)
        {
            Debug.LogWarning($"MonetizationManager not initialized for {context}. Using fallback.");
            FallbackToAds();
            onComplete?.Invoke();
            return;
        }

        // Prevent overlapping monetization flows
        if (isShowingContent)
        {
            Debug.LogWarning($"[MonetizationManager] Already showing monetization content, ignoring request for {context}");
            onComplete?.Invoke();
            return;
        }

        // Dispose any previous content before starting new flow
        if (_currentPlacementId != null)
        {
            Debug.Log($"[MonetizationManager] Disposing previous placement: {_currentPlacementId}");
            MonetizationService.Dispose(_currentPlacementId);
            _currentPlacementId = null;
        }

        isShowingContent = true;
        _currentPlacementId = placementId;
        _onCompleteCallback = onComplete;
        Debug.Log($"[MonetizationManager] ====== NEW MONETIZATION REQUEST ======");
        Debug.Log($"[MonetizationManager] Preparing monetization content for {context} (placement: {placementId})...");

        // SDK handles everything - just call Prepare()
        // Decision engine will determine ads or IAP
        // SDK will automatically show appropriate content
        MonetizationService.Prepare(placementId);
    }

    private void OnContentPrepared(ItemInfo itemInfo)
    {
        Debug.Log($"[MonetizationManager] Content prepared for placement: {itemInfo.PlacementId}");

        // Log content type for debugging
        if (itemInfo is AdItemInfo)
        {
            Debug.Log($"[MonetizationManager] Content type: AD");
        }
        else if (itemInfo is IapItemInfo iapInfo)
        {
            Debug.Log($"[MonetizationManager] Content type: IAP (product: {iapInfo.ProductId})");
        }
        else
        {
            Debug.Log($"[MonetizationManager] Content type: UNKNOWN");
        }

        // Double-check we're not showing content already
        if (!isShowingContent)
        {
            Debug.LogWarning($"[MonetizationManager] Content prepared but isShowingContent flag is false - setting to true");
            isShowingContent = true;
        }

        // SDK automatically handles presentation
        // - If Ads: presents ad immediately
        // - If IAP: shows built-in promo panel
        MonetizationService.Present(itemInfo.PlacementId);
    }

    private void OnContentCompleted(ItemInfo itemInfo, CompletionInfo completionInfo)
    {
        Debug.Log($"[MonetizationManager] Content completed for placement: {itemInfo.PlacementId}. Result: {completionInfo.Result}");

        if (completionInfo.Result == CompletionResult.Completed)
        {
            // Award reward based on content type
            if (itemInfo is AdItemInfo)
            {
                // User watched ad - grant reward
                Manager.PremiumScore += 100;
                Debug.Log("[MonetizationManager] Granted 100 coins for watching ad. Total: " + Manager.PremiumScore);
            }
            else if (itemInfo is IapItemInfo iapInfo)
            {
                // User completed IAP purchase - grant coins based on SKU
                var skuId = iapInfo.ProductId;
                int coinAmount = 100; // default

                if (skuId.Contains("500"))
                    coinAmount = 500;
                else if (skuId.Contains("1500"))
                    coinAmount = 1500;
                else if (skuId.Contains("3000"))
                    coinAmount = 3000;

                Manager.PremiumScore += coinAmount;
                Debug.Log($"[MonetizationManager] Granted {coinAmount} coins for IAP. Total: " + Manager.PremiumScore);
            }
        }
        else
        {
            Debug.Log($"[MonetizationManager] Content not completed - result: {completionInfo.Result}");
        }

        // Dispose of the content
        MonetizationService.Dispose(itemInfo.PlacementId);
        _currentPlacementId = null;

        // Reset flag so user can trigger monetization again
        isShowingContent = false;
        Debug.Log($"[MonetizationManager] ====== MONETIZATION FLOW COMPLETE ======");

        // Invoke completion callback
        var callback = _onCompleteCallback;
        _onCompleteCallback = null;
        callback?.Invoke();
    }

    private void OnPrepareFailed(string placementId, MonetizationError error)
    {
        Debug.LogError($"[MonetizationManager] Content prepare failed for {placementId}: " + error.Message);
        Debug.Log("[MonetizationManager] Falling back to regular ad system");
        _currentPlacementId = null;
        isShowingContent = false; // Reset flag

        var callback = _onCompleteCallback;
        _onCompleteCallback = null;

        FallbackToAds();

        // Invoke callback after fallback
        callback?.Invoke();
    }

    private void OnPresentFailed(string placementId, MonetizationError error)
    {
        Debug.LogError($"[MonetizationManager] Content present failed for placement: {placementId} - {error.Message}");
        if (error.InnerException != null)
        {
            Debug.LogError($"[MonetizationManager] Exception details: {error.InnerException.Message}\n{error.InnerException.StackTrace}");
        }
        Debug.Log("[MonetizationManager] Falling back to regular ad system");
        MonetizationService.Dispose(placementId);
        _currentPlacementId = null;
        isShowingContent = false; // Reset flag

        var callback = _onCompleteCallback;
        _onCompleteCallback = null;

        FallbackToAds();

        // Invoke callback after fallback
        callback?.Invoke();
    }

    private void FallbackToAds()
    {
        // Use existing ad system if MonetizationService fails
        if (Manager.Ads != null)
        {
            Debug.Log("Showing regular rewarded ad as fallback");
            try
            {
                Manager.Ads.ShowRewarded();
            }
            catch (System.Exception ex)
            {
                Debug.LogError($"Failed to show fallback ad: {ex.Message}");
                Debug.LogWarning("Ad may not be loaded yet. In production builds, this will work after ads are loaded.");
            }
        }
        else
        {
            Debug.LogError("No fallback ad system available");
        }
    }
}
