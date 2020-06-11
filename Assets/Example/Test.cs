using MediationWrapper;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    /* For Demo:
     * 
     * Game Id = "abc-123-xyz"
     * Interstitial AdUnitID = "level-1-bonus"
     * Rewarded AdUnitId = "level-1-start"
     */
    
    public Interstitial interstitial;
    public Rewarded rewarded;
    
    private Text statusText;
    // Start is called before the first frame update
    void Start()
    {
        statusText = GameObject.Find("StatusText").GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        statusText.text = Mediation.GetStatus();
    }

    public void InitializedClicked()
    {
        Mediation.Initialize("abc-123-xyz");
        interstitial = new Interstitial("level-1-bonus");
        rewarded = new Rewarded("level-1-start");
    }
    public void LoadInterstitialClicked()
    {
        interstitial.Load();
    }
    public void ShowInterstitialClicked()
    {
        interstitial.Show();
    }    
    public void LoadRewardedClicked()
    {
        rewarded.Load();
    }
    public void ShowRewardedClicked()
    {
        rewarded.Show();
    }
}
