#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_EDITOR
using System;

namespace Unity.Services.Mediation.Platform
{
    class UnsupportedMediationService : IPlatformMediationService
    {
        public event EventHandler OnInitializationComplete;

        public event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;

        public InitializationState InitializationState => InitializationState.Uninitialized;

        public void Initialize(string gameId, string installId) {}
    }
}
#endif
