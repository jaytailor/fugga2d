#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IAndroidInterstitialLoadListener
    {
        void onInterstitialLoaded(AndroidJavaObject interstitialAd);
        void onInterstitialFailedLoad(AndroidJavaObject interstitialAd, AndroidJavaObject error, string msg);
    }
}
#endif
