using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Unity.Services.Core;
using Unity.Services.Core.Configuration;
using Unity.Services.Core.Configuration.Internal;
using Unity.Services.Core.Device;
using Unity.Services.Core.Device.Internal;
using Unity.Services.Core.Internal;

namespace Unity.Services.Mediation
{
    class MediationServiceInitializer : IInitializablePackage
    {
        internal const string keyGameId = "com.unity.ads.game-id";

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static void Register()
        {
            CoreRegistry.Instance.RegisterPackage(new MediationServiceInitializer())
                .DependsOn<IInstallationId>()
                .DependsOn<IProjectConfiguration>();
        }

        public async Task Initialize(CoreRegistry registry)
        {
            IInstallationId       installationId = registry.GetServiceComponent<IInstallationId>();
            IProjectConfiguration projectConfig  = registry.GetServiceComponent<IProjectConfiguration>();

            string installId = installationId.GetOrCreateIdentifier();
            string gameId    = projectConfig.GetString(keyGameId);

            if (string.IsNullOrEmpty(gameId))
            {
                Debug.LogError("No gameId was set for the mediation service. Please make sure your project is linked to the dashboard when you build your application.");
                return;
            }

            await MediationService.Initialize(gameId, installId);
        }
    }
}
