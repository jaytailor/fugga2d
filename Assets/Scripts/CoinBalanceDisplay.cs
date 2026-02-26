using UnityEngine;
using UnityEngine.UI;

// Attach this to a UI Text element to show current coin balance
public class CoinBalanceDisplay : MonoBehaviour
{
    public Text coinText;

    void Start()
    {
        if (coinText == null)
        {
            coinText = GetComponent<Text>();
        }
    }

    void Update()
    {
        if (coinText != null)
        {
            coinText.text = "Coins: " + Manager.PremiumScore;
        }
    }

    // For testing: Add coins button
    public void AddTestCoins500()
    {
        Manager.PremiumScore += 500;
        Debug.Log("Test: Added 500 coins. New balance: " + Manager.PremiumScore);
    }

    public void AddTestCoins1500()
    {
        Manager.PremiumScore += 1500;
        Debug.Log("Test: Added 1500 coins. New balance: " + Manager.PremiumScore);
    }

    public void AddTestCoins3000()
    {
        Manager.PremiumScore += 3000;
        Debug.Log("Test: Added 3000 coins. New balance: " + Manager.PremiumScore);
    }
}
