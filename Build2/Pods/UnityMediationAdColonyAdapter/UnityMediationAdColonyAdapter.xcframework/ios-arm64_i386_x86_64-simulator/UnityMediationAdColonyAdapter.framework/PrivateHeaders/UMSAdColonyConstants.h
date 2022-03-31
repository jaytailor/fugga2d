#import <Foundation/Foundation.h>

#pragma mark - Parameters

static NSString *const UMSAdColonyAppIdParameter = @"appId";
static NSString *const UMSAdColonyZoneIdParameter = @"zoneId";
static NSString *const UMSAdColonyTestModeParameter = @"testMode";
static NSString *const UMSAdColonyADMParameter = @"adm";
static NSString *const UMSAdColonyConfiguredZoneIdsParameter = @"configuredZoneIds";

#pragma mark - Accept Consent
static NSString *const UMSAdColonyAcceptConsent = @"1";
static NSString *const UMSAdColonyNoAcceptConsent = @"0";
static NSString *const UMSAdColonyTestModeValue = @"true";

#pragma mark - Error Messages

static NSString *const UMSAdColonyAppIdNull = @"appId was null!";
static NSString *const UMSAdColonyZoneIdNull = @"zoneId was null!";
static NSString *const UMSAdColonyNoLoadSDK = @"AdColony interstitial adapter : show was called before the ad was loaded.";
static NSString *const UMSAdColonyInvalidRequest = @"Failed to fill an ad with error : %@";
static NSString *const UMSAdColonyServerError = @"Server error : %@";
static NSString *const UMSAdColonyNoFillRequest = @"Failed to fill with an ad : %@";
static NSString *const UMSAdColonyUnknownError = @"Adapter AdColony unknown error : %@";
