using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnGoodies : MonoBehaviour {

	GameObject[] spawnPoints;

	float createRate = 0.2f, createRateTimer;
	float rateIncrease = 1.0f;
	int callCounter = 0, callsBeforeRateIncrease = 3	;

	GameObject currentPoint, bObject;
	int index;
	bool isObject = false;

	// the range of X
	[Header ("X Spawn Range")]
	public float xMin;
	public float xMax;

	// the range of y
	[Header ("Y Spawn Range")]
	public float yMin;
	public float yMax;


	void Start()
	{
		createRateTimer = createRate;

		spawnPoints = GameObject.FindGameObjectsWithTag("ball");
	
		GameObject[] temp = GameObject.FindGameObjectsWithTag("ball");

		foreach (GameObject obj in temp) {
			obj.SetActive (false);
		}

	}

	void Update(){

		createRateTimer -= Time.deltaTime;

		if (isObject == false && createRateTimer <= 0) {
			spawnItems ();
		}
			
	}

	public void isObjectExs(bool value=false){
		isObject = value;
	}

	public void spawnItems(){
		
		index = Random.Range (0, spawnPoints.Length);
		currentPoint = spawnPoints[index];
		currentPoint.transform.position = new Vector2 (Random.Range (xMin, xMax), Random.Range (yMin, yMax));

		currentPoint.SetActive (true);

		if (currentPoint.name == "BombLitSprite") {
			currentPoint.transform.localScale = new Vector2 (1.4f, 1.4f);
		} else {
			currentPoint.transform.localScale = new Vector2 (0.3f, 0.3f);
		}

		currentPoint.layer = 0;
		isObject = true;

		callCounter++;
		if(callCounter >= callsBeforeRateIncrease){
			createRate -= rateIncrease;
			callCounter = 0;
		}
		createRateTimer = createRate;
	}
}
