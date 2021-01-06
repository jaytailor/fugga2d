using System;

namespace Unity.Mediation.Platform
{
    interface IUnityMediation
    {
        event EventHandler OnInitializationComplete;
        event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;

        InitializationState State { get; }

        void Initialize(string gameId);
    }
}
