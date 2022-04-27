using System;
using System.Threading.Tasks;

namespace Unity.Services.Mediation
{
    /// <summary>
    /// Interface of an Interstitial Ad.
    /// </summary>
    public interface IInterstitialAd : IDisposable
    {
        /// <summary>
        /// Event to be triggered by the adapter when an Ad is loaded.
        /// </summary>
        event EventHandler OnLoaded;

        /// <summary>
        /// Event to be triggered by the adapter when an Ad fails to load.
        /// </summary>
        event EventHandler<LoadErrorEventArgs> OnFailedLoad;

        /// <summary>
        /// Event to be triggered by the adapter when an Ad is started.
        /// </summary>
        event EventHandler OnShowed;

        /// <summary>
        /// Event to be triggered by the adapter when the user clicks on the Ad.
        /// </summary>
        event EventHandler OnClicked;

        /// <summary>
        /// Event to be triggered by the adapter when the Ad is closed.
        /// </summary>
        event EventHandler OnClosed;

        /// <summary>
        /// Event to be triggered by the adapter when the Ad has an error.
        /// </summary>
        event EventHandler<ShowErrorEventArgs> OnFailedShow;

        /// <summary>
        /// Get the current state of the ad.
        /// </summary>
        AdState AdState { get; }

        /// <summary>
        /// Get the ad unit id set during construction.
        /// </summary>
        string AdUnitId { get; }

        /// <summary>
        /// Method to tell the Mediation SDK to load an Ad.
        /// </summary>
        [Obsolete("Deprecated: this method will be removed in a future version. Please use LoadAsync in a try catch block to handle both successful and failed loads. See the mediation sample for more details.")]
        void Load();

        /// <summary>
        /// Method to tell the Mediation SDK to load an Ad.
        /// </summary>
        /// <exception cref="Unity.Services.Mediation.LoadFailedException">Thrown when the ad failed to load</exception>
        Task LoadAsync();

        /// <summary>
        /// Method to tell the Mediation SDK to show the loaded Ad.
        /// </summary>
        [Obsolete("Deprecated: this method will be removed in a future version. Please use ShowAsync in a try catch block to handle both successful and failed shows. See the mediation sample for more details.")]
        void Show();

        /// <summary>
        /// Method to tell the Mediation SDK to show the loaded Ad.
        /// </summary>
        /// <param name="showOptions">Optional, allows setting optional parameters for showing an interstitial ad.</param>
        /// <exception cref="Unity.Services.Mediation.ShowFailedException">Thrown when the ad failed to show</exception>
        Task ShowAsync(InterstitialAdShowOptions showOptions = null);
    }

    /// <summary>
    /// Contains optional parameters for showing an interstitial ad.
    /// </summary>
    public class InterstitialAdShowOptions
    {
        /// <summary>
        /// If set to true, the ad will automatically load another ad after it is done showing, so it is not necessary
        /// to call LoadAsync again. This will occur when the OnClosed or OnFailedShow event is triggered.
        /// </summary>
        public bool AutoReload { get; set; } = false;
    }
}
