using System;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;
using UnityEditor.UIElements;
using UnityEngine.UIElements;

namespace Unity.Mediation.Settings.Editor
{
    class UnityAdsSettings : BaseAdapterSettings
    {
        const string k_AdapterTemplate = @"Packages/com.unity.mediation/Editor/Settings/Adapters/Layout/UnityAdsTemplate.uxml";

        public override string AdapterId => "unityads-adapter";
        bool? m_UnityAdsDetected;

        public override void OnAdapterSettingsGui(string searchContext, VisualElement rootElement)
        {
            if (IsUnityAdsDetected())
            {
                VisualTreeAsset adapterTemplate  = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_AdapterTemplate);
                VisualElement holder = new VisualElement();

                adapterTemplate.CloneTree(rootElement);
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
