using System;

namespace Unity.Mediation.Platform
{
    interface IRewardedAd : IDisposable
    {
        event EventHandler OnLoaded;
        event EventHandler<LoadErrorEventArgs> OnFailedLoad;
        event EventHandler OnShowed;
        event EventHandler OnClicked;
        event EventHandler OnClosed;
        event EventHandler<ShowErrorEventArgs> OnFailedShow;
        event EventHandler<RewardEventArgs> OnUserRewarded;

        AdState AdState { get; }
        string AdUnitId { get; }
        void Load();
        void Show();
    }
}
