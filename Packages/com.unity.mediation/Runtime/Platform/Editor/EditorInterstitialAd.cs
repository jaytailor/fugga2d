#if UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class EditorInterstitialAd : IInterstitialAd
    {
        public EditorInterstitialAd(string gameId, string adUnitId) {}

#pragma warning disable 67
        public event EventHandler OnLoaded;

        public event EventHandler<LoadErrorEventArgs> OnFailedLoad;

        public event EventHandler OnShowed;

        public event EventHandler OnClicked;

        public event EventHandler OnClosed;

        public event EventHandler<ShowErrorEventArgs> OnFailedShow;
#pragma warning restore 67

        public AdState AdState => AdState.Unloaded;

        public string AdUnitId { get; }

        public void Load() {}

        public void Show() {}

        public void Dispose() {}
    }
}
#endif
