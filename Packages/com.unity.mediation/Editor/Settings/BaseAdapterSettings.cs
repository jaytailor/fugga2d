using UnityEditor.SettingsManagement;
using UnityEngine;

namespace Unity.Mediation.Settings.Editor
{
    abstract class BaseAdapterSettings : IAdapterSettings
    {
        protected BaseAdapterSettings(string adapterId, bool enabled = false)
        {
            Initialize(adapterId, enabled);
        }

        protected BaseAdapterSettings()
        {
            Initialize(AdapterId);
        }

        void Initialize(string adapterId, bool enabled = false)
        {
            Enabled = new ReloadableUserSetting<bool>(MediationSettingsProvider.instance, $"{adapterId}.enabled", enabled);
            InstalledVersion = new ReloadableUserSetting<string>(MediationSettingsProvider.instance, $"{adapterId}.version", "");
        }

        public ReloadableUserSetting<bool> Enabled { get; private set; }
        public ReloadableUserSetting<string> InstalledVersion { get; private set; }
        public abstract string AdapterId { get; }
        public virtual void OnAdapterSettingsGui(string searchContext) {}

        public void Save()
        {
            MediationSettingsProvider.instance.Save();
        }

        public virtual void Dispose()
        {
            Enabled.Dispose();
            InstalledVersion.Dispose();
        }
    }
}
