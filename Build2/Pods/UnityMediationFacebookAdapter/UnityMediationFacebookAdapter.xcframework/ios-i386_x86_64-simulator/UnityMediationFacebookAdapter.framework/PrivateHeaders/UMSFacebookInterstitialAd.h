#import <Foundation/Foundation.h>
#import <FBAudienceNetwork/FBAudienceNetwork.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSFacebookInterstitialAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype _Nullable)initWithPlacementId:(NSString *_Nullable)placementID
                                          adm:(NSString *_Nullable)adm
                         privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

- (void)                  passDataPrivacyConsent;

@end
