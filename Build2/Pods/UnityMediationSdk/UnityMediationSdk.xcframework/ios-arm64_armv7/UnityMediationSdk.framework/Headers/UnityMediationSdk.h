#import <Foundation/Foundation.h>

/// Project version number for UnityMediationSdk.
FOUNDATION_EXPORT double UnityMediationSdkVersionNumber;

/// Project version string for UnityMediationSdk.
FOUNDATION_EXPORT const unsigned char UnityMediationSdkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <UnityMediationSdk/PublicHeader.h>

#import <UnityMediationSdk/UMSUnityMediation.h>
#import <UnityMediationSdk/UMSDataPrivacy.h>
#import <UnityMediationSdk/UMSVersion.h>

// Interstitial Adapter
#import <UnityMediationSdk/UMSInterstitialAdapter.h>
#import <UnityMediationSdk/UMSInterstitialAdapterAd.h>
#import <UnityMediationSdk/UMSInterstitialAdapterAdLoadDelegate.h>
#import <UnityMediationSdk/UMSInterstitialAdapterAdShowDelegate.h>

// Rewarded Adapter
#import <UnityMediationSdk/UMSRewardedAdapter.h>
#import <UnityMediationSdk/UMSRewardedAdapterAd.h>
#import <UnityMediationSdk/UMSRewardedAdapterAdLoadDelegate.h>
#import <UnityMediationSdk/UMSRewardedAdapterAdShowDelegate.h>
#import <UnityMediationSdk/UMSRewardedAdShowOptions.h>
#import <UnityMediationSdk/UMSS2SRedeemData.h>

#import <UnityMediationSdk/UMSAdapterConfiguration.h>

// Errors
#import <UnityMediationSdk/UMSAdapterLoadError.h>
#import <UnityMediationSdk/UMSLoadError.h>
#import <UnityMediationSdk/UMSShowError.h>

// AdState
#import <UnityMediationSdk/UMSAdState.h>

// Interstitial Ad Unit
#import <UnityMediationSdk/UMSInterstitialAd.h>
#import <UnityMediationSdk/UMSInterstitialAdLoadDelegate.h>
#import <UnityMediationSdk/UMSInterstitialAdShowDelegate.h>

// Rewarded Ad Unit
#import <UnityMediationSdk/UMSRewardedAd.h>
#import <UnityMediationSdk/UMSRewardedAdLoadDelegate.h>
#import <UnityMediationSdk/UMSRewardedAdShowDelegate.h>
#import <UnityMediationSdk/UMSReward.h>

// Impression Event Publisher
#import <UnityMediationSdk/UMSImpressionEventPublisher.h>
#import <UnityMediationSdk/UMSImpressionDelegate.h>
#import <UnityMediationSdk/UMSImpressionData.h>
#import <UnityMediationSdk/UMSImpressionDelegateWithBlocks.h>

// Logger
#import <UnityMediationSdk/UMSLogger.h>

// Header Bidding
#import <UnityMediationSdk/UMSAdNetworkAdapterProtocol.h>
#import <UnityMediationSdk/UMSAdNetworkInitializationDelegate.h>
#import <UnityMediationSdk/UMSAdapterInitializationError.h>

// Adapter Registration
#import <UnityMediationSdk/UMSMediationAdapterFactory.h>
#import <UnityMediationSdk/UMSMediationAdapterRegistry.h>

// Initialization
#import <UnityMediationSdk/UMSInitializationConfiguration.h>
#import <UnityMediationSdk/UMSInitializationConfigurationBuilder.h>
