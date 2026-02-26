# IAP Quick Start - 5 Minutes Setup

## Step 1: Open Unity Editor (30 seconds)

1. Open **Unity Hub**
2. Click on your **Fugga** project to open it
3. Wait for Unity to load

---

## Step 2: Setup IAP Manager (1 click!)

1. In Unity menu bar, click: **Fugga → Setup IAP System**
2. Click **Yes** in the dialog
3. Done! IAPManager is now in your menu scene

---

## Step 3: Create IAP Purchase Buttons (Optional - for testing)

### Option A: Use the Helper (Recommended)

1. Open your menu scene if not already open
2. Click: **Fugga → Create IAP Button**
3. A green button will appear in your scene
4. Repeat 2 more times for the other coin packages
5. Select each button and change the "Package" dropdown:
   - Button 1: Coins500 ($0.99)
   - Button 2: Coins1500 ($1.99)
   - Button 3: Coins3000 ($2.99)
6. Position the buttons where you want them

### Option B: Manual Setup

1. Create a UI Button in your scene
2. Add the `IAPButton` component to it
3. Select which coin package (500/1500/3000)
4. In the Button's `OnClick` event:
   - Drag the button itself to the object field
   - Select function: `IAPButton.OnPurchaseButtonClick()`

---

## Step 4: Test in Unity Editor

1. Press Play in Unity
2. Click an IAP button
3. Check the Console - you should see:
   ```
   IAP: Initializing Unity IAP...
   IAP: Initialization SUCCESS
   ```
4. If you see errors about products not available, that's normal - they're not configured yet in Google Play

---

## Step 5: Build and Test on Device

1. Click: **Fugga → Build Release Bundle**
2. Install on your test device
3. IAP buttons won't work yet (products need Google Play setup)

---

## Step 6: Google Play Console Setup

1. Go to https://play.google.com/console
2. Select your Fugga app
3. Navigate to: **Monetize → Products → In-app products**
4. Click **Create product** for each coin package:

### Product 1: Small Coin Pack
- **Product ID**: `com.jayt.fugga.coins500`
- **Name**: 500 Premium Coins
- **Description**: Get 500 premium coins to unlock themes!
- **Price**: $0.99
- **Status**: Active

### Product 2: Medium Coin Pack
- **Product ID**: `com.jayt.fugga.coins1500`
- **Name**: 1500 Premium Coins
- **Description**: Get 1500 premium coins to unlock themes!
- **Price**: $1.99
- **Status**: Active

### Product 3: Large Coin Pack
- **Product ID**: `com.jayt.fugga.coins3000`
- **Name**: 3000 Premium Coins
- **Description**: Get 3000 premium coins to unlock themes!
- **Price**: $2.99
- **Status**: Active

5. Click **Save** for each product
6. Wait 2-4 hours for products to activate

---

## Step 7: Test Real Purchases

1. Add yourself as a test account in Google Play Console:
   - **Setup → License testing**
   - Add your Gmail
2. Upload your app to **Internal testing** track
3. Install on your device with test account
4. Make test purchases (they're free but work like real ones)
5. Check if coins are added to your premium score

---

## Troubleshooting

### IAP not initializing
- Check Console for "IAP:" messages
- Make sure IAPManager GameObject exists in menu scene

### Buttons not appearing
- Check you have a Canvas in your scene
- Make sure buttons are children of the Canvas

### Products not available
- Wait 2-4 hours after creating in Google Play Console
- Make sure app is uploaded to at least Internal testing
- Verify Product IDs match exactly (case-sensitive)

---

## Helpful Unity Menu Items

All under **Fugga** menu:
- **Setup IAP System** - Adds IAPManager to scene
- **Create IAP Button** - Creates a purchase button
- **IAP Documentation** - Opens full setup guide
- **Build Release Bundle** - Quick build for Play Store

---

## Next Steps

Once IAP is working:
- Customize button designs to match your game
- Add purchase confirmation dialogs
- Show "coins added" animations
- Display current coin balance in UI

See `IAP_SETUP_GUIDE.md` for more details!
