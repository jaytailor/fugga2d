using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PremiumCount : MonoBehaviour {
	
	public static int premiumCount = 0;

	Text premium;

	// Use this for initialization
	void Start () {
		premium = GetComponent<Text> ();	
	}

	// Update is called once per frame
	void Update () {
		premiumCount = Manager.PremiumScore;
		premium.text = "Premium Count: " + premiumCount.ToString ();
	}

}
