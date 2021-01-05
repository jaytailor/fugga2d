using UnityEditor;
using UnityEditor.SettingsManagement;
using UnityEngine;

namespace Unity.Mediation.Settings.Editor
{
    class AdMobSettings : BaseAdapterSettings
    {
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

        public override void OnAdapterSettingsGui(string searchContext)
        {
            const string label = "AdMob Application Identifier";
            if (!SettingsGUILayoutEx.MatchSearchGroups(searchContext, label))
                return;
            EditorGUILayout.LabelField(label);
            EditorGUI.indentLevel++;
            m_AdMobAppIdAndroid.value = SettingsGUILayout.SettingsTextField("Android", m_AdMobAppIdAndroid, searchContext);
            m_AdMobAppIdIos.value = SettingsGUILayout.SettingsTextField("iOS", m_AdMobAppIdIos, searchContext);
            if (GUI.enabled && (string.IsNullOrWhiteSpace(m_AdMobAppIdAndroid.value) || string.IsNullOrWhiteSpace(m_AdMobAppIdIos.value)))
            {
                EditorGUILayout.HelpBox("Application identifier is required to use AdMob adapter", MessageType.Warning);
            }
            EditorGUI.indentLevel--;
        }

        public override void Dispose()
        {
            base.Dispose();
            m_AdMobAppIdAndroid.Dispose();
            m_AdMobAppIdIos.Dispose();
        }
    }
}
