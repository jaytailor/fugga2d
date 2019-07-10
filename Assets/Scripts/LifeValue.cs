using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class LifeValue : MonoBehaviour {

	public static int lifeValue = 3;
	Text life;

	// Use this for initialization
	void Start () {
		life = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		life.text = lifeValue.ToString();
	}
}
