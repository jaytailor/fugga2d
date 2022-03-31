#import <Foundation/Foundation.h>

#pragma mark - Parameters

static NSString *const UMSIronSourceAppKeyParameter = @"appKey";
static NSString *const UMSIronSourceInstanceIdParatemer = @"instanceId";
static NSString *const UMSIronSourceADMParameter = @"adm";
static NSString *const UMSIronSourceConsentCCPAId = @"do_not_sell";
static NSString *const UMSIronSourceDefaultInstanceId = @"0";

#pragma mark - Accept Consent

static NSString *const UMSIronSourceAcceptConsent = @"true";
static NSString *const UMSIronSourceNoAcceptConsent = @"false";

#pragma mark - Error Messages

static NSString *const UMSIronSourceAppKeyNull = @"appKey was null!";
static NSString *const UMSIronSourceInstanceIdNull = @"instanceId was null!";
static NSString *const UMSIronSourceNoLoadSDK = @"Configuration error: %@";
static NSString *const UMSIronSourceInternetError = @"Internet error: %@";
static NSString *const UMSIronSourceTooManyRequestError = @"Too Many Request error: %@";
static NSString *const UMSIronSourceUnknownError = @"Adapter IronSource unknown error: %@";
static NSString *const UMSIronSourceNoAdEnabled = @"Adapter IronSource: show was called before the ad was loaded.";
static NSString *const UMSIronSourceErrorReasonInterstitialInstanceIdInUse = @"IronSource interstitial instanceId(%@) is already in use! Only one delegate for each instanceId is allowed to be in use at a time.";
static NSString *const UMSIronSourceErrorReasonRewardedInstanceIdInUse = @"IronSource rewarded instanceId(%@) is already in use! Only one delegate for each instanceId is allowed to be in use at a time.";
