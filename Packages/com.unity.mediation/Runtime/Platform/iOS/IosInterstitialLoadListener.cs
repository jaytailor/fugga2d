#if UNITY_IOS
using System;
using System.Runtime.InteropServices;
using AOT;

namespace Unity.Mediation.Platform
{
    class IosInterstitialLoadListener : IosNativeObject
    {
        delegate void LoadSuccessCallback(IntPtr interstitialAd);
        delegate void LoadFailCallback(IntPtr interstitialAd, int error, string message);

        public IosInterstitialLoadListener() : base(false)
        {
            NativePtr = InterstitialAdLoadListenerCreate(LoadSuccess, LoadFail);
        }

        public override void Dispose()
        {
            if (NativePtr == IntPtr.Zero) return;
            InterstitialAdLoadListenerDestroy(NativePtr);
            NativePtr = IntPtr.Zero;
        }

        [DllImport("__Internal", EntryPoint = "UMSPInterstitialAdLoadListenerCreate")]
        static extern IntPtr InterstitialAdLoadListenerCreate(LoadSuccessCallback loadSuccessCallback, LoadFailCallback loadFailCallback);

        [DllImport("__Internal", EntryPoint = "UMSPInterstitialAdLoadListenerDestroy")]
        static extern void InterstitialAdLoadListenerDestroy(IntPtr ptr);

        [MonoPInvokeCallback(typeof(LoadSuccessCallback))]
        static void LoadSuccess(IntPtr ptr)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeLoadedEvent();
        }

        [MonoPInvokeCallback(typeof(LoadFailCallback))]
        static void LoadFail(IntPtr ptr, int error, string message)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeFailedLoadEvent(new LoadErrorEventArgs((LoadError)error, message));
        }
    }
}
#endif