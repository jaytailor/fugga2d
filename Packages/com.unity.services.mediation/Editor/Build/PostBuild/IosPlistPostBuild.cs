#if UNITY_IOS
using System;
using System.IO;
using Unity.Services.Mediation.Settings.Editor;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.iOS.Xcode;
using UnityEngine;

namespace Unity.Services.Mediation.Build.Editor
{
    class IosPlistPostBuild : IPostprocessBuildWithReport
    {
        /*
         * This Utility will be used to inject Application Id (and other properties) to the Info.plist file.
         */

        const string k_GmsApplicationIdKey = "GADApplicationIdentifier";
        const string k_GmsIsAdManagerAppKey = "GADIsAdManagerApp";

        const string k_SnapApplicationIdKey = "SCAppStoreAppID";


        /*
         * https://developers.google.com/ad-manager/mobile-ads-sdk/ios/app-transport-security
         */
        const string k_NsAppTransportSecurity = "NSAppTransportSecurity";

        const string k_NsAllowsArbitraryLoads = "NSAllowsArbitraryLoads";
        const bool k_NsAllowsArbitraryLoadsEnabled = true;

        const string k_NsAllowsArbitraryLoadsForMedia = "NSAllowsArbitraryLoadsForMedia";
        const bool k_NsAllowsArbitraryLoadsForMediaEnabled = true;

        const string k_NsAllowsArbitraryLoadsInWebContent = "NSAllowsArbitraryLoadsInWebContent";
        const bool k_NsAllowsArbitraryLoadsInWebContentEnabled = true;

        public int callbackOrder => 0;
        public void OnPostprocessBuild(BuildReport report)
        {
            if (report.summary.platform == BuildTarget.iOS)
            {
                OnPostprocessBuild(report.summary.outputPath);
            }
        }

        internal void OnPostprocessBuild(string outputPath)
        {
            var adMobSettings = new AdMobSettings();
            var snapSetting = new SnapSettings();

            var adMobIncluded = !(string.IsNullOrEmpty(adMobSettings.InstalledVersion.value) || string.IsNullOrWhiteSpace(adMobSettings.AdMobAppIdIos));
            var snapIncluded = !(string.IsNullOrEmpty(snapSetting.InstalledVersion.value) || string.IsNullOrWhiteSpace(snapSetting.SnapAppIdIos.ToString()));

            //If we're not including AdMob and Snap, no need to modify Info.plist
            if (!adMobIncluded && !snapIncluded)
                return;

            string plistPath = outputPath + "/Info.plist";
            PlistDocument plist = new PlistDocument();
            plist.ReadFromString(File.ReadAllText(plistPath));

            if (adMobIncluded)
            {
                SetAdmobApplicationIdentifier(plist, adMobSettings.AdMobAppIdIos);
                SetAppTransportSecurity(plist);
            }

            if (snapIncluded)
            {
                SetSnapApplicationIdentifier(plist, snapSetting.SnapAppIdIos.ToString());
            }

            File.WriteAllText(plistPath, plist.WriteToString());
        }

        static void SetAdmobApplicationIdentifier(PlistDocument plist, string adMobAppId)
        {
            plist.root.SetString(k_GmsApplicationIdKey, adMobAppId);
            plist.root.SetBoolean(k_GmsIsAdManagerAppKey, true);
        }

        static void SetSnapApplicationIdentifier(PlistDocument plist, string snapAppId)
        {
            var id = 0;
            var parsed =int.TryParse(snapAppId, out id);
            if (parsed)
            {
                plist.root.SetInteger(k_SnapApplicationIdKey, id);
            }
            else
            {
                Debug.LogWarning("Couldn't parse SCAppStoreAppID, check to see if it's valid.");
            }
        }

        static void SetAppTransportSecurity(PlistDocument plist)
        {
            if (!plist.root.values.ContainsKey(k_NsAppTransportSecurity))
            {
                plist.root.CreateDict(k_NsAppTransportSecurity);
            }
            var appTransportSecurity = plist.root[k_NsAppTransportSecurity].AsDict();
            appTransportSecurity.SetBoolean(k_NsAllowsArbitraryLoads, k_NsAllowsArbitraryLoadsEnabled);
            appTransportSecurity.SetBoolean(k_NsAllowsArbitraryLoadsForMedia, k_NsAllowsArbitraryLoadsForMediaEnabled);
            appTransportSecurity.SetBoolean(k_NsAllowsArbitraryLoadsInWebContent, k_NsAllowsArbitraryLoadsInWebContentEnabled);
        }
    }
}

#endif
