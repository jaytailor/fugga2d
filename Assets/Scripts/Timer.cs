using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour {

	public static string timeValue;
	Text timer;

	// Use this for initialization
	void Awake () {
		timer = GetComponent<Text> ();
	}
	void Start () {
		//timer = GetComponent<Text> ();
	}

	// Update is called once per frame
	void Update () {
		timer.text = timeValue;
	}
}
