#if UNITY_ANDROID || UNITY_IOS
using Unity.Mediation.Settings.Editor;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace Unity.Mediation.Build.Editor
{
    class PreprocessBuild : IPreprocessBuildWithReport
    {
        const string kAdMobWarning = "Unity Mediation: AdMob adapter is enabled, but AdMob application identifier is not set. " +
            "You can configure it under 'Project Settings/Mediation'.";

        public int callbackOrder { get; }
        public void OnPreprocessBuild(BuildReport report)
        {
            var adMobSettings = new AdMobSettings();
            if (!adMobSettings.Enabled.value)
                return;

            if (report.summary.platform == BuildTarget.Android && string.IsNullOrWhiteSpace(adMobSettings.AdMobAppIdAndroid) ||
                report.summary.platform == BuildTarget.iOS && string.IsNullOrWhiteSpace(adMobSettings.AdMobAppIdIos))
            {
                Debug.LogWarning(kAdMobWarning);
            }
        }
    }
}
#endif
