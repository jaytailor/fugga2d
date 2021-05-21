using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Mediation.Dashboard.Editor;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;


namespace Unity.Mediation.Settings.Editor
{
    /// <summary>
    /// Window allowing to generate sample code with a given Adapter / Ad Unit Id
    /// to help the user implement a basic Ad Display functionality
    /// </summary>
    class MediationCodeGeneratorWindow : EditorWindow
    {
        const string k_CodeGeneratorWindowTemplate = @"Packages/com.unity.mediation/Editor/Settings/Layout/CodeGenerationWindowTemplate.uxml";

        const string k_SettingsStyle               = @"Packages/com.unity.mediation/Editor/Settings/Layout/SettingsStyle.uss";
        const string k_CodeGeneratorStyle          = @"Packages/com.unity.mediation/Editor/Settings/Layout/CodeGeneratorStyle.uss";

        const string k_GeneratedCodeTemplate  =
@"{adType} ad;
string gameId = ""{gameId}"";
string adUnitId = ""{adUnitId}"";

public void SetupAd()
{
    // Initialization Events
    UnityMediation.OnInitializationComplete += InitializationComplete;
    UnityMediation.OnInitializationFailed   += InitializationFailed;

    //Create
    ad = new {adType}(adUnitId);

    //Subscribe to events
    ad.OnLoaded += AdLoaded;
    ad.OnFailedLoad += AdFailedLoad;

    ad.OnShowed += AdShown;
    ad.OnFailedShow += AdFailedShow;

    ad.OnUserRewarded += OnUserRewarded;

    // Impression Event
    ImpressionEventPublisher.OnImpression += ImpressionEvent;

    UnityMediation.Initialize(gameId);
}

public void ShowAd()
{
    if (ad.AdState == AdState.Loaded)
    {
        ad.Show();
    }
}

void InitializationComplete(object sender, EventArgs args)
{
    UnityMediation.OnInitializationComplete -= InitializationComplete;
    ad.Load();
}

void InitializationFailed(object sender, EventArgs args)
{
    Debug.Log(""Initialization Failed"");
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
    Debug.Log(""Impression event from ad unit id "" + (args.AdUnitId : impressionData));
}";

#if UNITY_2020_1_OR_NEWER
        const string k_ServiceBaseStyle    = @"StyleSheets/ServicesWindow/ServicesProjectSettingsCommon.uss";
        static readonly string k_SkinStyle = @"StyleSheets/ServicesWindow/ServicesProjectSettings{0}.uss";
#else
        const string k_ServiceBaseStyle    = @"Packages/com.unity.mediation/Editor/Settings/Layout/2019/BaseStyle.uss";
        static readonly string k_SkinStyle = @"Packages/com.unity.mediation/Editor/Settings/Layout/2019/SkinStyle{0}.uss";
#endif

        Dictionary<(string, string), List<(string, string)>> m_AdUnitsPerGameId;
        VisualElement m_GameIdsDropdown;
        VisualElement m_AdUnitsDropdown;
        PopupField<(string, string)> m_GameIdsDropdownContent;
        PopupField<(string, string)> m_AdUnitsDropdownContent;
        TextField     m_CodeGenField;

        [MenuItem("Services/Mediation/Code Generator")]
        public static void ShowWindow()
        {
            GetWindow<MediationCodeGeneratorWindow>("Mediation - Code Generator", new Type[] { typeof(MediationAdUnitsWindow), typeof(SceneView), typeof(EditorWindow)});
        }

        void OnEnable()
        {
        }

        void OnBecameVisible()
        {
            // Refresh the window anytime it becomes visible, fetching the latest adunits
            RefreshWindow();
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

            rootVisualElement.Q<Button>("copyToClipboard").clicked += CopyToClipboard;
            rootVisualElement.Q<Button>("goToAdUnits").clicked += GoToAdUnits;

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

                m_GameIdsDropdownContent = new PopupField<(string, string)>(m_AdUnitsPerGameId.Keys.ToList(), 0);
                m_GameIdsDropdown = rootVisualElement.Q<VisualElement>("gameIdDropdown");
                m_GameIdsDropdown.Clear();
                m_GameIdsDropdown.Add(m_GameIdsDropdownContent);
                m_GameIdsDropdown.RegisterCallback<ChangeEvent<(string, string)>>(evt =>
                {
                    PopulateAdUnits(evt.newValue);
                });
                PopulateAdUnits(m_AdUnitsPerGameId.Keys.FirstOrDefault());
            });
        }

        void PopulateAdUnits((string, string) selectedGameId)
        {
            m_AdUnitsDropdownContent = new PopupField<(string, string)>(m_AdUnitsPerGameId[selectedGameId].ToList(), 0);
            m_AdUnitsDropdown.Clear();
            m_AdUnitsDropdown.Add(m_AdUnitsDropdownContent);
            m_AdUnitsDropdown.RegisterCallback<ChangeEvent<(string, string)>>(evt =>
            {
                RefreshCode();
            });
            RefreshCode();
        }

        void RefreshCode()
        {
            var gameId = m_GameIdsDropdownContent.value.Item2;
            var adUnitId = m_AdUnitsDropdownContent.value.Item2;

            var formattedAdType = m_AdUnitsDropdownContent.value.Item1[0] +
                m_AdUnitsDropdownContent.value.Item1.Substring(1).ToLower()
                + "Ad";

            var codeString = k_GeneratedCodeTemplate
                .Replace("{gameId}", gameId)
                .Replace("{adUnitId}", adUnitId)
                .Replace("{adType}", formattedAdType);
            m_CodeGenField.value = codeString;
        }
    }
}
