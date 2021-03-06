#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IAndroidInterstitialShowListener
    {
        void onInterstitialShowed(AndroidJavaObject interstitialAd);
        void onInterstitialClicked(AndroidJavaObject interstitialAd);
        void onInterstitialClosed(AndroidJavaObject interstitialAd);
        void onInterstitialFailedShow(AndroidJavaObject interstitialAd, AndroidJavaObject error, string msg);
    }
}
#endif
