using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Services.Mediation.Dashboard.Editor;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;


namespace Unity.Services.Mediation.Settings.Editor
{
    /// <summary>
    /// Window allowing to generate sample code with a given Adapter / Ad Unit Id
    /// to help the user implement a basic Ad Display functionality
    /// </summary>
    class MediationCodeGeneratorWindow : EditorWindow
    {
#if GAMEGROWTH_UNITY_MONETIZATION
        const string k_CodeGeneratorWindowTemplate = @"Assets/UnityMonetization/Editor/Settings/Layout/CodeGenerationWindowTemplate.uxml";

        const string k_SettingsStyle               = @"Assets/UnityMonetization/Editor/Settings/Layout/SettingsStyle.uss";
        const string k_CodeGeneratorStyle          = @"Assets/UnityMonetization/Editor/Settings/Layout/CodeGeneratorStyle.uss";
#else
        const string k_CodeGeneratorWindowTemplate = @"Packages/com.unity.services.mediation/Editor/Settings/Layout/CodeGenerationWindowTemplate.uxml";

        const string k_SettingsStyle               = @"Packages/com.unity.services.mediation/Editor/Settings/Layout/SettingsStyle.uss";
        const string k_CodeGeneratorStyle          = @"Packages/com.unity.services.mediation/Editor/Settings/Layout/CodeGeneratorStyle.uss";
#endif
        const string k_GeneratedCodeTemplate  =
@"using System;
using Unity.Services.Core;
using Unity.Services.Mediation;
using UnityEngine;

namespace Unity.Example
{
    public class MyAdExampleClass
    {
        I{adType} ad;
        string adUnitId = ""{adUnitId}"";

        public async void InitServices()
        {
            try
            {
                await UnityServices.InitializeAsync();
                InitializationComplete();
            }
            catch (Exception e)
            {
                InitializationFailed(e);
            }
        }

        public void SetupAd()
        {
            //Create
            ad = MediationService.Instance.Create{adType}(adUnitId);

            //Subscribe to events
            ad.OnLoaded += AdLoaded;
            ad.OnFailedLoad += AdFailedLoad;

            ad.OnShowed += AdShown;
            ad.OnFailedShow += AdFailedShow;

            {rewardedCallback}

            // Impression Event
            MediationService.Instance.ImpressionEventPublisher.OnImpression += ImpressionEvent;
        }

        public void ShowAd()
        {
            if (ad.AdState == AdState.Loaded)
            {
                ad.Show();
            }
        }

        void InitializationComplete()
        {
            SetupAd();
            ad.Load();
        }

        void InitializationFailed(Exception e)
        {
            Debug.Log(""Initialization Failed: "" + e.Message);
        }

        void AdLoaded(object sender, EventArgs sargs)
        {
            Debug.Log(""Ad loaded"");
        }

        void AdFailedLoad(object sender, LoadErrorEventArgs args)
        {
            Debug.Log(""Failed to load ad"");
            Debug.Log(args.Message);
        }

        void AdShown(object sender, EventArgs args)
        {
            //pre-load the next ad
            ad.Load();
            Debug.Log(""Ad shown!"");
        }

        void AdFailedShow(object sender, ShowErrorEventArgs args)
        {
            Debug.Log(args.Message);
        }

        void ImpressionEvent(object sender, ImpressionEventArgs args)
        {
            var impressionData = args.ImpressionData != null ? JsonUtility.ToJson(args.ImpressionData, true) : ""null"";
            Debug.Log(""Impression event from ad unit id "" + args.AdUnitId + "" "" + impressionData);
        }

        {rewardedFunction}
    }
}
";
        const string k_OnRewardedTemplate =
@"
void OnUserRewarded(object sender, RewardEventArgs e)
{
    Debug.Log($""Received reward: type:{e.Type}; amount:{e.Amount}"");
}
";

        const string k_LoadingText = "Loading...";
        const string k_ErrorText = "Error loading window. See console for details.";
        const string k_ErrorTextNoAds = "Error loading window. No Ad units were found.";


#if UNITY_2020_1_OR_NEWER
        const string k_ServiceBaseStyle    = @"StyleSheets/ServicesWindow/ServicesProjectSettingsCommon.uss";
        static readonly string k_SkinStyle = @"StyleSheets/ServicesWindow/ServicesProjectSettings{0}.uss";
#else
    #if GAMEGROWTH_UNITY_MONETIZATION
        const string k_ServiceBaseStyle    = @"Assets/UnityMonetization/Editor/Settings/Layout/2019/BaseStyle.uss";
        static readonly string k_SkinStyle = @"Assets/UnityMonetization/Editor/Settings/Layout/2019/SkinStyle{0}.uss";
    #else
        const string k_ServiceBaseStyle    = @"Packages/com.unity.services.mediation/Editor/Settings/Layout/2019/BaseStyle.uss";
        static readonly string k_SkinStyle = @"Packages/com.unity.services.mediation/Editor/Settings/Layout/2019/SkinStyle{0}.uss";
    #endif
#endif

        Dictionary<(string, string), List<(string, string)>> m_AdUnitsPerGameId;
        VisualElement m_GameIdsDropdown;
        VisualElement m_AdUnitsDropdown;
        PopupField<(string, string)> m_GameIdsDropdownContent;
        PopupField<(string, string)> m_AdUnitsDropdownContent;
        TextField     m_CodeGenField;

        [MenuItem("Services/Mediation/Code Generator", priority = 112)]
        public static void ShowWindow()
        {
            GetWindow<MediationCodeGeneratorWindow>("Mediation - Code Generator", new Type[] { typeof(MediationAdUnitsWindow), typeof(SceneView), typeof(EditorWindow)});
        }

        void OnFocus()
        {
            // Refresh the window anytime it becomes in focus, fetching the latest ad units if the window was previously
            // loaded or loading the window normally otherwise.
            if (string.IsNullOrEmpty(m_CodeGenField?.value))
            {
                RefreshWindow();
            }
            else
            {
                PopulateGameIds();
            }
        }

        void RefreshWindow()
        {
            var skinTheme = EditorGUIUtility.isProSkin ? "Dark" : "Light";

            var styleSheets = new string[]
            {
                k_CodeGeneratorStyle,
                k_SettingsStyle,
                k_ServiceBaseStyle,
                string.Format(k_SkinStyle, skinTheme)
            };

            rootVisualElement.Clear();

            VisualTreeAsset codeGeneratorWindowTemplate = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_CodeGeneratorWindowTemplate);
            codeGeneratorWindowTemplate.CloneTree(rootVisualElement);

            foreach (var styleSheet in styleSheets)
            {
                var sheet = EditorGUIUtility.Load(styleSheet) as StyleSheet;
                rootVisualElement.styleSheets.Add(sheet);
            }

            m_CodeGenField = rootVisualElement.Q<TextField>("codeGenField");
            m_CodeGenField.isReadOnly = true;
            m_CodeGenField.value = k_LoadingText;

            rootVisualElement.Q<Button>("copyToClipboard").clickable.clicked += CopyToClipboard;
            rootVisualElement.Q<Button>("goToAdUnits").clickable.clicked += GoToAdUnits;

            PopulateGameIds();
        }

        void CopyToClipboard()
        {
            GUIUtility.systemCopyBuffer = m_CodeGenField.text;
            Debug.Log("Code Snippet copied to clipboard.");
        }

        void GoToAdUnits()
        {
            MediationAdUnitsWindow.ShowWindow();
        }

        void PopulateGameIds()
        {
            DashboardClient.GetAdUnitsAsync(adUnits =>
            {
                if (adUnits == null)
                {
                    // Project is not linked, no internet connexion or other issue; we could not retrieve the ad units
                    m_CodeGenField.value = k_ErrorText;
                    return;
                }

                if (adUnits.Length == 0)
                {
                    m_CodeGenField.value = k_ErrorTextNoAds;
                    return;
                }

                m_AdUnitsPerGameId = new Dictionary<(string, string), List<(string, string)>>();

                foreach (var adUnit in adUnits)
                {
                    //Do not consider archived ad units
                    if (adUnit.IsArchived) continue;

                    if (!m_AdUnitsPerGameId.ContainsKey((adUnit.Platform, adUnit.AppId)))
                    {
                        m_AdUnitsPerGameId.Add((adUnit.Platform, adUnit.AppId), new List<(string, string)>());
                    }

                    m_AdUnitsPerGameId[(adUnit.Platform, adUnit.AppId)].Add((adUnit.AdFormat, adUnit.AdUnitId));
                }

                foreach (var adUnitsList in m_AdUnitsPerGameId.Values)
                {
                    adUnitsList.Sort();
                }


                m_AdUnitsDropdown = rootVisualElement.Q<VisualElement>("adUnitDropdown");

                var selectedGameId = m_GameIdsDropdownContent?.value ?? ("", "");

                m_GameIdsDropdownContent = new PopupField<(string, string)>(m_AdUnitsPerGameId.Keys.ToList(), 0);
                m_GameIdsDropdown = rootVisualElement.Q<VisualElement>("gameIdDropdown");
                m_GameIdsDropdown.Clear();
                m_GameIdsDropdown.Add(m_GameIdsDropdownContent);
                m_GameIdsDropdown.RegisterCallback<ChangeEvent<(string, string)>>(evt =>
                {
                    PopulateAdUnits(evt.newValue);
                });

                if (m_AdUnitsPerGameId.Keys.Contains(selectedGameId))
                {
                    m_GameIdsDropdownContent.SetValueWithoutNotify(selectedGameId);
                }

                PopulateAdUnits(m_GameIdsDropdownContent.value);
            });
        }

        void PopulateAdUnits((string, string) selectedGameId)
        {
            var selectedAdUnit = m_AdUnitsDropdownContent?.value ?? ("", "");

            m_AdUnitsDropdownContent = new PopupField<(string, string)>(m_AdUnitsPerGameId[selectedGameId].ToList(), 0);
            m_AdUnitsDropdown.Clear();
            m_AdUnitsDropdown.Add(m_AdUnitsDropdownContent);
            m_AdUnitsDropdown.RegisterCallback<ChangeEvent<(string, string)>>(evt =>
            {
                RefreshCode();
            });

            if (m_AdUnitsPerGameId[selectedGameId].Contains(selectedAdUnit))
            {
                m_AdUnitsDropdownContent.SetValueWithoutNotify(selectedAdUnit);
            }

            RefreshCode();
        }

        void RefreshCode()
        {
            var gameId = m_GameIdsDropdownContent.value.Item2;
            var adUnitId = m_AdUnitsDropdownContent.value.Item2;

            var formattedAdType = m_AdUnitsDropdownContent.value.Item1[0] +
                m_AdUnitsDropdownContent.value.Item1.Substring(1).ToLower()
                + "Ad";

            var rewardedCallback = "";
            var rewardedFunction = "";
            if (formattedAdType == "RewardedAd")
            {
                rewardedCallback = "ad.OnUserRewarded += OnUserRewarded;";
                rewardedFunction = k_OnRewardedTemplate;
            }

            var codeString = k_GeneratedCodeTemplate
                .Replace("{adUnitId}", adUnitId)
                .Replace("{adType}", formattedAdType)
                .Replace("{rewardedCallback}", rewardedCallback)
                .Replace("{rewardedFunction}", rewardedFunction);
            m_CodeGenField.value = codeString;
        }
    }
}
