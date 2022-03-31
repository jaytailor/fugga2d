#import "UMSDataPrivacy.h"
#import "UMSDataPrivacyParameters.h"
#import <AppTrackingTransparency/AppTrackingTransparency.h>

/**
 * Private module Interface to the UnityMediationSDK. Exposes methods to allow for the SDK to fetch privacy parameters
 *
 */

@interface UMSDataPrivacy ()

@property (class, nonatomic, readonly) NSSet<NSNumber *> *privacyLaws;
@property (class, nonatomic) BOOL scrubPII;

+ (UMSDataPrivacyParameters *)getDataPrivacyParameters;

+ (UMSConsentStatus)          appTrackingTransparencyStatus;

+ (BOOL)                      isAdvertisingTrackingLimited;

+ (NSString *)                advertisingIdentifier;

+ (UMSConsentStatus)          appTrackingTransparencyWithStatus:(ATTrackingManagerAuthorizationStatus)authorizationStatus API_AVAILABLE(ios(14));

+ (void)setScrubPII:(BOOL)scrubPII;

@end
