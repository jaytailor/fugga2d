# In-App Purchases Setup Guide for Fugga

## IAP Products Configuration

You have 3 consumable coin packages:

| Package | Coins | Price | Product ID |
|---------|-------|-------|------------|
| Small   | 500   | $0.99 | `com.jayt.fugga.coins500` |
| Medium  | 1500  | $1.99 | `com.jayt.fugga.coins1500` |
| Large   | 3000  | $2.99 | `com.jayt.fugga.coins3000` |

---

## Step 1: Unity Setup

### 1.1 Add IAPManager to Your Menu Scene

1. Open your **menu scene** (`Assets/menu.unity`)
2. Create an empty GameObject: `GameObject → Create Empty`
3. Rename it to `IAPManager`
4. Add the IAPManager script: `Add Component → IAP Manager`
5. Save the scene

### 1.2 Add IAP Buttons (Optional - for testing)

If you want to add IAP purchase buttons:

1. Create a UI Button: `GameObject → UI → Button`
2. Add the `IAPButton` script to the button
3. In the Inspector, select which package (Coins500, Coins1500, or Coins3000)
4. Connect the button's `OnClick` event to `IAPButton.OnPurchaseButtonClick()`

---

## Step 2: Google Play Console Setup

### 2.1 Create In-App Products

1. Go to https://play.google.com/console
2. Select your **Fugga** app
3. Navigate to: **Monetize → Products → In-app products**
4. Click **Create product** for each package:

#### Product 1: 500 Coins
- **Product ID**: `com.jayt.fugga.coins500`
- **Name**: 500 Premium Coins
- **Description**: Get 500 premium coins to unlock themes!
- **Status**: Active
- **Price**: $0.99 USD (Google will convert to other currencies)

#### Product 2: 1500 Coins
- **Product ID**: `com.jayt.fugga.coins1500`
- **Name**: 1500 Premium Coins
- **Description**: Get 1500 premium coins to unlock themes!
- **Status**: Active
- **Price**: $1.99 USD

#### Product 3: 3000 Coins
- **Product ID**: `com.jayt.fugga.coins3000`
- **Name**: 3000 Premium Coins
- **Description**: Get 3000 premium coins to unlock themes!
- **Status**: Active
- **Price**: $2.99 USD

### 2.2 Important Notes

- Product IDs **must match exactly** (case-sensitive)
- Save each product before creating the next one
- Products can take a few hours to become active after creation
- You can change prices later, but not Product IDs

---

## Step 3: Testing IAP

### 3.1 Add Test Accounts

1. In Google Play Console, go to: **Setup → License testing**
2. Add your Gmail account(s) that you'll use for testing
3. Set the license test response to: **RESPOND_NORMALLY**

### 3.2 Test Purchases

1. Build and upload your app to **Internal testing** track
2. Install the app on your test device using the test account
3. Make a test purchase
4. **Important**: Test purchases are free but behave like real purchases
5. Check if coins are added to `Manager.PremiumScore`

### 3.3 View Test Purchase History

- Go to: **Monetize → Orders → Subscription and one-time products**
- You'll see all test purchases (marked as test)

---

## Step 4: How It Works in Your Game

### When a player purchases coins:

1. Player taps a purchase button
2. Google Play shows the payment dialog
3. Player completes payment
4. `IAPManager.ProcessPurchase()` is called
5. Coins are added to `Manager.PremiumScore`
6. Player can now buy themes:
   - Beach theme: 1000 coins
   - Dream theme: 2000 coins
   - Cloud theme: 3000 coins

### Current Economy:

- Players start with 100 free coins
- Watching rewarded ads gives coins
- Purchasing IAP gives coins instantly
- Themes cost coins to unlock

---

## Step 5: Building for Production

When you're ready to release:

1. **Test thoroughly** with internal testing first
2. Upload to **Production** track in Google Play Console
3. Products should already be created and active
4. Monitor: **Monetize → Reports** for purchase analytics

---

## Troubleshooting

### "Product not available for purchase"
- Wait a few hours after creating products in Play Console
- Make sure the app is uploaded to at least Internal testing track
- Verify Product IDs match exactly

### "IAP not initialized"
- Check that IAPManager GameObject exists in the scene
- Check Unity Console for initialization errors
- Verify Unity IAP package is installed

### Purchases not working
- Check you're signed in with a test account
- Verify products are Active in Play Console
- Check device has internet connection
- Look for errors in Unity Console logs (search for "IAP:")

---

## Security Notes

- ✅ IAP uses Google Play's secure payment system
- ✅ Receipt validation happens on Google's servers
- ✅ No payment credentials are stored in your app
- ✅ All transactions are tracked in Google Play Console

---

## Support

If you encounter issues:
1. Check Unity Console logs (filter by "IAP:")
2. Check Google Play Console → Monetize → Orders
3. Test with a different test account
4. Verify all Product IDs match exactly
