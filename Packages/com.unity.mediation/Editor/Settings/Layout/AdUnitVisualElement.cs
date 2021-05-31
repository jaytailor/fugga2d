using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace Unity.Mediation.Settings.Editor.Layout
{
    sealed class AdUnitVisualElement : VisualElement
    {
        const string k_TemplatePath   = @"Packages/com.unity.mediation/Editor/Settings/Layout/AdUnitsListItemTemplate.uxml";
        const string k_StylePath = @"Packages/com.unity.mediation/Editor/Settings/Layout/AdUnitsListItemStyle.uss";

        private static VisualTreeAsset m_Template;
        private static StyleSheet m_StyleSheet;

        internal static void Initialize()
        {
            m_Template = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(k_TemplatePath);
            m_StyleSheet = EditorGUIUtility.Load(k_StylePath) as StyleSheet;
        }

        public static VisualElement CreateListItem()
        {
            AdUnitVisualElement newListItem = new AdUnitVisualElement();

            VisualElement contentContainer = newListItem.contentContainer;

            contentContainer.styleSheets.Add(m_StyleSheet);
            contentContainer.AddToClassList("list-item");

            m_Template.CloneTree(contentContainer);

            contentContainer.Q<Button>("clipboard").clicked += () =>
            {
                Debug.Log($"Copied Ad Unit ID for \"{contentContainer.Q<Label>("ad-unit").text}\"");
                GUIUtility.systemCopyBuffer = contentContainer.Q<Label>("id").text;
            };

            return newListItem;
        }

        public static void BindListItem(VisualElement element, int index)
        {
            string backgroundUssPrefix = EditorGUIUtility.isProSkin ? "pro" : "normal";
            string rowUssPrefix = index % 2 == 0 ? "even" : "odd";
            string rowUssPrefixNot = index % 2 == 1 ? "even" : "odd";
            element.AddToClassList($"{backgroundUssPrefix}-{rowUssPrefix}-background");
            element.RemoveFromClassList($"{backgroundUssPrefix}-{rowUssPrefixNot}-background");


            element.Q<Label>("ad-unit").text = MediationAdUnitsWindow.AdUnitData[index].AdUnit;
            element.Q<Label>("platform").text = MediationAdUnitsWindow.AdUnitData[index].Platform;
            element.Q<Label>("ad-format").text = MediationAdUnitsWindow.AdUnitData[index].AdFormat;
            element.Q<Label>("id").text = MediationAdUnitsWindow.AdUnitData[index].Id;
        }
    }
}
