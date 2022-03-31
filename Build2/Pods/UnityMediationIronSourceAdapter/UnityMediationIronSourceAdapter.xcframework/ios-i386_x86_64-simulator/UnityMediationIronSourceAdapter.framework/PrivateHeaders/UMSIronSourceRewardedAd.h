#import <IronSource/IronSource.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSIronSourceDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSIronSourceRewardedAd : NSObject <UMSRewardedAdapterAd>

- (instancetype _Nullable)initWithDelegateSerivce:(UMSIronSourceDelegateService *)delegateService
                                           appKey:(NSString *_Nullable)appKey
                                       instanceId:(NSString *_Nullable)instanceId
                                              adm:(NSString *_Nullable)adm
                             privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

- (void)                  passDataPrivacyConsent;

- (NSString *_Nullable)stringConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

- (BOOL)booleanConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
