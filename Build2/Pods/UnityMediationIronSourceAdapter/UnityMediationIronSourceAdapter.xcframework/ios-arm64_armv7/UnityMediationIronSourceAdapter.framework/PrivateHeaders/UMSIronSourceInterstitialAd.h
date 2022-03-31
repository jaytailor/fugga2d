#import <UnityMediationSdk/UnityMediationSdk.h>
#import <Foundation/Foundation.h>
#import <IronSource/IronSource.h>
#import "UMSIronSourceDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSIronSourceInterstitialAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype)initWithDelegateService:(UMSIronSourceDelegateService *)delegateService
                                 appKey:(NSString *_Nullable)appKey
                             instanceId:(NSString *_Nullable)instanceId
                                    adm:(NSString *_Nullable)adm
                   privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

- (void)               passDataPrivacyConsent;

- (NSString *_Nullable)stringConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

- (BOOL)booleanConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
