# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

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

### This is the first release of *Unity Package \<com.unity.mediation\>*.

*Unity Wrapper for Unity Open Mediation Product*

