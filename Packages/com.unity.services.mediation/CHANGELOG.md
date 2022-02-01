# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).


## [0.3.0-preview.3] - 2021-12-01

### Added
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
