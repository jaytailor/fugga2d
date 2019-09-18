using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameControl : MonoBehaviour {

	public ParentalGateControl parentalGateControl;

	public void ShareWithParentalGate()
	{
		parentalGateControl.Show((success) => 
			{
				if(success)
				{
					Share();
					SceneManager.LoadScene(1);
				}
			});
	}

	private void Share()
	{
		print("OK - Share() Function call from outside the ParentalGateControl class - OK");
	}

	public void BuyNoAdsWithParentalGate()
	{
		parentalGateControl.Show((success) => 
			{
				if(success)
				{
					BuyNoAds();
					SceneManager.LoadScene(1);
				}
			});
	}

	private void BuyNoAds()
	{
		print("OK - BuyNoAds() Function call from outside the ParentalGateControl class - OK");
	}

}
