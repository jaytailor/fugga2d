using System;
using UnityEditor;
using UnityEngine;

namespace Unity.Mediation.Settings.Editor
{
    class UnityAdsSettings : BaseAdapterSettings
    {
        const string k_UnityAdsWarning = "If you have an existing Unity Ads SDK added through the Package manager or " +
            "the Asset Store, this may cause a conflict with Unity Monetization SDK. Please remove " +
            "Unity Ads SDK prior to installing Unity Monetization SDK";

        public override string AdapterId => "unityads-adapter";
        bool? m_UnityAdsDetected;

        public override void OnAdapterSettingsGui(string searchContext)
        {
            if (Enabled.value && IsUnityAdsDetected())
            {
                EditorGUILayout.HelpBox(k_UnityAdsWarning, MessageType.Warning);
            }
        }

        bool IsUnityAdsDetected()
        {
            if (!m_UnityAdsDetected.HasValue)
            {
                try
                {
                    m_UnityAdsDetected = Type.GetType("UnityEngine.Advertisements.Advertisement, UnityEngine.Advertisements") != null;
                }
                catch (Exception e)
                {
                    //TODO: analytics
                    Debug.LogException(e);
                    m_UnityAdsDetected = false;
                }
            }
            return m_UnityAdsDetected.Value;
        }
    }
}
