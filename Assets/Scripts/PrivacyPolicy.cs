using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrivacyPolicy : MonoBehaviour
{
    // Start is called before the first frame update
    public void OpenPrivacyPolicy()
    {
        Application.OpenURL("https://fugga.flycricket.io/privacy.html");
    }
}
