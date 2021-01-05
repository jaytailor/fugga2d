using System;
using Unity.Mediation.Platform;

namespace Unity.Mediation
{
    /// <summary>
    /// Class to be instantiated in order to show an Interstitial Ad.
    /// </summary>
    public sealed class InterstitialAd : IDisposable
    {
        /// <summary>
        /// Event to be triggered by the adapter when an Ad is loaded.
        /// </summary>
        public event EventHandler OnLoaded;

        /// <summary>
        /// Event to be triggered by the adapter when an Ad fails to load.
        /// </summary>
        public event EventHandler<LoadErrorEventArgs> OnFailedLoad;

        /// <summary>
        /// Event to be triggered by the adapter when an Ad is started.
        /// </summary>
        public event EventHandler OnShowed;

        /// <summary>
        /// Event to be triggered by the adapter when the user clicks on the Ad.
        /// </summary>
        public event EventHandler OnClicked;

        /// <summary>
        /// Event to be triggered by the adapter when the Ad is closed.
        /// </summary>
        public event EventHandler OnClosed;

        /// <summary>
        /// Event to be triggered by the adapter when the Ad has an error.
        /// </summary>
        public event EventHandler<ShowErrorEventArgs> OnFailedShow;

        /// <summary>
        /// Get the current state of the ad.
        /// </summary>
        public AdState AdState => InterstitialAdImpl.AdState;

        /// <summary>
        /// Get the ad unit id set during construction.
        /// </summary>
        public string AdUnitId => InterstitialAdImpl.AdUnitId;

        IInterstitialAd InterstitialAdImpl;
        /// <summary>
        /// Constructor for managing a specific Interstitial Ad.
        /// </summary>
        /// <param name="gameId">Unique Id for the game you are showing from.</param>
        /// <param name="adUnitId">Unique Id for the Ad you want to show.</param>
        public InterstitialAd(string gameId, string adUnitId)
        {
#if UNITY_EDITOR
            InterstitialAdImpl = new EditorInterstitialAd(gameId, adUnitId);
#elif UNITY_ANDROID
            InterstitialAdImpl = new AndroidInterstitialAd(gameId, adUnitId);
#elif UNITY_IOS
            InterstitialAdImpl = new IosInterstitialAd(gameId, adUnitId);
#else
            InterstitialAdImpl = new UnsupportedInterstitialAd(gameId, adUnitId);
#endif
            InitializeCallbacks();
        }

        internal InterstitialAd(IInterstitialAd interstitialAdImpl)
        {
            InterstitialAdImpl = interstitialAdImpl;
            InitializeCallbacks();
        }

        void InitializeCallbacks()
        {
            InterstitialAdImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
            InterstitialAdImpl.OnFailedLoad += (sender, args) => OnFailedLoad?.Invoke(this, args);
            InterstitialAdImpl.OnShowed += (sender, args) => OnShowed?.Invoke(this, args);
            InterstitialAdImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
            InterstitialAdImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
            InterstitialAdImpl.OnFailedShow += (sender, args) => OnFailedShow?.Invoke(this, args);
        }

        /// <summary>
        /// Method to tell the Mediation SDK to load an Ad.
        /// </summary>
        public void Load() => InterstitialAdImpl.Load();

        /// <summary>
        /// Method to tell the Mediation SDK to show the loaded Ad.
        /// </summary>
        public void Show() => InterstitialAdImpl.Show();

        /// <summary>
        /// Dispose and release internal resources.
        /// </summary>
        public void Dispose() => InterstitialAdImpl.Dispose();
    }
}
