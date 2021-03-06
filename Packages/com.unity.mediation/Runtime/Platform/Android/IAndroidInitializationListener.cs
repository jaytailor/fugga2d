#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IAndroidInitializationListener
    {
        void onInitializationComplete();
        void onInitializationFailed(AndroidJavaObject errorCode, string msg);
    }
}
#endif
