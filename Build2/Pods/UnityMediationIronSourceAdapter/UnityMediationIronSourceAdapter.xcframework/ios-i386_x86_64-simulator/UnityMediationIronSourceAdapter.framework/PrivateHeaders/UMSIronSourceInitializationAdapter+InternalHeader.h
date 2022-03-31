#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSIronSourceInitializationAdapter (Internal)

- (void)               passDataPrivacyConsent;
- (NSString *_Nullable)stringConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;
- (BOOL)booleanConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end
