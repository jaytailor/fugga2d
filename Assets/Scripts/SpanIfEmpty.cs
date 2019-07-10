using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpanIfEmpty : MonoBehaviour {
	public spawnGoodies mobj;
	GameObject obj;
	
	// Update is called once per frame
	void Update () {
		//this if check for the mouse left click
		if (Input.GetMouseButtonDown (0)) 
		{
			
			obj =  GameObject.Find("BombLitSprite");
			if (obj != null) {
				obj.SetActive (false);
				mobj.isObjectExs();
			}
		}
		
	}
}
