using System;
using Unity.Mediation.Platform;

namespace Unity.Mediation
{
    /// <summary>
    /// Class to be instantiated in order to show a Rewarded Ad.
    /// </summary>
    public sealed class RewardedAd : IDisposable
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
        /// Event to be triggered by the adapter when a Rewarded Ad is shown.
        /// </summary>
        public event EventHandler OnShowed;

        /// <summary>
        /// Event to be triggered by the adapter when the user clicks on the RewardedAd.
        /// </summary>
        public event EventHandler OnClicked;

        /// <summary>
        /// Event to be triggered by the adapter when the RewardedAd is closed.
        /// </summary>
        public event EventHandler OnClosed;

        /// <summary>
        /// Event to be triggered by the adapter when the RewardedAd has an error.
        /// </summary>
        public event EventHandler<ShowErrorEventArgs> OnFailedShow;

        /// <summary>
        /// Event to be triggered by the adapter when a reward needs to be issued.
        /// </summary>
        public event EventHandler<RewardEventArgs> OnUserRewarded;

        /// <summary>
        ///<value>Gets the state of the <c>RewardedAd</c></value>
        /// </summary>
        public AdState AdState => RewardedAdImpl.AdState;

        /// <summary>
        /// <value>Gets the id of the ad unit.</value>
        /// </summary>
        public string AdUnitId => RewardedAdImpl.AdUnitId;

        IRewardedAd RewardedAdImpl;

        /// <summary>
        /// Constructor for managing a specific Rewarded Ad.
        /// </summary>
        /// <param name="gameId">Unique Id for the game you are showing from.</param>
        /// <param name="adUnitId">Unique Id for the Ad you want to show.</param>
        public RewardedAd(string gameId, string adUnitId)
        {
#if UNITY_EDITOR
            RewardedAdImpl = new EditorRewardedAd(gameId, adUnitId);
#elif UNITY_ANDROID
            RewardedAdImpl = new AndroidRewardedAd(gameId, adUnitId);
#elif UNITY_IOS
            RewardedAdImpl = new IosRewardedAd(gameId, adUnitId);
#else
            RewardedAdImpl = new UnsupportedRewardedAd(gameId, adUnitId);
#endif
            InitializeCallbacks();
        }

        internal RewardedAd(IRewardedAd rewardedAdImpl)
        {
            RewardedAdImpl = rewardedAdImpl;
            InitializeCallbacks();
        }

        void InitializeCallbacks()
        {
            RewardedAdImpl.OnLoaded += (sender, args) => OnLoaded?.Invoke(this, args);
            RewardedAdImpl.OnFailedLoad += (sender, args) => OnFailedLoad?.Invoke(this, args);
            RewardedAdImpl.OnShowed += (sender, args) => OnShowed?.Invoke(this, args);
            RewardedAdImpl.OnClicked += (sender, args) => OnClicked?.Invoke(this, args);
            RewardedAdImpl.OnClosed += (sender, args) => OnClosed?.Invoke(this, args);
            RewardedAdImpl.OnFailedShow += (sender, args) => OnFailedShow?.Invoke(this, args);
            RewardedAdImpl.OnUserRewarded += (sender, args) => OnUserRewarded?.Invoke(this, args);
        }

        /// <summary>
        /// Method to tell the Mediation SDK to load an Ad.
        /// </summary>
        public void Load() => RewardedAdImpl.Load();

        /// <summary>
        /// Method to tell the Mediation SDK to show the loaded Ad.
        /// </summary>
        public void Show() => RewardedAdImpl.Show();

        /// <summary>
        /// Dispose and release internal resources.
        /// </summary>
        public void Dispose() => RewardedAdImpl.Dispose();
    }
}
