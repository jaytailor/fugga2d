#if UNITY_ANDROID
using UnityEngine;

namespace Unity.Services.Mediation.Platform
{
    class AndroidBannerAdListener : AndroidJavaProxy, IAndroidBannerAdListener
    {
        IAndroidBannerAdListener m_Listener;
        public AndroidBannerAdListener(IAndroidBannerAdListener listener) : base("com.unity3d.mediation.IBannerAdViewListener")
        {
            m_Listener = listener;
        }

        public void onBannerAdViewLoaded(AndroidJavaObject bannerAd)
        {
            ThreadUtil.Post(state => m_Listener.onBannerAdViewLoaded(bannerAd));
        }

        public void onBannerAdViewFailedLoad(AndroidJavaObject bannerAd, AndroidJavaObject error, string msg)
        {
            ThreadUtil.Post(state => m_Listener.onBannerAdViewFailedLoad(bannerAd, error, msg));
        }

        public void onBannerAdViewClicked(AndroidJavaObject bannerAd)
        {
            ThreadUtil.Post(state => m_Listener.onBannerAdViewClicked(bannerAd));
        }
    }
}
#endif
