using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notification : MonoBehaviour {

	GameObject noticeScreen, goodies;

	// Use this for initialization
	void Start () {

		noticeScreen = GameObject.Find ("StartNotice");

		// Disable the screen behind. Don't show any object
		goodies = GameObject.Find ("Goodies");
		goodies.SetActive (false);
	}

	// Update is called once per frame
	void Update () {

	}

	public void ShowNoticeScreen(){
		noticeScreen.SetActive (true);
		goodies.SetActive (false);
	}

	public void CloseNoticeScreen(){
		Destroy (noticeScreen);
		goodies.SetActive (true);
	}
}
