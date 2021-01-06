using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;
using UnityEditor.SettingsManagement;
using UnityEngine;

namespace Unity.Mediation.Settings.Editor
{
    static class MediationAdapterSettings
    {
        static Dictionary<string, AdapterInfo> s_AdapterInfos;
        static List<IAdapterSettings> s_AdapterSettings;
        static bool s_Initialized;
        static bool s_SettingsChanged;

        [InitializeOnLoadMethod]
        static void Initialize()
        {
            if (s_Initialized) return;
            s_Initialized = true;

            var adapters = MediationSdkInfo.GetAllAdapters();
            s_AdapterInfos = adapters.ToDictionary(info => info.Identifier);
            s_AdapterSettings = FindAdapterSettings(adapters);
            MediationSdkInfo.AdaptersChanged += Refresh;
        }

        static void Refresh()
        {
            Initialize();
            var installedAdapters = MediationSdkInfo.GetInstalledAdapters();
            var changed = false;

            foreach (var adapterSetting in s_AdapterSettings)
            {
                var adapterInfo = installedAdapters
                    .FirstOrDefault(info => info.Identifier == adapterSetting.AdapterId);
                var isInstalled = adapterInfo != null;
                if (isInstalled != adapterSetting.Enabled.value)
                {
                    adapterSetting.Enabled.value = isInstalled;
                    changed = true;
                }

                if (isInstalled)
                {
                    if (adapterInfo.InstalledVersion != adapterSetting.InstalledVersion.value)
                    {
                        adapterSetting.InstalledVersion.value = adapterInfo.InstalledVersion;
                        changed = true;
                    }
                }
            }

            if (changed)
                MediationSettingsProvider.instance.Save();
        }

        public static List<IAdapterSettings> FindAdapterSettings(List<AdapterInfo> adapters)
        {
            var adaptersIds = adapters.Select(info => info.Identifier).ToList();

            // Find all adapters that have a defined settings class
            var definedTypes =  typeof(MediationAdapterSettings).Assembly.GetTypes()
                .Where(type =>
                    typeof(IAdapterSettings).IsAssignableFrom(type) &&
                    !type.IsAbstract &&
                    !typeof(GenericAdapterSettings).IsAssignableFrom(type))
                .ToList();

            // Create instances of the defined settings classes
            var instances = definedTypes
                .Select(type => (IAdapterSettings)Activator.CreateInstance(type))
                .ToList();

            // Any adapter that does not have a defined settings class, will use the generic settings class
            var adapterIdsWithGenericSettings = adaptersIds
                .Where(id => instances.All(settings => settings.AdapterId != id))
                .ToList();

            instances.AddRange(adapterIdsWithGenericSettings.Select(id => new GenericAdapterSettings(id)));

            //Sort based on original order of the adapters
            instances.Sort((settings1, settings2) =>
            {
                var i1 = adaptersIds.IndexOf(settings1.AdapterId);
                var i2 = adaptersIds.IndexOf(settings2.AdapterId);
                return i1 > i2 ? 1 : 0;
            });

            return instances;
        }

        [UserSettingBlock("Adapters")]
        public static void AdapterSettingsGUI(string searchContext)
        {
            EditorGUI.BeginChangeCheck();

            foreach (var adapterSetting in s_AdapterSettings)
            {
                var adapterInfo = s_AdapterInfos[adapterSetting.AdapterId];
                var displayName = adapterInfo.DisplayName;

                EditorGUI.BeginChangeCheck();

                adapterSetting.Enabled.value = SettingsGUILayoutEx.SettingsToggleLeft(displayName, adapterSetting.Enabled, searchContext);

                var enabledState = GUI.enabled;
                GUI.enabled = adapterSetting.Enabled.value;

                if (EditorGUI.EndChangeCheck())
                {
                    if (adapterSetting.Enabled.value)
                    {
                        MediationSdkInfo.Install(adapterInfo.Identifier, adapterSetting.InstalledVersion.value);
                    }
                    else
                    {
                        MediationSdkInfo.Uninstall(adapterInfo.Identifier);
                    }
                }
                using (new SettingsGUILayout.IndentedGroup())
                {
                    EditorGUI.BeginChangeCheck();
                    adapterSetting.InstalledVersion.value = SettingsGUILayoutEx.SettingsPopupString("Version",
                        adapterSetting.InstalledVersion, adapterInfo.Versions, searchContext);
                    if (EditorGUI.EndChangeCheck())
                    {
                        MediationSdkInfo.Install(adapterInfo.Identifier, adapterSetting.InstalledVersion.value);
                    }
                    adapterSetting.OnAdapterSettingsGui(searchContext);
                }
                GUI.enabled = enabledState;
            }

            if (EditorGUI.EndChangeCheck())
            {
                MediationSettingsProvider.instance.Save();
                s_SettingsChanged = true;
            }

            EditorGUILayout.Space();

            var enabled = GUI.enabled;
            GUI.enabled = s_SettingsChanged;

            if (GUILayout.Button("Apply", GUILayout.Width(150f)))
            {
                MediationSdkInfo.Apply(true);
                s_SettingsChanged = false;
            }

            GUI.enabled = enabled;
        }
    }
}
