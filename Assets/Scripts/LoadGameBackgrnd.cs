using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadGameBackgrnd : MonoBehaviour {
	
	public Sprite beach, dream, cloud;

	void Awake()
	{
		if (Manager.Theme == "sky") {
			Debug.Log ("sky....");
		}

		if (Manager.Theme == "Beach") {
			Debug.Log ("Beach....");
			this.GetComponent<SpriteRenderer> ().sprite = beach;
		}

		if (Manager.Theme == "Dream") {
			Debug.Log ("Dream....");
			this.GetComponent<SpriteRenderer> ().sprite = dream;
		}

		if (Manager.Theme == "Cloud") {
			Debug.Log ("Cloud....");
			this.GetComponent<SpriteRenderer> ().sprite = cloud;
		}
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
