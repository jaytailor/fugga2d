# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

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

