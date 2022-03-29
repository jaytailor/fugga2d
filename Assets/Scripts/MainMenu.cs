using System.Collections;
using System.Collections.Generic;
using AppsFlyerSDK;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour {

    // Use this for initialization
    public GameObject iapListener = null;
    //[SerializeField] private string appID = "ca-app-pub-4734320296886796~5938213117";

    void Awake()
    {
        AppsFlyerAdRevenue.start(AppsFlyerAdRevenueType.Generic);
        Manager.Ads.Initialize();
        if (Manager.PremiumGranted == false) {
            Manager.PremiumScore = 5000; 
            Manager.PremiumGranted = true;
        }
    }

    void Start(){
        //Manager.Ads.ShowBanner();
    }

    public void PlayGame(){
        SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void QuitGame(){
        Debug.Log ("Quitting the Game");
        Application.Quit();
    }

    public void ShowVideo(){
        Dictionary<string, string> dic = new Dictionary<string, string>();
        dic.Add("custom", "foo");
        dic.Add("custom_2", "bar");
        dic.Add("af_quantity", "1");
        AppsFlyerAdRevenue.logAdRevenue("facebook", AppsFlyerAdRevenueMediationNetworkType.AppsFlyerAdRevenueMediationNetworkTypeGoogleAdMob, 0.026, "USD", dic);
        Manager.Ads.ShowVideo();
    }

}