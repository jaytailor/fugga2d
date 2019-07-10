using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChanceRemainMenu : MonoBehaviour {

	GameObject chanceScreen, goodies;

	// Use this for initialization
	void Start () {

		chanceScreen = GameObject.Find ("ChanceRemaining");
		chanceScreen.SetActive(false);


		// Disable the screen behind. Don't show any object
	    goodies = GameObject.Find ("Goodies");
	}

	// Update is called once per frame
	void Update () {

	}
		
	public void showChanceRemainScreen(){
		chanceScreen.SetActive (true);
		goodies.SetActive (false);
	}

	public void beginAgain(){
		chanceScreen.SetActive (false);
		goodies.SetActive (true);
	}
}
