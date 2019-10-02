using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrivacyPolicy : MonoBehaviour
{
    // Start is called before the first frame update
    public void OpenPrivacyPolicy()
    {
        if (PlayerPrefs.GetString("PARENTAL_GATE_PASSED").Equals("true"))
        {
            Application.OpenURL("https://fugga.flycricket.io/privacy.html");
        }
    }
}
