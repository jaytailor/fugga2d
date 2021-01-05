#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    static class AndroidJavaObjectExtensions
    {
        public static T ToEnum<T>(this AndroidJavaObject androidEnum) where T : Enum
        {
            return (T)(ValueType)androidEnum.Call<int>("getValue");
        }
    }
}
#endif
