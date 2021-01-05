#if UNITY_ANDROID
using System;
using UnityEngine;

namespace Unity.Mediation.Platform
{
    interface IAndroidRewardedShowListener
    {
        void onRewardedShowed(AndroidJavaObject rewardedAd);
        void onRewardedClicked(AndroidJavaObject rewardedAd);
        void onRewardedClosed(AndroidJavaObject rewardedAd);
        void onRewardedFailedShow(AndroidJavaObject rewardedAd, AndroidJavaObject error, string msg);
        void onUserRewarded(AndroidJavaObject rewardedAd, AndroidJavaObject reward);
    }
}
#endif
