using System;
using Unity.Mediation.Platform;

namespace Unity.Mediation
{
    /// <summary>
    /// Mediation api for controlling the Unity Mediation SDK.
    /// </summary>
    public static class UnityMediation
    {
        internal static IUnityMediation UnityMediationImpl;

        static UnityMediation()
        {
#if UNITY_EDITOR
            UnityMediationImpl = new EditorUnityMediation();
#elif UNITY_ANDROID
            UnityMediationImpl = new AndroidUnityMediation();
#elif UNITY_IOS
            UnityMediationImpl = new IosUnityMediation();
#else
            UnityMediationImpl = new UnsupportedUnityMediation();
#endif
        }

        /// <summary>
        /// Event to be triggered when UnityMediation has completed initialization.
        /// </summary>
        public static event EventHandler OnInitializationComplete
        {
            add => UnityMediationImpl.OnInitializationComplete += value;
            remove => UnityMediationImpl.OnInitializationComplete -= value;
        }

        /// <summary>
        /// Event to be triggered when UnityMediation fails to initialize.
        /// </summary>
        public static event EventHandler<InitializationErrorEventArgs> OnInitializationFailed
        {
            add => UnityMediationImpl.OnInitializationFailed += value;
            remove => UnityMediationImpl.OnInitializationFailed -= value;
        }

        /// <summary>
        /// Getter for the current initialization state of the mediation sdk.
        /// </summary>
        public static InitializationState InitializationState => UnityMediationImpl.InitializationState;

        /// <summary>
        /// Mediation api for Initializing the Unity Mediation SDK.
        /// </summary>
        /// <param name="gameId">Unique ID generated for your game/app.</param>
        public static void Initialize(string gameId) => UnityMediationImpl.Initialize(gameId);
    }
}
