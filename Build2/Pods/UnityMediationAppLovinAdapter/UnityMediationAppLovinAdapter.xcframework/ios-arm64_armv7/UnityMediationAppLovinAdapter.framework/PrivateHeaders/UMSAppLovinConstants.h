#import <Foundation/Foundation.h>

#pragma mark - Parameters

static NSString *const UMSAppLovinAppKeyParameter = @"sdkKey";
static NSString *const UMSAppLovinZoneIdParameter = @"zoneId";
static NSString *const UMSAppLovinTestModeParameter = @"testMode";

#pragma mark - Status

static NSString *const UMSAppLovinTestModeValue = @"true";

#pragma mark - Error Messages

static NSString *const UMSAppLovinSdkKeyNull = @"sdkKey was null!";
static NSString *const UMSAppLovinZoneIdNull = @"zoneId was null!";
static NSString *const UMSAppLovinTimeOut = @"Adapter Timeout error: AppLovin Error Code : %i";
static NSString *const UMSAppLovinInternetError = @"Adapter Internet error: AppLovin Error Code : %i";
static NSString *const UMSAppLovinUnknownError = @"Adapter unknown error: AppLovin Error Code : %i";
static NSString *const UMSAppLovinSDKError = @"Adapter SDK error: AppLovin Error Code : %i";
static NSString *const UMSAppLovinNoLoadAd = @"Adapter AppLovin: show was called before the ad was loaded";
