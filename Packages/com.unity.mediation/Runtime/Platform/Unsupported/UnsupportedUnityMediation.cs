#if !UNITY_ANDROID && !UNITY_IOS && !UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class UnsupportedUnityMediation : IUnityMediation
    {
        public event EventHandler OnInitializationComplete;

        public event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;

        public InitializationState InitializationState => InitializationState.Uninitialized;

        public void Initialize(string gameId) {}
    }
}
#endif
