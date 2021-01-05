#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    class AndroidImpressionListener : AndroidJavaProxy, IAndroidImpressionListener
    {
        IAndroidImpressionListener m_Listener;
        public AndroidImpressionListener(IAndroidImpressionListener listener) : base("com.unity3d.mediation.IImpressionListener")
        {
            m_Listener = listener;
        }

        public void onImpression(string adUnitId, AndroidJavaObject impressionData)
        {
            ThreadUtil.Post(state => m_Listener.onImpression(adUnitId, impressionData));
        }
    }
}
#endif
