#if UNITY_EDITOR
using System;
using System.Collections;
using Unity.Services.Mediation;
using Unity.Services.Mediation.Platform;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
using Random = UnityEngine.Random;

class MockRewarded : MonoBehaviour, IRewardedAd
{
    [Header("Properties")]
    public float AdTime = 5f;
    public bool  DisplayConsoleMessages = true;
    public bool  DisplayMockAd = true;
    public bool  DisplaySlideAnimation = true;
    [Range(0f, 10f)] public float MockLoadTimeInSeconds = 0f;
    [Range(0f, 1f)]  public float MockNoFillChance = 0f;

    [Header("References")]
    public Button CloseButton;
    public Button SkipButton;
    public Image  ProgressBar;
    public Canvas Canvas;
    public RectTransform CanvasPanel;

    private Coroutine m_AdCoroutine;

    public AdState AdState { get; private set; }
    public string AdUnitId { get; internal set; }

    public event EventHandler OnLoaded;
    public event EventHandler<LoadErrorEventArgs> OnFailedLoad;
    public event EventHandler OnShowed;
    public event EventHandler OnClicked;
    public event EventHandler OnClosed;
    public event EventHandler<ShowErrorEventArgs> OnFailedShow;
    public event EventHandler<RewardEventArgs> OnUserRewarded;

    private void Awake()
    {
        Canvas.enabled = false;

        if (DisplayConsoleMessages)
        {
            InitializeConsoleCallbacks();
        }
    }

    private void InitializeConsoleCallbacks()
    {
        OnLoaded += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Rewarded Loaded</color>");
        OnFailedLoad += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=red>Rewarded Fail to Load:</color> {args.Message}");

        OnUserRewarded += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>User Rewarded:</color> (type: {args.Type}, amount: {args.Amount})");
        OnClicked += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Rewarded Clicked</color>");
        OnClosed += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Rewarded Closed</color>");

        OnShowed += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Rewarded Showed</color>");
        OnFailedShow += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=red>Rewarded Fail to Show:</color> {args.Message}");
    }

    public void Load()
    {
        if (MediationService.InitializationState != InitializationState.Initialized)
        {
            OnFailedLoad?.Invoke(this, new LoadErrorEventArgs(LoadError.SdkNotInitialized, "Unity Mediation not Initialized."));
        }

        if (string.IsNullOrEmpty(AdUnitId))
        {
            OnFailedLoad?.Invoke(this, new LoadErrorEventArgs(LoadError.Unknown, "Ad Unit Id is Empty."));
        }

        StartCoroutine(AttemptLoad());
    }

    private IEnumerator AttemptLoad()
    {
        yield return new WaitForSeconds(MockLoadTimeInSeconds);

        if (Random.value < MockNoFillChance)
        {
            OnFailedLoad?.Invoke(this, new LoadErrorEventArgs(LoadError.NoFill, "Ad Unit failed to fill."));
        }
        else
        {
            AdState = AdState.Loaded;
            OnLoaded?.Invoke(this, EventArgs.Empty);
        }
    }

    public void Show()
    {
        if (AdState == AdState.Loaded)
        {
            if (DisplayMockAd)
            {
                ShowAd();
            }
            OnShowed?.Invoke(this, EventArgs.Empty);
            AdState = AdState.Showing;
        }
        else
        {
            OnFailedShow?.Invoke(this, new ShowErrorEventArgs(ShowError.AdNotLoaded, "Ad Not Loaded."));
        }
    }

    private void ShowAd()
    {
        Canvas.enabled = true;
        m_AdCoroutine = StartCoroutine(StartAd());
    }

    IEnumerator StartAd()
    {
        ProgressBar.fillAmount = 0;
        SkipButton.gameObject.SetActive(true);
        CloseButton.gameObject.SetActive(false);

        if (DisplaySlideAnimation)
        {
            CanvasPanel.offsetMax = new Vector2(CanvasPanel.offsetMax.x, -Screen.height);
            CanvasPanel.offsetMin = new Vector2(CanvasPanel.offsetMin.x, -Screen.height);
        }

        float timer = 0;
        while (timer < AdTime)
        {
            var interpolatedTopValue = Mathf.Lerp(CanvasPanel.offsetMax.y, 0, 0.075f);
            CanvasPanel.offsetMax = new Vector2(CanvasPanel.offsetMax.x, interpolatedTopValue);
            CanvasPanel.offsetMin = new Vector2(CanvasPanel.offsetMin.x, interpolatedTopValue);

            ProgressBar.fillAmount = timer / AdTime;

            timer += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        EndAd();
    }

    public void EndAd()
    {
        StopCoroutine(m_AdCoroutine);
        ProgressBar.fillAmount = 1;
        SkipButton.gameObject.SetActive(false);
        CloseButton.gameObject.SetActive(true);
    }

    public void CloseAd()
    {
        EndAd();
        OnClosed?.Invoke(this, EventArgs.Empty);
        OnUserRewarded?.Invoke(this, new RewardEventArgs("test", "1.0"));
        InvokeImpressionEvent(this, new ImpressionEventArgs(AdUnitId, new ImpressionData()));
        Canvas.enabled = false;
    }

    public void ClickedAd()
    {
        OnClicked?.Invoke(this, EventArgs.Empty);
    }

    public void Dispose()
    {
        if (this != null && gameObject != null)
            Destroy(gameObject);
    }

    void InvokeImpressionEvent(object sender, ImpressionEventArgs args)
    {
        ((EditorImpressionEventPublisher)MediationService.Instance.ImpressionEventPublisher).InvokeOnImpressionEvent(sender, args);
    }
}
#endif
