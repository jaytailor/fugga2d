using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerTime : MonoBehaviour {

	public static string timeValue;
	Text playerTimer;

	// Use this for initialization
	void Awake () {
		
	}
	void Start () {
		playerTimer = GetComponent<Text> ();
	}

	// Update is called once per frame
	void Update () {
		playerTimer.text = timeValue;
	}
}
