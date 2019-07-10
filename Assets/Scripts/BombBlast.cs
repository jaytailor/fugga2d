using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombBlast : MonoBehaviour {

	private int count = 0;
	GameObject ballObject, bombObject;
	public spawnGoodies spObj = null;

	void Start()
	{
//		bombObject = GameObject.FindGameObjectWithTag ("bomb");
//		bombObject.SetActive (false);
	}

	void Update()
	{
		// timer to spawn the next goodie Object
		//theCountdown -= Time.deltaTime;


		//this if check for the mouse left click
		if (Input.GetMouseButtonDown (0)) 
		{
			RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

			if(hit.collider != null)
			{	
				if (hit.collider.gameObject == gameObject) {
					if (hit.collider.gameObject.tag == "bomb") {
						print ("GAME OVER");
					}
					hit.collider.gameObject.SetActive (false);
				} 
				count = count + 1;

			}
		}
	}
}
