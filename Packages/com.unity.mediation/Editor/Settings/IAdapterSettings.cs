using System;
using UnityEditor.SettingsManagement;
using UnityEditor.UIElements;
using UnityEngine.UIElements;


namespace Unity.Mediation.Settings.Editor
{
    interface IAdapterSettings : IDisposable
    {
        string AdapterId { get; }

        ReloadableUserSetting<string> InstalledVersion { get; }

        void OnAdapterSettingsGui(string searchContext, VisualElement root);
    }
}
