#import <Foundation/Foundation.h>
#import <FBAudienceNetwork/FBAudienceNetwork.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSFacebookRewardedAd : NSObject <UMSRewardedAdapterAd>

- (instancetype _Nullable)initWithAdplacementId:(NSString *_Nullable)placementID
                                            adm:(NSString *_Nullable)adm
                           privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

- (void)                  passDataPrivacyConsent;

@end
