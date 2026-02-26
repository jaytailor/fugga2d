# Ad Troubleshooting Guide for Fugga2D

## Changes Made to Enable Better Debugging

I've updated `UnityAds.cs` with enhanced logging to help debug ad issues:
- Added detailed initialization logs
- Added ad state checking before showing ads
- Added comprehensive error messages with ad unit IDs
- Added automatic retry on failed show attempts

## How to View Logs on Android Device

### Option 1: Using Android Studio Logcat
1. Connect your Android device via USB
2. Open Android Studio
3. Go to **View** → **Tool Windows** → **Logcat**
4. Filter by "Unity" or "Mediation"

### Option 2: Using ADB (Command Line)
```bash
# Install ADB if not already installed
brew install android-platform-tools  # On macOS

# View live logs filtered for Unity/Mediation
adb logcat | grep -i "unity\|mediation\|ads"

# Save logs to file
adb logcat > ~/fugga_logs.txt
```

### Option 3: Build Development Build with On-Screen Console
In Unity Editor:
1. File → Build Settings → Android
2. Check **Development Build**
3. Build and install
4. Shake device to show console overlay

## Common Issues & Solutions

### 1. **Ad Unit IDs Not Configured in Unity Dashboard**
**Symptoms**: "Ad load failed - No fill" errors

**Solution**:
1. Go to https://dashboard.unity3d.com/
2. Navigate to your project (ID: `2af4a5e2-eecd-4bb0-85f7-47a6dbabf670`)
3. Go to **Monetization** → **Mediation**
4. Configure these ad units:
   - **Android Rewarded**: `rv_android_medi_adunit`
   - **Android Interstitial**: `Android_Interstitial`
   - **Android Banner**: `banner_android`
5. Add ad sources (networks) for each ad unit:
   - AdColony
   - AdMob
   - AppLovin
   - Unity Ads
   - Vungle

### 2. **Missing Ad Network Credentials**
**Symptoms**: Specific network fails to load ads

**Solution**: For each ad network, you need to configure credentials in Unity Dashboard:
- **AdMob**: Add AdMob App ID
- **AppLovin**: Add AppLovin SDK Key
- **Unity Ads**: Should work automatically with your Game ID
- **Vungle**: Add Vungle App ID
- **AdColony**: Add AdColony App ID and Zone IDs

### 3. **No Fill / Low Fill Rate**
**Symptoms**: Ads load but "No ad available" errors

**Reasons**:
- We disabled 3 ad networks (Facebook, IronSource, Mintegral) due to SDK compatibility issues
- Production ads may not be available in your test region
- Ad networks need time to learn and optimize fill rates

**Solution**:
1. **Enable Test Mode** for guaranteed test ads:
   In `UnityAds.cs` line 71, change:
   ```csharp
   options.SetEnvironmentName("production");
   ```
   to:
   ```csharp
   options.SetEnvironmentName("test");
   ```

2. **Add more ad networks** - You can try to re-enable the disabled networks:
   - Uncomment lines in `Assets/Editor/MediationAdapterDependencies.xml`
   - Rebuild the app

### 4. **Initialization Failures**
**Symptoms**: "Mediation initialization failed" errors

**Check**:
- Internet connection is active when app starts
- Unity Project ID is correctly linked (check ProjectSettings)
- Unity Services are enabled

### 5. **AdMob Specific Issues**
AdMob requires an App ID in AndroidManifest.xml. Check if it exists:

Location: `Assets/Plugins/Android/AndroidManifest.xml`

Should contain:
```xml
<meta-data
    android:name="com.google.android.gms.ads.APPLICATION_ID"
    android:value="ca-app-pub-XXXXXXXXXXXXXXXX~YYYYYYYYYY"/>
```

If missing, you need to add your AdMob App ID there.

## Key Log Messages to Look For

### Success Messages:
```
=== MEDIATION INITIALIZATION START ===
Unity Services Initialized!
Mediation SDK Version: 1.0.x
Interstitial Ad loaded from mediation partner
Rewarded Ad loaded from mediation partner
Banner Ad loaded from mediation
```

### Error Messages:
```
INTERSTITIAL AD LOAD FAILED - Error Code: X, Message: ...
Ad Unit ID: Android_Interstitial
```

Error codes mean:
- **NoFill**: No ads available from any network
- **NetworkError**: Internet connection issue
- **Timeout**: Ad request took too long
- **NotInitialized**: Mediation SDK not initialized yet
- **AdUnitNotConfigured**: Ad unit doesn't exist in dashboard

## Testing Checklist

- [ ] Unity Dashboard: Ad units created and configured
- [ ] Unity Dashboard: Ad networks added to each ad unit
- [ ] Unity Dashboard: Ad network credentials configured (AdMob App ID, etc.)
- [ ] AndroidManifest: AdMob App ID added (if using AdMob)
- [ ] Build: Development build to see logs
- [ ] Device: Internet connection active
- [ ] Logs: Check for initialization success
- [ ] Logs: Check for ad load errors with specific messages

## Quick Test: Enable Test Mode

For immediate testing with guaranteed ads:

1. Edit `Assets/Scripts/UnityAds.cs` line ~71
2. Change to test environment:
   ```csharp
   options.SetEnvironmentName("test");
   ```
3. Rebuild and test

This will show test ads from Unity's test networks.

## Contact Support

If ads still don't work after following this guide:
1. Collect logs using ADB
2. Check Unity Mediation Dashboard for any warnings
3. Contact Unity Mediation Support with your Project ID and logs
