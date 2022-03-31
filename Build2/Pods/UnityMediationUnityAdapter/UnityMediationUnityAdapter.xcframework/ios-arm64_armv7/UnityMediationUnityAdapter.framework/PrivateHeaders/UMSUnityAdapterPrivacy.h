#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSUnityAdapterPrivacy : NSObject

+ (UADSMetaData *)passDataPrivacyConsent:(UMSDataPrivacyParameters *)privacyLawParameters;

+ (NSNumber *_Nullable)numberConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
