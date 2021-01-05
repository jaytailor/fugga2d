#if UNITY_IOS
using System;
using System.Runtime.InteropServices;
using AOT;

namespace Unity.Mediation.Platform
{
    class IosRewardedLoadListener : IosNativeObject
    {
        delegate void LoadSuccessCallback(IntPtr rewardedAd);
        delegate void LoadFailCallback(IntPtr rewardedAd, int error, string message);

        public IosRewardedLoadListener() : base(false)
        {
            NativePtr = RewardedAdLoadListenerCreate(LoadSuccess, LoadFail);
        }

        public override void Dispose()
        {
            if (NativePtr == IntPtr.Zero) return;
            RewardedAdLoadListenerDestroy(NativePtr);
            NativePtr = IntPtr.Zero;
        }

        [DllImport("__Internal", EntryPoint = "UMSPRewardedAdLoadListenerCreate")]
        static extern IntPtr RewardedAdLoadListenerCreate(LoadSuccessCallback loadSuccessCallback, LoadFailCallback loadFailCallback);

        [DllImport("__Internal", EntryPoint = "UMSPRewardedAdLoadListenerDestroy")]
        static extern void RewardedAdLoadListenerDestroy(IntPtr ptr);

        [MonoPInvokeCallback(typeof(LoadSuccessCallback))]
        static void LoadSuccess(IntPtr ptr)
        {
            var rewardedAd = Get<IosRewardedAd>(ptr);
            rewardedAd?.InvokeLoadedEvent();
        }

        [MonoPInvokeCallback(typeof(LoadFailCallback))]
        static void LoadFail(IntPtr ptr, int error, string message)
        {
            var rewardedAd = Get<IosRewardedAd>(ptr);
            rewardedAd?.InvokeFailedLoadEvent(new LoadErrorEventArgs((LoadError)error, message));
        }
    }
}
#endif
