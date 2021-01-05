using System;
using UnityEditor.SettingsManagement;

namespace Unity.Mediation.Settings.Editor
{
    interface IAdapterSettings : IDisposable
    {
        string AdapterId { get; }

        ReloadableUserSetting<bool> Enabled { get; }

        ReloadableUserSetting<string> InstalledVersion { get; }

        void OnAdapterSettingsGui(string searchContext);
    }
}
