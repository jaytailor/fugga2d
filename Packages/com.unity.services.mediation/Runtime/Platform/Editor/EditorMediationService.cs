#if UNITY_EDITOR
using System;
using UnityEngine;

namespace Unity.Services.Mediation.Platform
{
    class EditorMediationService : IPlatformMediationService
    {
#pragma warning disable 67
        public event EventHandler OnInitializationComplete;

        public event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;
#pragma warning restore 67

        public InitializationState InitializationState { get; private set; } = InitializationState.Uninitialized;

        public EditorMediationService()
        {
            OnInitializationComplete += (sender, args) => Debug.Log($"<b>Unity Mediation:</b> <color=green>Mediation Initialized</color>");
            OnInitializationFailed += (sender, args) => Debug.LogError($"<b>Unity Mediation:</b> <color=red>Mediation Initialization Failed:</color> {args.Message}");
        }

        public void Initialize(string gameId, string installId)
        {
            if (!string.IsNullOrEmpty(gameId))
            {
                InitializationState = InitializationState.Initialized;
                OnInitializationComplete?.Invoke(null, EventArgs.Empty);
            }
            else
            {
                InitializationState = InitializationState.Uninitialized;
                OnInitializationFailed?.Invoke(null, new InitializationErrorEventArgs(SdkInitializationError.Unknown, "Game Id was Empty."));
            }
        }
    }
}
#endif
