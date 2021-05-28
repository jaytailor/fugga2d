using UnityEditor;
using UnityEditor.SettingsManagement;

namespace Unity.Mediation.Settings.Editor
{
    static class MediationSettingsProvider
    {
        static UnityEditor.SettingsManagement.Settings s_SettingsInstance;

        public static UnityEditor.SettingsManagement.Settings instance
        {
            get
            {
                if (s_SettingsInstance == null)
                    s_SettingsInstance = new UnityEditor.SettingsManagement.Settings("com.unity.mediation");
                return s_SettingsInstance;
            }
        }

        [SettingsProvider]
        static SettingsProvider CreateSettingsProvider()
        {
            var provider = new UserSettingsProviderWrapper("Project/Services/Mediation",
                instance,
                new[] { typeof(MediationSettingsProvider).Assembly },
                SettingsScope.Project)
            {
                activateHandler = (searchContext, rootElement) =>
                {
                    MediationAdapterSettings.GenerateUIElementUI(searchContext, rootElement);
                }
            };
            return provider;
        }
    }
}
