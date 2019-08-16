using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class AdMobSettings : ScriptableObject
{
    [Header("iOS Settings")]
    [SerializeField] string ios_appID = "ca-app-pub-3848397014015146~6841723256";
    [SerializeField] string ios_bannerID = "ca-app-pub-3848397014015146/1065883161";
    [SerializeField] string ios_videoID = "ca-app-pub-3848397014015146/8701599838";
    [SerializeField] string ios_promoID = "ca-app-pub-3848397014015146/8701599838";

    [Space(10)]

    [Header("Google Play Settings")]
    [SerializeField] string android_appID = "ca-app-pub-3848397014015146~8917222258";
    [SerializeField] string android_bannerID = "ca-app-pub-3848397014015146/1105133347";
    [SerializeField] string android_videoID = "ca-app-pub-3848397014015146/4756940805";
    [SerializeField] string android_promoID = "ca-app-pub-3848397014015146/3147120558";


    public string GetAppID()
    {
        switch (Application.platform)
        {
            case RuntimePlatform.Android:
                return android_appID;
            case RuntimePlatform.IPhonePlayer:
                return ios_appID;
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.LinuxEditor:
                return android_appID;
            default:
                Debug.LogError("Platform Not Supported");
                return "";
        }
    }
    public string GetBannerID()
    {
        switch (Application.platform)
        {
            case RuntimePlatform.Android:
                return android_bannerID;
            case RuntimePlatform.IPhonePlayer:
                return ios_bannerID;
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.LinuxEditor:
                return android_bannerID;
            default:
                Debug.LogError("Platform Not Supported");
                return "";
        }
    }
    public string GetVideoID()
    {
        switch (Application.platform)
        {
            case RuntimePlatform.Android:
                return android_videoID;
            case RuntimePlatform.IPhonePlayer:
                return ios_videoID;
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.LinuxEditor:
                return android_videoID;
            default:
                Debug.LogError("Platform Not Supported");
                return "";
        }
    }
    public string GetPromoID()
    {
        switch (Application.platform)
        {
            case RuntimePlatform.Android:
                return android_promoID;
            case RuntimePlatform.IPhonePlayer:
                return ios_promoID;
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.LinuxEditor:
                return android_promoID;
            default:
                Debug.LogError("Platform Not Supported");
                return "";
        }
    }
}