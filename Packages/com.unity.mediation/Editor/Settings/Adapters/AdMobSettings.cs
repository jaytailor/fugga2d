using UnityEditor;
using UnityEditor.SettingsManagement;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.UIElements;
using UnityEngine.UIElements;


namespace Unity.Mediation.Settings.Editor
{
    class AdMobSettings : BaseAdapterSettings
    {
        const string k_AdapterTemplate = @"Packages/com.unity.mediation/Editor/Settings/Adapters/Layout/AdMobTemplate.uxml";

        public override string AdapterId => "admob-adapter";

        public string AdMobAppIdAndroid
        {
            get => m_AdMobAppIdAndroid.value;
            set => m_AdMobAppIdAndroid.value = value;
        }

        public string AdMobAppIdIos
        {
            get => m_AdMobAppIdIos.value;
            set => m_AdMobAppIdIos.value = value;
        }

        internal ReloadableUserSetting<string> m_AdMobAppIdAndroid;
        internal ReloadableUserSetting<string> m_AdMobAppIdIos;

        public AdMobSettings()
        {
            m_AdMobAppIdAndroid = new ReloadableUserSetting<string>(MediationSettingsProvider.instance,
                $"{AdapterId}.app-id.android", "");
            m_AdMobAppIdIos = new ReloadableUserSetting<string>(MediationSettingsProvider.instance,
                $"{AdapterId}.app-id.ios", "");
        }

        public override void OnAdapterSettingsGui(string searchContext, VisualElement rootElement)
        {
            VisualTreeAsset adapterTemplate  = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_AdapterTemplate);
            adapterTemplate.CloneTree(rootElement);

            rootElement.Q<TextField>("AndroidAdmobID").value = m_AdMobAppIdAndroid.value;
            rootElement.Q<TextField>("IosAdmobID").value = m_AdMobAppIdIos.value;
        }

        public override void Dispose()
        {
            base.Dispose();
            m_AdMobAppIdAndroid.Dispose();
            m_AdMobAppIdIos.Dispose();
        }
    }
}
