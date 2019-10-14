using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class ParentalGateControl : MonoBehaviour {

	public Text task;

	private string taskDescription;
	private int correctAnswer;
	public string textFalseAnswer = "False! ";
	public GameObject parentalWindow;

	Delegate callback;

	public void CheckAnswer(Text userAnswer)
	{
		if (userAnswer.text.Equals(correctAnswer.ToString())) 
		{
			Close();

			InvokeCallback(true);

			Debug.Log("PARENTAL GATE WAS PASSED!!!");
			PlayerPrefs.SetString("PARENTAL_GATE_PASSED", "true");
			parentalWindow.SetActive(false);
		}
		else
		{
//			GenerateAndShowTask();

			InvokeCallback(false);

			Debug.Log("PARENTAL GATE ERROR Will not show any ad or IAP!!!");
			PlayerPrefs.SetString("PARENTAL_GATE_PASSED", "false");
			
			parentalWindow.SetActive(false);
			Close();
		}
		SceneManager.LoadScene(1);
	}
	
	public void Close()
	{
		gameObject.SetActive(false);
	}
		
	public void Show(Action<bool> callback)
	{
		gameObject.SetActive(true);

		GenerateAndShowTask();

		SetCallback(callback);
	}

	private void GenerateAndShowTask()
	{
		int a = UnityEngine.Random.Range(0, 4);
		int b = UnityEngine.Random.Range(1, 5);
		
		correctAnswer = a + b;

		task.text = textFalseAnswer + a.ToString() + " + " + b.ToString();
	}

	void SetCallback(Delegate callback)
	{ 
		if (callback != null)
		{				
			this.callback = callback;
		}
	}

	void InvokeCallback(object result)
	{
		if (this.callback != null)
		{
			this.callback.DynamicInvoke(result);
		}
	}
		
}
