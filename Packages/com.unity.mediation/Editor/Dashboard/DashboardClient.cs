using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;

namespace Unity.Mediation.Dashboard.Editor
{
    public static class DashboardClient
    {
        const string k_ErrorProjectNotConfigured        = "The Project has not been configured yet, please validate your information.";
        const string k_ErrorFailedToRetrieveOrgId       = "Failed to retrieve the organization ID from the Dashboard; ";
        const string k_ErrorFailedToRetrieveAdUnits     = "Failed to retrieve Ad Units from the Dashboard; ";
        const string k_ErrorFailedToRetrieveGameId      = "Failed to retrieve Game ID from the Dashboard; ";
        const string k_ErrorFailedToRetrieveAdNetworks  = "Failed to retrieve Configured ad Networks from the Dashboard; ";
        const string k_GetOrgIdUrl       = "https://api.unity.com/v1/core/api/projects/{0}";
        const string k_AdUnitsListUrl    = "https://services.unity.com/api/monetize/mediation/v1/organizations/{0}/projects/{1}/ad-units";
        const string k_GameIdUrl         = "https://services.unity.com/api/monetize/mediation/v1/organizations/{0}/projects/{1}/app-adnetwork-parameters/{2}";
        const string k_AdNetworksListUrl = "https://services.unity.com/api/monetize/mediation/v1/organizations/{0}/apps/{1}/app-adnetwork-parameters";

        static string s_CachedProjectId;
        static string s_CachedOrgId;

        static DashboardPoller s_ProjectSettingsPoller;

        static DashboardClient()
        {
            s_ProjectSettingsPoller = new DashboardPoller(IsCloudProjectSettingsValid);
        }

        private static bool IsCloudProjectSettingsValid()
        {
            return !string.IsNullOrEmpty(CloudProjectSettings.projectId)
                && !string.IsNullOrEmpty(CloudProjectSettings.userId)
                && !string.IsNullOrEmpty(CloudProjectSettings.accessToken);
        }

        /// <summary>
        /// Validates that the Cloud project settings are properly set so we can access the Dashboard
        /// </summary>
        /// <returns>True if we have the proper info to access the dashboard</returns>
        static void IsProjectReadyForConfigurationRequests(Action<bool> callback)
        {
            bool isCloudProjectSettingsValid = IsCloudProjectSettingsValid();
            if (isCloudProjectSettingsValid || s_ProjectSettingsPoller.FinishedPolling)
            {
                callback?.Invoke(isCloudProjectSettingsValid);
            }
            else
            {
                s_ProjectSettingsPoller.AddCallback(callback);
            }
        }

        /// <summary>
        /// Retrieves the request token and sets it in the unity web request's header
        /// </summary>
        /// <param name="request">The web request to fill</param>
        /// <param name="onRequestReady">Callback when the token is set</param>
        static void PrepareRequestToken(UnityWebRequest request, Action onRequestReady)
        {
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            JwtToken.GetTokenAsync(token =>
            {
                request.SetRequestHeader("Authorization", $"Bearer {token}");
                onRequestReady?.Invoke();
            });
        }

        static void GetOrgIdAsync(Action<string> onIdReady)
        {
            if (s_CachedProjectId != CloudProjectSettings.projectId)
            {
                s_CachedProjectId = CloudProjectSettings.projectId;
                s_CachedOrgId = null;
            }

            if (string.IsNullOrEmpty(s_CachedOrgId))
            {
                var dashboardRequest = new UnityWebRequest(string.Format(k_GetOrgIdUrl, CloudProjectSettings.projectId), UnityWebRequest.kHttpVerbGET);
                dashboardRequest.downloadHandler = new DownloadHandlerBuffer();
                dashboardRequest.SetRequestHeader("Content-Type", "application/json");
                dashboardRequest.SetRequestHeader("Authorization", $"Bearer {CloudProjectSettings.accessToken}");
                var requestAsyncOperation = dashboardRequest.SendWebRequest();
                requestAsyncOperation.completed += _ => OnOrgIdReady(dashboardRequest, onIdReady);
            }
            else
            {
                onIdReady?.Invoke(s_CachedOrgId);
            }
        }

        static void OnOrgIdReady(UnityWebRequest request, Action<string> callback)
        {
            var isSuccess = !request.isNetworkError && !request.isHttpError;

            if (!isSuccess)
            {
                Debug.LogError(k_ErrorFailedToRetrieveOrgId + request.error);
                callback?.Invoke(null);
                return;
            }

            OrgInfoJson orgInfo = JsonConvert.DeserializeObject<OrgInfoJson>(request.downloadHandler.text);
            callback?.Invoke(orgInfo.BackendId);
        }

        /// <summary>
        /// Returns an array of available Ad Units asynchronously
        /// </summary>
        /// <param name="callback">Called upon completion, with an array of ad units or null if we failed.</param>
        public static void GetAdUnitsAsync(Action<AdUnitInfoJson[]> callback)
        {
            IsProjectReadyForConfigurationRequests(ready =>
            {
                if (ready)
                {
                    GetOrgIdAsync(orgId =>
                    {
                        var dashboardUri =
                            new Uri(string.Format(k_AdUnitsListUrl, orgId, CloudProjectSettings.projectId));
                        var dashboardRequest = new UnityWebRequest(dashboardUri, UnityWebRequest.kHttpVerbGET);

                        PrepareRequestToken(dashboardRequest, () =>
                        {
                            var requestAsyncOperation = dashboardRequest.SendWebRequest();
                            requestAsyncOperation.completed += _ => OnAdUnitsInfoReady(dashboardRequest, callback);
                        });
                    });
                }
                else
                {
                    Debug.LogWarning(k_ErrorProjectNotConfigured);
                    callback?.Invoke(null);
                    return;
                }
            });
        }

        static void OnAdUnitsInfoReady(UnityWebRequest request, Action<AdUnitInfoJson[]> callback)
        {
            var isSuccess = !request.isNetworkError && !request.isHttpError;

            if (!isSuccess)
            {
                Debug.LogError(k_ErrorFailedToRetrieveAdUnits + request.error);
                callback?.Invoke(null);
                return;
            }

            AdUnitInfoJson[] adUnitInfos = JsonConvert.DeserializeObject<AdUnitInfoJson[]>(request.downloadHandler.text);
            callback?.Invoke(adUnitInfos);
        }

        /// <summary>
        /// Returns the game Id, asynchronously
        /// </summary>
        /// <param name="callback">Called upon completion, with a dictionary of platform:gameId or null if we failed</param>
        /// <param name="adNetwork">The ad Network for which we want a gameId</param>
        public static void GetGameIdAsync(Action<Dictionary<string, string>> callback, string adNetwork)
        {
            IsProjectReadyForConfigurationRequests(ready =>
            {
                if (ready)
                {
                    GetOrgIdAsync(orgId =>
                    {
                        var dashboardUri = new Uri(string.Format(k_GameIdUrl, orgId, CloudProjectSettings.projectId,
                            adNetwork));
                        var dashboardRequest = new UnityWebRequest(dashboardUri, UnityWebRequest.kHttpVerbGET);

                        PrepareRequestToken(dashboardRequest, () =>
                        {
                            var requestAsyncOperation = dashboardRequest.SendWebRequest();
                            requestAsyncOperation.completed += _ => OnGameIdReady(dashboardRequest, callback);
                        });
                    });
                }
                else
                {
                    Debug.LogWarning(k_ErrorProjectNotConfigured);
                    callback?.Invoke(null);
                    return;
                }
            });
        }

        static void OnGameIdReady(UnityWebRequest request, Action<Dictionary<string, string>> callback)
        {
            var isSuccess = !request.isNetworkError && !request.isHttpError;

            if (!isSuccess)
            {
                //Here a 404 means the ad network is not associated with a waterfall, so the id is not available.
                if (request.responseCode != 404)
                {
                    Debug.LogError(k_ErrorFailedToRetrieveGameId + request.error);
                }

                callback?.Invoke(null);
                return;
            }

            var projectInfo = JsonConvert.DeserializeObject<ProjectInfoJson[]>(request.downloadHandler.text);
            var gameIdPerPlatform = new Dictionary<string, string>();
            foreach (var project in projectInfo)
            {
                gameIdPerPlatform.Add(project.Platform, project.Params.GameId);
            }

            callback?.Invoke(gameIdPerPlatform);
        }

        /// <summary>
        /// Returns the list of configured ad networks, asynchronously
        /// </summary>
        /// <param name="callback">Called upon completion, with an array of ad networks or null if we failed</param>
        public static void GetConfiguredAdNetworksAsync(Action<string> callback)
        {
            // Waiting for backend to support this
            throw new NotImplementedException();
            IsProjectReadyForConfigurationRequests(ready =>
            {
                if (ready)
                {
                    GetOrgIdAsync(orgId =>
                    {
                        var dashboardUri = new Uri(string.Format(k_AdNetworksListUrl, orgId));
                        var dashboardRequest = new UnityWebRequest(dashboardUri, UnityWebRequest.kHttpVerbGET);

                        Debug.Log(dashboardUri);
                        PrepareRequestToken(dashboardRequest, () =>
                        {
                            var requestAsyncOperation = dashboardRequest.SendWebRequest();
                            requestAsyncOperation.completed += _ => OnConfiguredAdNetworksReady(dashboardRequest, callback);
                        });
                    });
                }
                else
                {
                    Debug.LogWarning(k_ErrorProjectNotConfigured);
                    callback?.Invoke(null);
                    return;
                }
            });
        }

        static void OnConfiguredAdNetworksReady(UnityWebRequest request, Action<string> callback)
        {
            var isSuccess = !request.isNetworkError && !request.isHttpError;

            if (!isSuccess)
            {
                Debug.LogError(k_ErrorFailedToRetrieveAdNetworks + request.error);
                callback?.Invoke(null);
                return;
            }

            Debug.Log(request.downloadHandler.text);
            ProjectInfoJson[] projectInfo = JsonConvert.DeserializeObject<ProjectInfoJson[]>(request.downloadHandler.text);
            callback?.Invoke(projectInfo[0].Params.GameId);
        }

        public class OrgInfoJson
        {
            [JsonProperty("org_foreign_key")]
            public string BackendId { get; protected set; }
        }

        public class ProjectInfoJson
        {
            public class ProjectInfoParamsJson
            {
                [JsonProperty("gameId")]
                public string GameId { get; protected set; }
            }

            [JsonProperty("CoreOrganizationId")]
            public string CoreOrganizationId { get; protected set; }

            [JsonProperty("appId")]
            public string AppId { get; protected set; }

            [JsonProperty("projectId")]
            public string ProjectId { get; protected set; }

            [JsonProperty("adNetwork")]
            public string AdNetwork { get; protected set; }

            [JsonProperty("platform")]
            public string Platform { get; protected set; }

            [JsonProperty("parameters")]
            public ProjectInfoParamsJson Params { get; protected set; }
        }

        public class AdUnitInfoJson
        {
            [JsonProperty("adUnitId")]
            public string AdUnitId { get; protected set; }

            [JsonProperty("coreOrganization")]
            public string Organization { get; protected set; }

            [JsonProperty("adFormat")]
            public string AdFormat { get; protected set; }

            [JsonProperty("platform")]
            public string Platform { get; protected set; }

            [JsonProperty("appId")]
            public string AppId { get; protected set; }

            [JsonProperty("name")]
            public string Name { get; protected set; }

            [JsonProperty("isArchived")]
            public bool IsArchived { get; protected set; }
        }
    }
}
