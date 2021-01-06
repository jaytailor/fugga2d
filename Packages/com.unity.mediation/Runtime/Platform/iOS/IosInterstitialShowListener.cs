#if UNITY_IOS
using System;
using System.Runtime.InteropServices;
using AOT;

namespace Unity.Mediation.Platform
{
    class IosInterstitialShowListener : IosNativeObject
    {
        delegate void StartedCallback(IntPtr interstitialAd);
        delegate void ClickedCallback(IntPtr interstitialAd);
        delegate void FinishedCallback(IntPtr interstitialAd);
        delegate void FailedShowCallback(IntPtr interstitialAd, int error, string message);

        public IosInterstitialShowListener() : base(false)
        {
            NativePtr = InterstitialAdShowListenerCreate(Started, Clicked, Finished, FailedShow);
        }

        public override void Dispose()
        {
            if (NativePtr == IntPtr.Zero) return;
            InterstitialAdShowListenerDestroy(NativePtr);
            NativePtr = IntPtr.Zero;
        }

        [DllImport("__Internal", EntryPoint = "UMSPInterstitialAdShowListenerCreate")]
        static extern IntPtr InterstitialAdShowListenerCreate(StartedCallback startedCallback, ClickedCallback clickedCallback,
            FinishedCallback finishedCallback, FailedShowCallback failedShowCallback);

        [DllImport("__Internal", EntryPoint = "UMSPInterstitialAdShowListenerDestroy")]
        static extern void InterstitialAdShowListenerDestroy(IntPtr ptr);

        [MonoPInvokeCallback(typeof(StartedCallback))]
        static void Started(IntPtr ptr)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeStartedEvent();
        }

        [MonoPInvokeCallback(typeof(ClickedCallback))]
        static void Clicked(IntPtr ptr)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeClickedEvent();
        }

        [MonoPInvokeCallback(typeof(FinishedCallback))]
        static void Finished(IntPtr ptr)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeFinishedEvent();
        }

        [MonoPInvokeCallback(typeof(FailedShowCallback))]
        static void FailedShow(IntPtr ptr, int error, string message)
        {
            var interstitialAd = Get<IosInterstitialAd>(ptr);
            interstitialAd?.InvokeFailedShowEvent(new ShowErrorEventArgs((ShowError)error, message));
        }
    }
}
#endif
