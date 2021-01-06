#if UNITY_IOS
using System;
using System.Runtime.InteropServices;
using AOT;

namespace Unity.Mediation.Platform
{
    class IosUnityMediation : IUnityMediation
    {
        static IosUnityMediation instance;

        delegate void InitializeSuccessCallback();
        delegate void InitializeFailCallback(int error, string message);

        public event EventHandler OnInitializationComplete;
        public event EventHandler<InitializationErrorEventArgs> OnInitializationFailed;

        public InitializationState State => UnityMediationGetInitializationState();

        public void Initialize(string gameId)
        {
            instance = this;
            UnityMediationInitialize(gameId, InitializationSuccess, InitializationFailed);
        }

        [DllImport("__Internal", EntryPoint = "UMSPUnityMediationGetInitializationState")]
        static extern InitializationState UnityMediationGetInitializationState();

        [DllImport("__Internal", EntryPoint = "UMSPUnityMediationInitialize")]
        static extern void UnityMediationInitialize(string gameId, InitializeSuccessCallback successCallback, InitializeFailCallback failCallback);

        [MonoPInvokeCallback(typeof(InitializeSuccessCallback))]
        static void InitializationSuccess()
        {
            ThreadUtil.Post(state => instance.OnInitializationComplete?.Invoke(null, EventArgs.Empty));
        }

        [MonoPInvokeCallback(typeof(InitializeFailCallback))]
        static void InitializationFailed(int error, string message)
        {
            var eventArgs = new InitializationErrorEventArgs((SdkInitializationError)error, message);
            ThreadUtil.Post(state => instance.OnInitializationFailed?.Invoke(null, eventArgs));
        }
    }
}
#endif
