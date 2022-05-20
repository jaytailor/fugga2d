using System;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

namespace Unity.Services.Mediation.Settings.Editor
{
    class SnapSettings : BaseAdapterSettings
    {
        const string k_AdapterTemplate = @"Packages/com.unity.services.mediation/Editor/Settings/Adapters/Layout/SnapTemplate.uxml";
        const string k_EarlyAccessUrl = @"https://create.unity.com/mediation-early-features";
        public override string AdapterId => "snap-adapter";

        public int SnapAppIdIos
        {
            get => m_SnapAppIdIos.value;
            set => m_SnapAppIdIos.value = value;
        }

        internal ReloadableUserSetting<Int32> m_SnapAppIdIos;
        IntegerField m_txtSnapAppIdIos;

        public SnapSettings()
        {
            m_SnapAppIdIos = new ReloadableUserSetting<Int32>(MediationSettingsProvider.instance,
                $"{AdapterId}.app-id.ios", 0);
        }

        public override void OnAdapterSettingsGui(string searchContext, VisualElement rootElement)
        {
            var adapterTemplate  = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_AdapterTemplate);
            var holder = new VisualElement();
            adapterTemplate.CloneTree(rootElement);

            m_txtSnapAppIdIos = rootElement.Q<IntegerField>("IosSnapID");
            m_txtSnapAppIdIos.value = m_SnapAppIdIos.value;
            m_txtSnapAppIdIos.RegisterValueChangedCallback((changeEvent) => SnapAppIdIos = changeEvent.newValue);

            rootElement.Q<VisualElement>("EarlyAccessSnapContainer").AddManipulator(new Clickable(LinkToSourceConfig));
        }

        static void LinkToSourceConfig()
        {
            Application.OpenURL(k_EarlyAccessUrl);
        }
    }
}
