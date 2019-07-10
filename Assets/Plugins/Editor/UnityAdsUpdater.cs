#if UNITY_5_4_OR_NEWER
using UnityEngine.Networking;
#elif UNITY_5_3 || UNITY_5_3_OR_NEWER
using UnityEngine.Experimental.Networking;
#endif
#if UNITY_5_3 || UNITY_5_3_OR_NEWER
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text.RegularExpressions;
using System.Linq;
using UnityEditor.Callbacks;

namespace UnityEditor
{
    // Checks for and optionally installs external packages that are related to Unity Ads, like Unity IAP.
    static class UnityAdsUpdater
    {
        private const string k_ExternalPackageInstallationData = "Plugins/Editor/ExternalPackageInstallationData.json";
        private const string k_PackageImporterStatus = "Plugins/Editor/PackageImporterStatus.json";

        private const string k_IAPDownloadUrl = "https://public-cdn.cloud.unity3d.com/UnityEngine.Cloud.Purchasing.unitypackage";

        private const string k_AssetStoreInfo = "https://api.assetstore.unity3d.com/package/latest-version/";
        private const string k_IAPAssetStoreId = "68207";

        private static readonly UnityAdsExternalPackageImporter s_PackageImporter = new UnityAdsExternalPackageImporter();
        private static readonly string[] s_IAPGuids = {"7e0b2440f785745099a3dc049ef24e20", /* Stores.dll */
                                                       "449b37a211b3c44f1b4d14d620670e79" /* Purchasing.Common.dll */};

        private static bool RunningInBatchMode = Environment.CommandLine.ToLower().Contains("-batchmode");

        [DidReloadScripts]
        private static void ImportAllPackages()
        {
            // Check to see if we should run the external package importer. This will be reset when Ads is upgraded.
            bool ShouldRunPackageImporter = false;
            PackageImporterStatus packageImporterStatus = new PackageImporterStatus();
            string packageImporterStatusPath = Application.dataPath + "/" + k_PackageImporterStatus;
            // If there is no JSON file, create one. Otherwise, fetch values from the file.
            if (!File.Exists(packageImporterStatusPath))
            {
                ShouldRunPackageImporter = true;
            }
            else
            {
                string jsonString = File.ReadAllText(packageImporterStatusPath);
                packageImporterStatus = JsonUtility.FromJson<PackageImporterStatus>(jsonString);
                if (packageImporterStatus != null)
                {
                    ShouldRunPackageImporter = packageImporterStatus.shouldRunPackageImporter;
                }
            }

            if (ShouldRunPackageImporter)
            {
                bool DoNotAskAgainIAP = false;
                // Fetch the external package installation data
                ExternalPackageInstallationData externalPackageInstallationData = new ExternalPackageInstallationData();
                string externalPackageInstallationDataPath = Application.dataPath + "/" + k_ExternalPackageInstallationData;
                // If there is no JSON file, create one. Otherwise, fetch values from the file.
                if (!File.Exists(externalPackageInstallationDataPath))
                {
                    DoNotAskAgainIAP = false;
                }
                else
                {
                    string jsonString = File.ReadAllText(externalPackageInstallationDataPath);
                    externalPackageInstallationData = JsonUtility.FromJson<ExternalPackageInstallationData>(jsonString);
                    if (externalPackageInstallationData != null)
                    {
                        DoNotAskAgainIAP = externalPackageInstallationData.doNotAskAgainIAP;
                    }
                }

                // If the user has not selected "Don't ask me again" for IAP, and doesn't have IAP installed, prompt them.
                if (!DoNotAskAgainIAP)
                {
                    InstallIAPPackage(externalPackageInstallationData);
                }

                // -------- Install logic for other packages here!


                packageImporterStatus.shouldRunPackageImporter = false;

                // Write the updated values to our JSON files.
                string packageImporterStatusJsonString = JsonUtility.ToJson(packageImporterStatus);
                File.WriteAllText(packageImporterStatusPath, packageImporterStatusJsonString);
                WriteExternalPackageInstallationDataToDisk(externalPackageInstallationData);
            }
        }

        private static void InstallIAPPackage(ExternalPackageInstallationData externalPackageInstallationData)
        {
            bool IsIAPInstalled = IsExternalPackageInstalled(s_IAPGuids);

            if (!IsIAPInstalled)
            {
                int option;
                if (RunningInBatchMode)
                {
                    Debug.Log("Preparing to install the IAP asset package...");
                    option = 0;
                }
                else
                {
                    option = EditorUtility.DisplayDialogComplex("Install Unity IAP",
                        "Unity Ads works best with an In-App Purchasing solution." +  System.Environment.NewLine +
                        "Download and install Unity IAP (recommended)?" +  System.Environment.NewLine +
                        "You can always do this from the Services window later.",
                        "Install Unity IAP",
                        "Not now",
                        "Don't ask me again");
                }
                switch (option)
                {
                    // Install Unity IAP
                    case 0:
                    {
                        s_PackageImporter.DownloadAndImportPackage(k_IAPDownloadUrl, RunningInBatchMode);

                        s_PackageImporter.DownloadPackageData(k_AssetStoreInfo + k_IAPAssetStoreId, (bool packageDataAvailable, string packagedata) =>
                        {
                            if (packageDataAvailable)
                            {
                                externalPackageInstallationData.IAPInfo = packagedata;
                                // Write to disk
                                WriteExternalPackageInstallationDataToDisk(externalPackageInstallationData);
                            }
                        });
                        break;
                    }
                    // Not now
                    case 1:
                    {
                        // No-op.
                        break;
                    }
                    // Don't ask me again
                    case 2:
                    {
                        externalPackageInstallationData.doNotAskAgainIAP = true;
                        break;
                    }
                    default:
                    {
                        Debug.LogError("Unrecognized option!");
                        break;
                    }
                }
            }
        }

        private static bool IsExternalPackageInstalled(string[] guids)
        {
            AssetDatabase.Refresh();
            foreach (var guid in guids)
            {
                var guidPath = AssetDatabase.GUIDToAssetPath(guid);
                if (!String.IsNullOrEmpty(guidPath) && File.Exists(guidPath)) return true;
            }
            return false;
        }

        private static void WriteExternalPackageInstallationDataToDisk(ExternalPackageInstallationData externalPackageInstallationData)
        {
            string externalPackageInstallationDataPath = Application.dataPath + "/" + k_ExternalPackageInstallationData;
            string externalPackageInstallationDataJsonString = JsonUtility.ToJson(externalPackageInstallationData);
            File.WriteAllText(externalPackageInstallationDataPath, externalPackageInstallationDataJsonString);
        }
    }

    [Serializable]
    // Representation of the data we store about which external packages to install with Ads.
    class ExternalPackageInstallationData
    {
        // True if the user has explicitly said never to ask again about installing IAP, otherwise false.
        public Boolean doNotAskAgainIAP;
        // IAP Assetstore Package Data
        public String IAPInfo;
    }

    [Serializable]
    // Representation of the data we store about when to run the external package importer.
    class PackageImporterStatus
    {
        // True if the package installer should be run now, otherwise false.
        public Boolean shouldRunPackageImporter;
    }

    // Handles the network requests and actual importing of the downloaded .unitypackages
    internal class UnityAdsExternalPackageImporter
    {
        const float k_DownloadTimeoutInSeconds = 120f;

        private delegate void PackageComplete(Boolean error);

        UnityWebRequest packageDownload = null; // web request to download the package.
        UnityWebRequest jsonDownload = null;    // web request to retrieve package data json from Asset store.

        private Action<bool, string> m_InfoDownloadCallback;

        private DateTime m_DownloadTimeout;

        // Temporary path for the downloaded Package
        private string tempPackagePath;

        private string packageDataJson;

        /// <summary>
        /// Download and import asset store package.
        /// </summary>
        public void DownloadAndImportPackage(string downloadURL, bool runningInBatchMode)
        {
            tempPackagePath = FileUtil.GetUniqueTempPathInProject();

            StartPackageDownload(downloadURL);

            m_DownloadTimeout = DateTime.UtcNow.AddSeconds(k_DownloadTimeoutInSeconds);

            ContinuationManager.Add(
                () => File.Exists(tempPackagePath) || DownloadTimeExpired(),
                () => {
                if (File.Exists(tempPackagePath))
                {
                    AssetDatabase.ImportPackage(tempPackagePath, !runningInBatchMode);
                }
            }
                );
        }

        private bool DownloadTimeExpired()
        {
            return DateTime.Compare(DateTime.UtcNow, m_DownloadTimeout) > 0;
        }

        private void StartPackageDownload(string downloadURL)
        {
            packageDownload = UnityWebRequest.Get(downloadURL);
            packageDownload.Send();

            EditorApplication.update += UpdatePackageDownload;
        }

        /// <summary>
        /// Unity Package Download Web request Handler
        /// </summary>
        private void UpdatePackageDownload()
        {
            if (packageDownload.isDone)
            {
                if (!String.IsNullOrEmpty(packageDownload.error) || packageDownload.downloadedBytes == 0)
                {
                    Debug.LogWarning("Failed to download because " +
                        (packageDownload.downloadedBytes == 0 ? "response was empty" : packageDownload.error));
                }
                else
                {
                    // Success!
                    byte[] data = packageDownload.downloadHandler.data;
                    File.WriteAllBytes(tempPackagePath, data);
                }

                // We're done either because of an error or success. Remove handler from loop.
                EditorApplication.update -= UpdatePackageDownload;
                // reset web request
                packageDownload = null;
            }
        }

        /// <summary>
        /// Download the package data from the asset store
        /// </summary>
        public void DownloadPackageData(string downloadURL, Action<bool, string> callback)
        {
            m_InfoDownloadCallback = callback;
            StartJsonDownload(downloadURL);
        }

        private void StartJsonDownload(string downloadURL)
        {
            jsonDownload = UnityWebRequest.Get(downloadURL);
            jsonDownload.Send();

            EditorApplication.update += UpdateJsonDownload;
        }

        /// <summary>
        /// Unity Package data download Web request Handler
        /// </summary>
        private void UpdateJsonDownload()
        {
            if (jsonDownload.isDone)
            {
                if (!String.IsNullOrEmpty(jsonDownload.error) || jsonDownload.responseCode >= 400)
                {
                    Debug.LogWarning("Failed to download because: " + jsonDownload.error);
                    if (m_InfoDownloadCallback != null)
                    {
                        m_InfoDownloadCallback(false, jsonDownload.error);
                    }
                }
                else
                {
                    // Success!
                    packageDataJson = jsonDownload.downloadHandler.text;
                    if (m_InfoDownloadCallback != null)
                    {
                        m_InfoDownloadCallback(true, packageDataJson);
                    }
                }

                // Remove handler from loop.
                EditorApplication.update -= UpdateJsonDownload;
                // reset web request
                jsonDownload = null;
                // reset callback
                m_InfoDownloadCallback = null;
            }
        }

        public static class ContinuationManager
        {
            public class Task
            {
                /// <summary>
                /// Initialize a new instance of the Task class.
                /// </summary>
                /// <param name="completed">The task completion callback.</param>
                public Task(Func<bool> completed, Action callback)
                {
                    Completed = completed;
                    CompletedAction = callback;
                }

                /// <summary>
                /// Returns the Completed callback thats checks if the task has been completed.
                /// </summary>
                public Func<bool> Completed { get; private set; }

                /// <summary>
                /// Returns the finished callback.
                /// </summary>
                public Action CompletedAction { get; private set; }
            }

            static readonly List<Task> taskQueue = new List<Task>();

            public static void Add(Func<bool> completed, Action CompletedAction)
            {
                // check if the task queue is empty
                if (!taskQueue.Any()) EditorApplication.update += Update;

                // create a new task and add it to the task queue
                taskQueue.Add(new Task(completed, CompletedAction));
            }

            /// <summary>
            /// Invoke only the completed tasks from the queue.
            /// </summary>
            public static void Update()
            {
                Task task = taskQueue[0];

                // Check if task is completed before removing it from the
                // task queue
                if (task.Completed())
                {
                    task.CompletedAction();
                    taskQueue.RemoveAt(0); // Remove task from Queue
                }
                if (!taskQueue.Any()) EditorApplication.update -= Update;
            }
        }
    }
}
#endif
