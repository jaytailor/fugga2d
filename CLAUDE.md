# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

fugga2d is a 2D Unity balloon-popping mobile game for Android and iOS. Players must pop 60 balloons within a time limit across four difficulty levels (easy, medium, hard, super hard) while avoiding bombs. The game monetizes through Unity Advertisement with Mediation, supporting multiple ad networks.

## Unity Environment

- **Unity Version**: 2021.2.0b11 (compatible with later versions)
- **Supported Platforms**: Android, iOS
- **Build Tool**: Use Unity Hub to open and build the project
- **Android Build Note**: Older Unity versions (2019.4) may require Gradle 5.6.4 for Android 11 compatibility

## Key Dependencies

- `com.unity.services.mediation` (v1.0.1) - Advertisement with Mediation package
- `com.unity.services.core` - Unity Services initialization
- `com.unity.services.analytics` - Analytics tracking
- `com.unity.ads.ios-support` - iOS App Tracking Transparency (ATT)
- Adjust SDK - Ad revenue tracking and analytics
- External Dependency Manager for Unity (EDM4U) - Manages iOS CocoaPods and Android Gradle dependencies

## Ad Network Adapters

The project uses Unity Mediation to integrate multiple ad networks:
- AdColony
- AdMob
- AppLovin
- Facebook Audience Network
- IronSource (LevelPlay)
- Mintegral
- Unity Ads
- Vungle

Adapter dependencies are managed in `Assets/Editor/MediationAdapterDependencies.xml`.

## Code Architecture

### Core Classes

**Manager** (`Assets/Scripts/Manager.cs`)
- Static singleton manager for global game state
- Manages difficulty level, premium score, theme selection
- Provides singleton access to UnityAds instance via `Manager.Ads`

**UnityAds** (`Assets/Scripts/UnityAds.cs`)
- Handles all ad mediation logic (initialization, loading, showing ads)
- Supports interstitial, rewarded, and banner ad formats
- Platform-specific ad unit IDs for iOS and Android
- Integrates with Adjust SDK to send impression data for ad revenue tracking
- iOS: Requests ATT permission before initializing mediation
- Key methods:
  - `Initialize()` - Initializes Unity Services and Mediation SDK
  - `LoadInterstitialNew()` / `ShowInterstitialNew()` - Interstitial ads
  - `LoadRewardedNew()` / `ShowRewardedNew()` - Rewarded video ads
  - `LoadBanner()` / `LoadMREC()` - Banner ads

### Game Logic

**spawnGoodies** (`Assets/Scripts/spawnGoodies.cs`)
- Spawns balloons and bombs at random positions
- Controls spawn rate and difficulty progression
- Manages object pooling for game objects tagged as "ball"

**DestroyBall** (`Assets/Scripts/DestroyBall.cs`)
- Handles player input and balloon/bomb interactions
- Manages game timer based on difficulty level
- Tracks lives (3 total) and score (target: 60)
- Triggers game over and win conditions

**Score**, **LifeValue**, **PlayerTime**
- Static value holders for game state

**MainMenu** (`Assets/Scripts/MainMenu.cs`)
- Entry point that initializes ads via `Manager.Ads.Initialize()`
- Grants initial premium currency (100 points)

### Scene Structure

- `Assets/menu.unity` - Main menu scene
- `Assets/main.unity` - Gameplay scene

## Mediation Package Structure

The Unity Mediation package (`Packages/com.unity.services.mediation/`) is included locally and contains:
- Platform-specific implementations (iOS, Android, Editor, Unsupported)
- Editor tools for adapter management (`Editor/Adapters/`, `Editor/Settings/`)
- Sample integration code (`Samples~/ExampleUsage/`)

## Ad Unit Configuration

Ad unit IDs are hardcoded in `UnityAds.cs`:

**iOS**:
- Game ID: 1737343
- Rewarded: `rv_ios_medi_adunit`
- Interstitial: `interstitial_ios_medi_adunit`
- Banner: `banner_ios`
- MREC: `banner_mrec_ios`

**Android**:
- Game ID: 1737342
- Rewarded: `rv_android_medi_adunit`
- Interstitial: `Android_Interstitial`
- Banner: `banner_android`
- MREC: `banner_mrec_android`

## Testing

Unity doesn't support traditional command-line test runners for this project. Testing is done through:
1. Unity Editor Play Mode
2. Building and running on device/emulator

## Adjust SDK Integration

The project uses Adjust SDK for analytics and ad revenue tracking:
- Ad impression events from Unity Mediation are automatically forwarded to Adjust via `OnImpression` callback
- Adjust configuration is managed through `Assets/Adjust/` directory
- Platform-specific implementations: `AdjustiOS.cs`, `AdjustAndroid.cs`

## Working with Mediation

To update or modify ad network integrations:
1. Edit `Assets/Editor/MediationAdapterDependencies.xml` to add/remove adapters
2. Use Unity Editor > Project Settings > Services > Mediation to configure ad sources
3. External Dependency Manager will automatically resolve dependencies on build
4. Update ad unit IDs in `UnityAds.cs` if testing with different projects

## iOS-Specific Considerations

- ATT (App Tracking Transparency) permission is requested on iOS 14+ before initializing mediation
- CocoaPods are used for dependency management
- Ensure Xcode and CocoaPods are properly installed when building for iOS

## Current Branch Context

Branch `vishal/levelplay-integration` indicates work on integrating or updating IronSource LevelPlay mediation adapter.
