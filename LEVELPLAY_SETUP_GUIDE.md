# IronSource LevelPlay Integration Setup Guide

## What You Need to Provide

Before we proceed with the integration, please get these from your IronSource Dashboard:

### 1. IronSource Account Setup
**Go to**: https://platform.ironsrc.com/partners/dashboard

If you don't have an account:
1. Sign up at https://platform.ironsrc.com/partners/signup
2. Complete account verification

### 2. App Keys (Required)
You need to create apps in IronSource dashboard and get App Keys:

**iOS App Key**:
- Navigate to: **Apps** → **Add New App**
- Select: iOS
- Enter your iOS Bundle ID (found in Unity: Project Settings → iOS → Bundle Identifier)
- Copy the **App Key** (format: `xxxxxxx` - 8 characters)

**Android App Key**:
- Navigate to: **Apps** → **Add New App**
- Select: Android
- Enter your Android Package Name (found in Unity: Project Settings → Android → Package Name)
- Copy the **App Key** (format: `xxxxxxx` - 8 characters)

### 3. Ad Unit IDs (Optional - we can use default ones)
For each app, you can create custom ad units or use default ones:

**Default Ad Units** (automatically created):
- Banner: `DefaultBanner`
- Interstitial: `DefaultInterstitial`
- Rewarded Video: `DefaultRewardedVideo`

**Custom Ad Units** (if you want to create your own):
- Go to: **Ad Units** → **Setup** → **Add Ad Unit**
- Create for each ad type you want to use
- Copy the Ad Unit ID/Placement name

### 4. Ad Network Setup
In IronSource Dashboard:
1. Go to: **SDK Networks**
2. Enable the ad networks you want:
   - ✅ **IronSource Ads** (Built-in, already enabled)
   - ✅ **AdMob** (Recommended)
   - ✅ **Unity Ads** (Recommended)
   - ✅ **AppLovin**
   - ✅ **Vungle**
   - Others as needed

For each enabled network, you'll need to provide credentials:
- **AdMob**: App ID from Google AdMob console
- **Unity Ads**: Game ID (you already have: iOS=1737343, Android=1737342)
- **AppLovin**: SDK Key from AppLovin dashboard
- **Vungle**: App ID from Vungle dashboard

## Information Needed From You

Please provide:

```
iOS App Key: _________________
Android App Key: _________________

(Optional) Custom Ad Unit IDs:
iOS Banner: _________________ (or use "DefaultBanner")
iOS Interstitial: _________________ (or use "DefaultInterstitial")
iOS Rewarded: _________________ (or use "DefaultRewardedVideo")

Android Banner: _________________ (or use "DefaultBanner")
Android Interstitial: _________________ (or use "DefaultInterstitial")
Android Rewarded: _________________ (or use "DefaultRewardedVideo")
```

## What I'll Do After You Provide the Keys

1. Remove Unity Mediation package
2. Install IronSource LevelPlay SDK
3. Update UnityAds.cs to use LevelPlay API
4. Configure gradle dependencies
5. Update Android SDK version to 34 (required)
6. Test build for Android

## Additional Notes

### Test Mode
LevelPlay has built-in test ads. Once integrated, you can:
- Use `LevelPlay.LaunchTestSuite()` to test all ad formats
- Use `LevelPlay.ValidateIntegration()` to check setup

### Ad Network Priority
In IronSource dashboard, you can set waterfall priorities:
- **Waterfalls** → **Setup** → Configure which networks to try first
- Higher eCPM networks get priority automatically

### Mediation Groups
You can create different mediation strategies:
- **A/B testing** different networks
- **Geo-targeting** different regions
- **Segmentation** by user type

## Once Integration is Complete

You'll be able to:
- ✅ Show Banner, Interstitial, and Rewarded ads
- ✅ Track revenue in IronSource dashboard
- ✅ A/B test different ad networks
- ✅ Optimize with real-time bidding
- ✅ See detailed analytics and reports

---

**Ready to proceed?** Just provide the iOS and Android App Keys, and I'll handle the rest!
