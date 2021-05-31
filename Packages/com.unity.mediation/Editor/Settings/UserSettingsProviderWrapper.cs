using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEditor;
using UnityEditor.SettingsManagement;
using UnityEngine.UIElements;

namespace Unity.Mediation.Settings.Editor
{
    class UserSettingsProviderWrapper : SettingsProvider
    {
        UserSettingsProvider m_UserSettingsProvider;

        public UserSettingsProviderWrapper(string path, UnityEditor.SettingsManagement.Settings settings,
                                           Assembly[] assemblies, SettingsScope scopes = SettingsScope.User) : base(path, scopes)
        {
            m_UserSettingsProvider = new UserSettingsProvider(path, settings, assemblies, scopes);
        }

        public override void OnActivate(string searchContext, VisualElement rootElement)
        {
            base.OnActivate(searchContext, rootElement);
            m_UserSettingsProvider.OnActivate(searchContext, rootElement);
        }

        public override void OnDeactivate()
        {
            base.OnDeactivate();
            m_UserSettingsProvider.OnDeactivate();
        }

        public override bool HasSearchInterest(string searchContext)
        {
            return m_UserSettingsProvider.HasSearchInterest(searchContext);
        }

        public override void OnInspectorUpdate()
        {
            m_UserSettingsProvider.OnInspectorUpdate();
        }

        public override void OnGUI(string searchContext)
        {
            m_UserSettingsProvider.OnGUI(searchContext);
        }

        public override void OnFooterBarGUI()
        {
            m_UserSettingsProvider.OnFooterBarGUI();
        }

        public override void OnTitleBarGUI()
        {
            m_UserSettingsProvider.OnTitleBarGUI();
        }
    }
}
