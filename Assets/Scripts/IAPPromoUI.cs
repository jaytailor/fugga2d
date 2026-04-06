using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Unity.Monetization;

/// <summary>
/// Fugga2D's custom IAP promotional UI.
/// Shows when the monetization SDK indicates an IAP offer should be presented.
/// </summary>
public class IAPPromoUI : MonoBehaviour
{
    public static IAPPromoUI Instance { get; private set; }

    private GameObject _panel;
    private string _currentPlacementId;
    private string _currentSkuId;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            CreateUI();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void CreateUI()
    {
        Debug.Log("[IAPPromoUI] Creating IAP promo UI...");

        // Create Canvas
        var canvas = new GameObject("IAPPromoCanvas");
        canvas.transform.SetParent(transform, false);
        var canvasComponent = canvas.AddComponent<Canvas>();
        canvasComponent.renderMode = RenderMode.ScreenSpaceOverlay;
        canvasComponent.sortingOrder = 1000; // Render on top
        var canvasScaler = canvas.AddComponent<CanvasScaler>();
        canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        canvasScaler.referenceResolution = new Vector2(1080, 1920);
        canvas.AddComponent<GraphicRaycaster>();

        // Ensure EventSystem exists
        if (EventSystem.current == null)
        {
            var eventSystem = new GameObject("EventSystem");
            eventSystem.AddComponent<EventSystem>();
            eventSystem.AddComponent<StandaloneInputModule>();
            DontDestroyOnLoad(eventSystem);
        }

        // Create backdrop panel (semi-transparent black overlay)
        _panel = new GameObject("BackdropPanel");
        _panel.transform.SetParent(canvas.transform, false);
        var backdropRect = _panel.AddComponent<RectTransform>();
        backdropRect.anchorMin = Vector2.zero;
        backdropRect.anchorMax = Vector2.one;
        backdropRect.sizeDelta = Vector2.zero;
        backdropRect.anchoredPosition = Vector2.zero;
        var backdropImage = _panel.AddComponent<Image>();
        backdropImage.color = new Color(0, 0, 0, 0.9f);

        // Load and display the promo sprite from Resources
        var promoSprite = Resources.Load<Sprite>("IAPPromo");
        var promoImage = new GameObject("PromoImage");
        promoImage.transform.SetParent(_panel.transform, false);
        var promoRect = promoImage.AddComponent<RectTransform>();
        promoRect.anchorMin = new Vector2(0.5f, 0.5f);
        promoRect.anchorMax = new Vector2(0.5f, 0.5f);
        promoRect.pivot = new Vector2(0.5f, 0.5f);
        promoRect.anchoredPosition = new Vector2(0, 100);
        promoRect.sizeDelta = new Vector2(1000, 1400);
        var promoImageComp = promoImage.AddComponent<Image>();

        if (promoSprite != null)
        {
            promoImageComp.sprite = promoSprite;
            promoImageComp.preserveAspect = true;
            Debug.Log("[IAPPromoUI] Loaded IAPPromo sprite from Resources");
        }
        else
        {
            // Fallback color if sprite not found
            promoImageComp.color = new Color(0.2f, 0.6f, 1f, 0.5f);
            Debug.LogWarning("[IAPPromoUI] IAPPromo sprite not found at Assets/Resources/IAPPromo.png");
        }

        // Buy Button at bottom
        var buyBtn = CreateButton("BuyButton", _panel.transform, new Vector2(0, -800), new Vector2(700, 140));
        var buyBtnImage = buyBtn.GetComponent<Image>();
        buyBtnImage.color = new Color(0.2f, 0.9f, 0.2f); // Bright green
        var buyBtnText = buyBtn.GetComponentInChildren<Text>();
        buyBtnText.text = "BUY NOW";
        buyBtnText.fontSize = 56;
        buyBtnText.fontStyle = FontStyle.Bold;
        buyBtn.onClick.AddListener(OnBuyClicked);

        // Close Button (X in top-right corner)
        var closeBtn = CreateButton("CloseButton", _panel.transform, new Vector2(460, 900), new Vector2(100, 100));
        var closeBtnImage = closeBtn.GetComponent<Image>();
        closeBtnImage.color = new Color(0.8f, 0.2f, 0.2f); // Red
        var closeBtnText = closeBtn.GetComponentInChildren<Text>();
        closeBtnText.text = "✕";
        closeBtnText.fontSize = 48;
        closeBtnText.fontStyle = FontStyle.Bold;
        closeBtn.onClick.AddListener(OnCloseClicked);

        _panel.SetActive(false);
        Debug.Log("[IAPPromoUI] UI creation complete");
    }

    private Button CreateButton(string name, Transform parent, Vector2 position, Vector2 size)
    {
        var go = new GameObject(name);
        go.transform.SetParent(parent, false);
        var rect = go.AddComponent<RectTransform>();
        rect.anchorMin = new Vector2(0.5f, 0.5f);
        rect.anchorMax = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = position;
        rect.sizeDelta = size;

        var image = go.AddComponent<Image>();
        image.color = new Color(0.2f, 0.8f, 0.2f); // Green

        var button = go.AddComponent<Button>();

        // Button text
        var textGo = new GameObject("Text");
        textGo.transform.SetParent(go.transform, false);
        var textRect = textGo.AddComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.sizeDelta = Vector2.zero;
        var text = textGo.AddComponent<Text>();
        text.font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        text.fontSize = 28;
        text.alignment = TextAnchor.MiddleCenter;
        text.color = Color.white;

        return button;
    }

    /// <summary>
    /// Shows the IAP promo UI for a specific placement and SKU.
    /// </summary>
    public void ShowPromo(string placementId, string skuId)
    {
        Debug.Log($"[IAPPromoUI] Showing promo - placement: {placementId}, SKU: {skuId}");
        _currentPlacementId = placementId;
        _currentSkuId = skuId;
        _panel.SetActive(true);
    }

    /// <summary>
    /// Hides the IAP promo UI.
    /// </summary>
    public void HidePromo()
    {
        Debug.Log("[IAPPromoUI] Hiding promo");
        _panel.SetActive(false);
        _currentPlacementId = null;
        _currentSkuId = null;
    }

    private void OnBuyClicked()
    {
        Debug.Log($"[IAPPromoUI] Buy clicked - SKU: {_currentSkuId}");

        // Hide the UI
        _panel.SetActive(false);

        // In a real implementation, you would:
        // 1. Call your IAP system to initiate purchase for _currentSkuId
        // 2. Wait for purchase to complete
        // 3. Then call MonetizationService.CompletePurchase()

        // For now, simulate immediate purchase completion
        Debug.Log($"[IAPPromoUI] Simulating purchase completion for SKU: {_currentSkuId}");

        // Parse coin amount from SKU (fugga2d-specific logic)
        int coinAmount = 500; // default
        if (_currentSkuId.Contains("3000"))
            coinAmount = 3000;
        else if (_currentSkuId.Contains("1500"))
            coinAmount = 1500;
        else if (_currentSkuId.Contains("500"))
            coinAmount = 500;

        // Award coins to player
        Manager.PremiumScore += coinAmount;
        Debug.Log($"[IAPPromoUI] Granted {coinAmount} coins. Total: {Manager.PremiumScore}");

        // Tell the SDK the purchase is complete
        MonetizationService.CompletePurchase(_currentPlacementId);

        _currentPlacementId = null;
        _currentSkuId = null;
    }

    private void OnCloseClicked()
    {
        Debug.Log("[IAPPromoUI] Close clicked");

        // Hide the UI
        _panel.SetActive(false);

        // Tell the SDK the user cancelled
        MonetizationService.CancelPurchase(_currentPlacementId);

        _currentPlacementId = null;
        _currentSkuId = null;
    }
}
