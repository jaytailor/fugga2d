# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).


## [0.3.0-preview.1] - 2021-11-18

### Added
- **INTERNAL**: Header Bidding Support for Vungle Adapter on iOS/Android.
- MediationService.Instance.SdkVersion: Gets the native Mediation version at runtime. 
- Line numbers for generated code in the Code Generation Window.
- PIPL Support for DataPrivacy Laws Enum
    - DataPrivacy.PIPLAdPersonalization - Personal Information Protection Law, regarding ad personalization, applicable to users residing in China.
    - DataPrivacy.PIPLDataTransport - Personal Information Protection Law, regarding moving data out of China, applicable to users residing in China

### Changed
- Refined Code Generation Code
    - Class Name includes Ad Type to avoid class name conflicts. (MyExampleAdClass -> InterstitialAdExample)
    - Uses override game id initialization flow now
    - Added OnClicked and OnClosed Callbacks to code snippet.
    - Fixed Newline issues with OnUserRewarded Callback placement.
    - Renamed Event Args parameter in Ad Loaded (sargs -> args)
    - OnUserRewarded subscribed method renamed (OnUserRewarded -> UserRewarded)
    - Code snippet color changed to increase visibility.
- Banner ads will now be excluded from the code generator, as they are not supported at the moment.
    
### Fixed
- Unity Ads sometimes not appearing as installed in the Mediation Settings Window.
- Misalignment of adapter status and its icon on Windows for Unity 2020+
- Dark color palettes used in some Mediation UI when using the Light Theme. 

## [0.2.1-preview.2] - 2021-10-12

### Added
- Test validating gradle version to display a more meaningful error message.
- `InitializationOptions` extension `SetGameId` to manually specify a game id when initializing mediation.

### Changed
- Overhauled the Mediation Settings UI.
    - Uninstalled indicators
    - Alternating backgrounds
    - Game id display for game ids retrieved from the Dashboard
- In-Editor Test Ads: Color removed from console logs

### Fixed
- Archived Ad Units will no longer be displayed in the ad units list.
- In-Editor Test Ads would not initialize if the build target was not supported by mediation.
- Removed error when importing play services resolver for the first time.

## [0.2.0-preview.5] - 2021-08-25

### Added
- SKAdNetworks file inside of the package

## [0.2.0-preview.4] - 2021-08-24

### Fixed
-Missing version update in preview.3

## [0.2.0-preview.3] - 2021-08-24

### Added
- Editor now tests for SDK to match the package version.

## [0.2.0-preview.2] - 2021-08-23

### Changed
- Renamed Mediation package from com.unity.mediation to com.unity.services.mediation

## [0.2.0-preview.1] - 2021-07-30

### Added
- Editor now offers mock ads for testing
- Added support for Unity 2021

### Changed
- Adapter settings will now only allow installing and uninstalling. The latest version will be used unless specified in a -Dependencies.xml file
- Initialization of mediation is now done through Unity.Core.Services
- The project's gameId is now fetched from the Dashboard upon linking the project to it
- API changes:
    - To initialize, instead of `UnityMediation.Initialize(string gameId)`, use `UnityServices.Initialize()`
    - The namespace `Unity.Mediation` has been renamed to `Unity.Services.Mediation`
    - `UnityMediation` has been renamed to `MediationService`
    - `ImpressionEventPublisher` is accessible via `MediationService.Instance.ImpressionEventPublisher`
    - `DataPrivacy` is accessible via `MediationService.Instance.DataPrivacy`
    - Creating a new instance of `InterstitialAd` is achieved using `MediationService.Instance.CreateInterstitialAd(string adUnitId)`
    - Creating a new instance of `RewardedAd` is achieved using `MediationService.Instance.CreateRewardedAd(string adUnitId)`

### Fixed
- Fixed a minor leak related to Dashboard requests
- Fixed error when using Proguard's minify, stripping some adapter functions.
- Fixed AdMob IDs not being saved properly.

### Removed
- Removed dependency on Newtonsoft, now favoring Unity's jsonUtility

## [0.1.1-preview] - 2021-05-25

#### Fixed
- URL issue for the Cocoapods Repository

## [0.1.0-preview] - 2021-05-21

### Added
- ShowError InvalidActivity when attempting to show ad units with invalid activity references
- Header bidding support for AdColony
- Header bidding support for IronSource
- Code Generator UI 
- Ad Unit Id List UI
- Override XML support to set specific dependency versions

### Changed
- Updated Adapter Selector UI
- iOS & Android binaries fetched remotely instead of inside the package
- Package dependent on SDK versions 0.1 (it depended on an exact version prior)
- Package supports all supported Adapter versions (it depended on an exact version prior)
- Updated returned strings from `UMSImpressionData.adUnitFormat` property.
    - `UMISAdUnitFormat_Interstitial` (iOS), `Interstitial` (Android) to `INTERSTITIAL`
    - `UMISAdUnitFormat_Rewarded` (iOS), `Rewarded` (Android) to `REWARDED`
    - `UMISAdUnitFormat_Banner` (iOS), `Banner` (Android) to `BANNER`

#### Fixed
- AdColony Reward callback triggers correctly.
- Vungle Reward callback triggers correctly.

### Removed 
- Support for Unity Editor 2018

## [0.0.14-preview] - 2021-04-23

### Fixed
* Fixed issue with a ContentProvider authority collision that prevented users from installing apps/games that used Unity Mediation on the same device.

## [0.0.13-preview] - 2021-03-22

### Added
* LoadError SdkNotInitialized when loading fails due to an initialization failure
* SdkInitializationError NetworkError when initialization fails due to networking conditions
* Data Privacy API
  * Methods
    * UserGaveConsent
    * GetConsentStatusForLaw
  * Enums
    * DataPrivacyLaw 
    * ConsentStatus 
* 1 New Ad Network
    * Vungle

### Changed
* SDK Initialization is now required (via UnityMediation.Initialize())
* InterstitialAd / RewardedAd
  * Removed GameId from Constructor parameter
* iOS frameworks are now xcframeworks

## [0.0.12-preview] - 2021-02-26

### Added 
- ImpressionData
    - Added String PublisherRevenuePerImpressionInMicros.
    - Added String PublisherRevenuePerImpression. 

### Removed
- ImpressionData.PublisherRevenue has been removed in favor of the two new fields listed above.

## [0.0.11-preview] - 2021-01-25

### Added
* 3 New Ad Networks
    * AppLovin
    * IronSource
    * AdColony

## [0.0.10-preview] - 2020-12-17

### Added
* Pre-build check to validate native SDK dependencies
* No Ad Network Adapter prebuild check
* Generic adapter settings

### Changed
* updated LICENSE.md

### Fixed
* iOS local pods with invalid path
* Improve exception handling on Android.
* Use BuildFailedException when stopping the build process

## [0.0.9-preview] - 2020-10-22

### Added

* iOS Initialization Fix

### Changed

* ShowError.AdapterFailure -> ShowError.AdNetworkError

## [0.0.8-preview] - 2020-09-04

### Added

* iOS Rewarded Ads

### Changed

* Facebook Adapter Upgrade
* Upgraded Samples to use latest Mediation SDKs and Adapters
* Sample Scene Improvements
* API Alignemnt
    * Enum "State" -> "AdState"
    * InterstitialAd
        * OnStarted -> OnShown
        * OnFinished -> OnClosed
    * RewardedAd
        * OnFailed -> OnFailedShow
        * OnShown -> OnShowed

## [0.0.7-preview] - 2020-08-14

### Added

* Unity Mediation Initialize Support
* Android Interstitial Ad Support
* Android Rewarded Ad Support
* Impression Event Publisher Support
* Play Services Resolver Incorporation

### Changed

* SDKLoadError -> LoadError

### This is the first release of *Unity Package \<com.unity.services.mediation\>*.

*Unity Wrapper for Unity Open Mediation Product*

