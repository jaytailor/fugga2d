#if UNITY_ANDROID
using UnityEngine;

namespace Unity.Services.Mediation.Platform
{
    interface IAndroidBannerAdListener
    {
        void onBannerAdViewLoaded(AndroidJavaObject bannerAd);
        void onBannerAdViewFailedLoad(AndroidJavaObject bannerAd, AndroidJavaObject error, string msg);
        void onBannerAdViewClicked(AndroidJavaObject bannerAd);
    }
}
#endif
