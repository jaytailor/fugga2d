#import <AppLovinSDK/AppLovinSDK.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSAppLovinInterstitialAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype _Nullable)initWithSdkKey:(NSString *_Nullable)sdkKey
                                  zoneId:(NSString *_Nullable)zoneId
                    privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters
                                testMode:(BOOL)testMode;

- (void)                  passDataPrivacyConsent;

- (BOOL)booleanStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end
