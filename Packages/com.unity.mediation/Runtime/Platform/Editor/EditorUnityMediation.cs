#if UNITY_EDITOR
using System;

namespace Unity.Mediation.Platform
{
    class EditorUnityMediation : IUnityMediation
    {
#pragma warning disable 67
        public event EventHandler OnInitializationComplete;

        public event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;
#pragma warning restore 67

        public InitializationState InitializationState => InitializationState.Uninitialized;

        public void Initialize(string gameId) {}
    }
}
#endif
