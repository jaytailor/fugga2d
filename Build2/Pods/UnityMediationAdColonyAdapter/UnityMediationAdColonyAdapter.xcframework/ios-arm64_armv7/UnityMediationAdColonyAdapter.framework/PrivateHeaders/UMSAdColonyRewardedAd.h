#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import <AdColony/AdColony.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdColonyRewardedAd : NSObject <UMSRewardedAdapterAd>

- (instancetype _Nullable)initWithAppID:(NSString *_Nullable)appID
                                 zoneId:(NSString *_Nullable)zoneId
                                    adm:(NSString *_Nullable)adm
                   privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters
                               testMode:(BOOL)testMode;

- (void)passDataPrivacyConsentToAdColonyAppOptions:(AdColonyAppOptions *_Nullable)adColonyOptions;

- (NSString *_Nullable)stringConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end

NS_ASSUME_NONNULL_END
