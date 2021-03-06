#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    class AndroidInterstitialAdLoadListener : AndroidJavaProxy, IAndroidInterstitialLoadListener
    {
        IAndroidInterstitialLoadListener m_Listener;
        public AndroidInterstitialAdLoadListener(IAndroidInterstitialLoadListener listener) : base("com.unity3d.mediation.IInterstitialAdLoadListener")
        {
            m_Listener = listener;
        }

        public void onInterstitialLoaded(AndroidJavaObject interstitialAd)
        {
            ThreadUtil.Post(state => m_Listener.onInterstitialLoaded(interstitialAd));
        }

        public void onInterstitialFailedLoad(AndroidJavaObject interstitialAd, AndroidJavaObject error, string msg)
        {
            ThreadUtil.Post(state => m_Listener.onInterstitialFailedLoad(interstitialAd, error, msg));
        }
    }
}
#endif
