using Unity.Services.Core.Configuration.Editor;
using UnityEditor;
using UnityEngine;
using UnityEditor.Advertisements;

namespace Unity.Services.Mediation.Build.Editor
{
    class MediationConfigurationProvider : IConfigurationProvider
    {
        public int callbackOrder { get; }

        public void OnBuildingConfiguration(ConfigurationBuilder builder)
        {
            string gameId = null;

            switch (EditorUserBuildSettings.activeBuildTarget)
            {
                case BuildTarget.Android:
                    gameId = AdvertisementSettings.GetGameId(RuntimePlatform.Android);
                    break;

                case BuildTarget.iOS:
                    gameId = AdvertisementSettings.GetGameId(RuntimePlatform.IPhonePlayer);
                    break;

                default:
                    Debug.LogWarning("Could not retrieve gameId from Dashboard. The selected build platform is not supported by mediation.");
                    return;
            }

            if (string.IsNullOrEmpty(gameId))
            {
                Debug.LogWarning("Could not retrieve gameId from Dashboard. Please make sure your project is linked to your Services project id before building.");
            }
            else
            {
                builder.SetString(MediationServiceInitializer.keyGameId, gameId);
            }
        }
    }
}
