using System;

namespace Unity.Mediation.Platform
{
    interface IInterstitialAd : IDisposable
    {
        event EventHandler OnLoaded;
        event EventHandler<LoadErrorEventArgs> OnFailedLoad;
        event EventHandler OnShowed;
        event EventHandler OnClicked;
        event EventHandler OnClosed;
        event EventHandler<ShowErrorEventArgs> OnFailedShow;

        AdState AdState { get; }
        string AdUnitId { get; }
        void Load();
        void Show();
    }
}
