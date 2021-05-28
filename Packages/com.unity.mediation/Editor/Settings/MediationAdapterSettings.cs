using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Mediation.Adapters.Editor;
using UnityEditor;
using UnityEditor.SettingsManagement;
using UnityEngine;
using UnityEditor.UIElements;
using UnityEngine.UIElements;
using PopupWindow = UnityEngine.UIElements.PopupWindow;
using UnityEngine.PlayerLoop;


namespace Unity.Mediation.Settings.Editor
{
    class MediationAdapterSettings : EditorWindow
    {
        const string k_DashboardUrl     = @"https://dashboard.unity3d.com/monetization";
        const string k_DocumentationUrl = @"https://docs.unity3d.com/2020.2/Documentation/Manual/";
        const string k_Install          = "Install";
        const string k_Update           = "Update";
        const string k_InstallAndUpdate = "Install and Update";
        const string k_UninstallVersion = "Uninstall";
        const string k_UpdateToVersion  = "Update to ";
        const string k_ApiRangeTooltip  = "This adapter supports API versions: \n" + "Android: {0} to {1} \n" + "iOS: {2} to {3}";

        const string k_SettingsStyle       = @"Packages/com.unity.mediation/Editor/Settings/Layout/SettingsStyle.uss";


        const string k_SettingsTemplate    = @"Packages/com.unity.mediation/Editor/Settings/Layout/SettingsTemplate.uxml";
        const string k_AdapterTemplate     = @"Packages/com.unity.mediation/Editor/Settings/Layout/AdapterTemplate.uxml";


#if UNITY_2020_1_OR_NEWER
        const string k_ServiceBaseStyle    = @"StyleSheets/ServicesWindow/ServicesProjectSettingsCommon.uss";
        static readonly string k_SkinStyle = $@"StyleSheets/ServicesWindow/ServicesProjectSettings{(EditorGUIUtility.isProSkin ? "Dark" : "Light")}.uss";
#else
        const string k_ServiceBaseStyle    = @"Packages/com.unity.mediation/Editor/Settings/Layout/2019/BaseStyle.uss";
        static readonly string k_SkinStyle = $@"Packages/com.unity.mediation/Editor/Settings/Layout/2019/SkinStyle{(EditorGUIUtility.isProSkin ? "Dark" : "Light")}.uss";
#endif


        static Dictionary<string, AdapterInfo> s_AdapterInfos;
        static Dictionary<string, VisualElement> s_AdapterVersionDropdownContainer;
        static Dictionary<string, PopupField<VersionInfoDropdownDisplay>> s_AdapterVersionDropdown;
        static Dictionary<string, Toggle> s_AdapterSelectToggle;
        static Dictionary<string, VisualElement> s_AdapterInstalledInfo;
        static Dictionary<string, TextElement> s_AdapterInstalledText;
        static Dictionary<string, Image> s_AdapterPackageInfoIcon;
        static Dictionary<string, Image> s_AdapterOptionsMenu;
        static List<IAdapterSettings> s_AdapterSettings;
        static Button s_InstallButton;
        static bool s_Initialized;
        static bool s_SettingsChanged;

        [InitializeOnLoadMethod]
        static void Initialize()
        {
            if (s_Initialized) return;
            s_Initialized = true;

            var adapters        = MediationSdkInfo.GetAllAdapters();
            s_AdapterInfos                    = adapters.ToDictionary(info => info.Identifier);
            s_AdapterSettings                 = FindAdapterSettings(adapters);
            s_AdapterVersionDropdownContainer = new Dictionary<string, VisualElement>();
            s_AdapterVersionDropdown          = new Dictionary<string, PopupField<VersionInfoDropdownDisplay>>();
            s_AdapterSelectToggle             = new Dictionary<string, Toggle>();
            s_AdapterInstalledInfo            = new Dictionary<string, VisualElement>();
            s_AdapterInstalledText            = new Dictionary<string, TextElement>();
            s_AdapterPackageInfoIcon          = new Dictionary<string, Image>();
            s_AdapterOptionsMenu              = new Dictionary<string, Image>();
            MediationSdkInfo.AdaptersChanged += Refresh;
        }

        /// <summary>
        /// Refreshes the list of available adapters, installed adapters and installed versions
        /// Called on MediationSDKInfo.AdaptersChanged
        /// </summary>
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

                if (isInstalled)
                {
                    if (adapterInfo.InstalledVersion.Identifier != adapterSetting.InstalledVersion.value)
                    {
                        adapterSetting.InstalledVersion.value = adapterInfo.InstalledVersion.Identifier;
                        changed = true;
                    }
                }
                else
                {
                    if (adapterSetting.InstalledVersion.value != "")
                    {
                        changed = true;
                        adapterSetting.InstalledVersion.value = "";
                    }
                }
            }

            if (changed)
                MediationSettingsProvider.instance.Save();

            RefreshAdaptersData();
            RefreshInstallButton();
        }

        [MenuItem("Services/Mediation/Settings")]
        public static void ShowWindow()
        {
            SettingsService.OpenProjectSettings("Project/Services/Mediation");
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
                return i1 - i2;
            });

            return instances;
        }

        public static void GenerateUIElementUI(string searchContext, VisualElement rootElement)
        {
            VisualTreeAsset settingsTemplate = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_SettingsTemplate);
            VisualTreeAsset adapterTemplate  = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_AdapterTemplate);

            var stylesheet = AssetDatabase.LoadAssetAtPath<StyleSheet>(k_SettingsStyle);
            rootElement.styleSheets.Add(stylesheet);

            stylesheet = EditorGUIUtility.Load(k_ServiceBaseStyle) as StyleSheet;
            rootElement.styleSheets.Add(stylesheet);

            stylesheet = EditorGUIUtility.Load(k_SkinStyle) as StyleSheet;
            rootElement.styleSheets.Add(stylesheet);

            settingsTemplate.CloneTree(rootElement);

            rootElement.Q<Label>("packageVersion").text = MediationSdkInfo.GetSdkInfo().SdkVersion;

            rootElement.Q<Button>("DoUpdate").clickable.clicked += UpdateAdapters;

            rootElement.Q<Button>("GoToAdUnits").clickable.clicked += () => { MediationAdUnitsWindow.ShowWindow(); };
            rootElement.Q<Button>("GoToCodeGenerator").clickable.clicked += () => { MediationCodeGeneratorWindow.ShowWindow(); };

            s_InstallButton = rootElement.Q<Button>("DoUpdate");

            //Clear references to graphic elements as they will be generated here.
            s_AdapterVersionDropdownContainer.Clear();
            s_AdapterSelectToggle.Clear();
            s_AdapterInstalledInfo.Clear();
            s_AdapterInstalledText.Clear();
            s_AdapterPackageInfoIcon.Clear();
            s_AdapterOptionsMenu.Clear();

            // Fill the adapters list
            var adapterListRoot = rootElement.Q<VisualElement>("AdapterList");

            foreach (var adapterSetting in s_AdapterSettings)
            {
                var adapterInfo = s_AdapterInfos[adapterSetting.AdapterId];

                var adapter = new VisualElement();

                adapterTemplate.CloneTree(adapter);
                adapter.Q<TextElement>("AdapterName").text = adapterInfo.DisplayName;

                GenericMenu menu = new GenericMenu();
                menu.AddItem(new GUIContent(k_UninstallVersion), false, () => MediationSdkInfo.Uninstall(adapterInfo.Identifier));

                var optionsButton = adapter.Q<Image>("OptionsButton");
                optionsButton.AddManipulator(new Clickable(() =>
                {
                    menu.DropDown(optionsButton.worldBound);
                }));

                var selectToggle = adapter.Q<Toggle>("AdapterSelectToggle");
                selectToggle.RegisterCallback<ChangeEvent<bool>>(evt =>
                {
                    RefreshInstallButton();
                });

                // Keep a reference to the graphic elements we will need to update.
                s_AdapterVersionDropdownContainer.Add(adapterSetting.AdapterId, adapter.Q<VisualElement>("VersionsDropdown"));
                s_AdapterSelectToggle.Add(adapterSetting.AdapterId, selectToggle);
                s_AdapterInstalledInfo.Add(adapterSetting.AdapterId, adapter.Q<VisualElement>("InstalledInfo"));
                s_AdapterInstalledText.Add(adapterSetting.AdapterId, adapter.Q<TextElement>("InstalledVersion"));
                s_AdapterPackageInfoIcon.Add(adapterSetting.AdapterId, adapter.Q<Image>("PackageInfoIcon"));
                s_AdapterOptionsMenu.Add(adapterSetting.AdapterId, optionsButton);

                adapterSetting.OnAdapterSettingsGui(searchContext, adapter.Q<VisualElement>("Adapter"));

                adapterListRoot.Add(adapter);
            }

            RefreshAdaptersData();
            RefreshInstallButton();
        }

        /// <summary>
        /// Refresh the values displayed in the adapters section
        /// </summary>
        static void RefreshAdaptersData()
        {
            s_AdapterVersionDropdown.Clear();

            foreach (var adapterSetting in s_AdapterSettings)
            {
                var adapterInfo = s_AdapterInfos[adapterSetting.AdapterId];
                var isInstalled = !string.IsNullOrEmpty(adapterSetting.InstalledVersion.value);
                var installedVersionInfo = Array.Find(adapterInfo.Versions, x => x.Identifier == adapterSetting.InstalledVersion.value);
                s_AdapterInstalledInfo[adapterSetting.AdapterId].visible   = isInstalled;
                s_AdapterInstalledText[adapterSetting.AdapterId].text = installedVersionInfo?.DisplayName ?? "";
                s_AdapterPackageInfoIcon[adapterSetting.AdapterId].visible = false;

                //Refresh the Adapter version list
                var versionInfoDropdownDisplayList = adapterInfo.Versions.Select(versionInfo => new VersionInfoDropdownDisplay(versionInfo, isInstalled)).ToList();
                versionInfoDropdownDisplayList.ForEach(versionInfoDropdownDisplay => versionInfoDropdownDisplay.NotifyCurrentlyInstalledVersion(adapterSetting.InstalledVersion));

                s_AdapterVersionDropdownContainer[adapterSetting.AdapterId].Clear();

                var versionDropdown = new PopupField<VersionInfoDropdownDisplay>(
                    versionInfoDropdownDisplayList,
                    versionInfoDropdownDisplayList.FirstOrDefault(versionInfoDropdownDisplay => versionInfoDropdownDisplay.VersionInfo.Identifier == adapterSetting.InstalledVersion.value) ?? versionInfoDropdownDisplayList[0]);
                versionDropdown.AddToClassList("adapter-versions-dropdown");
                versionDropdown.RegisterCallback<ChangeEvent<VersionInfoDropdownDisplay>>(evt =>
                {
                    var versionInfo = evt.newValue.VersionInfo;
                    CheckAdapterToggleIfVersionSelectionDifferent(versionInfo, adapterSetting);
                    RefreshInstallButton();
                });
                s_AdapterVersionDropdown[adapterSetting.AdapterId] = versionDropdown;
                s_AdapterVersionDropdownContainer[adapterSetting.AdapterId].Add(versionDropdown);

                // Do not allow uninstalling unity ads
                s_AdapterOptionsMenu[adapterSetting.AdapterId].visible = isInstalled && !(adapterSetting is UnityAdsSettings);
            }
        }

        static void CheckAdapterToggleIfVersionSelectionDifferent(VersionInfo versionInfo, IAdapterSettings adapterSetting)
        {
            var selectedStatus = s_AdapterSelectToggle[adapterSetting.AdapterId].value;

            if (selectedStatus)
            {
                return;
            }

            if (versionInfo.Identifier != adapterSetting.InstalledVersion.value)
            {
                s_AdapterSelectToggle[adapterSetting.AdapterId].value = true;
            }
        }

        /// <summary>
        /// Sets the appropriate text on the Install button ie Install, Update, or Install and Update
        /// </summary>
        static void RefreshInstallButton()
        {
            bool install = false;
            bool update  = false;

            foreach (var adapterSetting in s_AdapterSettings)
            {
                var selectedVersion = s_AdapterVersionDropdown[adapterSetting.AdapterId].value;
                var selectedStatus = s_AdapterSelectToggle[adapterSetting.AdapterId].value;
                var isInstalled = !string.IsNullOrEmpty(adapterSetting.InstalledVersion.value);

                if (selectedStatus)
                {
                    if (!isInstalled)
                    {
                        install = true;
                    }
                    else if (selectedVersion.VersionInfo.Identifier != adapterSetting.InstalledVersion.value)
                    {
                        update = true;
                    }
                }
            }

            if (install)
            {
                if (update)
                {
                    s_InstallButton.text = k_InstallAndUpdate;
                }
                else
                {
                    s_InstallButton.text = k_Install;
                }
            }
            else if (update)
            {
                s_InstallButton.text = k_Update;
            }

            s_InstallButton.SetEnabled(install || update);
        }

        /// <summary>
        /// Installs/updates to a selected version of the adapter
        /// </summary>
        static void UpdateAdapters()
        {
            var tempUserSelections = new List<(string Adapter, VersionInfo VersionInfo)>();
            s_AdapterSettings.ForEach(adapterSetting =>
            {
                var selectedStatus = s_AdapterSelectToggle[adapterSetting.AdapterId].value;

                // Only install or update if the checkbox is checked
                if (selectedStatus)
                {
                    var adapterInfo = s_AdapterInfos[adapterSetting.AdapterId];
                    var selectedVersion = s_AdapterVersionDropdown[adapterSetting.AdapterId].value;
                    tempUserSelections.Add((adapterInfo.Identifier, selectedVersion.VersionInfo));
                }
            });

            tempUserSelections.ForEach(userSelection =>
            {
                MediationSdkInfo.Install(userSelection.Adapter, userSelection.VersionInfo);
            });
        }
    }
}
