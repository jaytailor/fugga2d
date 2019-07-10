using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Manager {

	private static int diffLevel, premium;
	private static string theme = "sky" ;
	public static bool PremiumGranted = false;
    private static UnityAds ads = null; 


	public static int DifficultyLevel
	{
		get 
		{
			return diffLevel;
		}
		set 
		{
			diffLevel = value;
		}
	}

	public static int PremiumScore
	{
		get 
		{
			return premium;
		}
		set 
		{
			premium = value;
		}
	}

	public static string Theme
	{
		get 
		{
			return theme;
		}
		set 
		{
			theme = value;
		}
	}

    public static UnityAds Ads
    {
        get
        {
            return ads;
        }
        set
        {
            ads = value;
        }
    }
}
