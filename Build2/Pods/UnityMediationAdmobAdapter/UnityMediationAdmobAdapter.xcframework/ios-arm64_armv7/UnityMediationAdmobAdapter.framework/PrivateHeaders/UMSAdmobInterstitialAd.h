#import <GoogleMobileAds/GoogleMobileAds.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSAdmobInterstitialAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype _Nullable)initWithAdUnitId:(NSString *_Nullable)adUnitId
                      privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters
                                  testMode:(BOOL)testMode;

- (void)passDataPrivacyConsentToGADRequest:(GADRequest *_Nullable)request;

- (NSString *_Nullable)stringGDPRConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

- (BOOL)booleanConsentStatusFromUMSConsentStatus:(UMSConsentStatus)consentStatus;

@end
