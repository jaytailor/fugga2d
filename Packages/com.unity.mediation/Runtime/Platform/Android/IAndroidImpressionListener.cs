#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IAndroidImpressionListener
    {
        void onImpression(string adUnitId, AndroidJavaObject impressionData);
    }
}
#endif
