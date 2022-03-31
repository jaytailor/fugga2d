#import <Foundation/Foundation.h>
#import <VungleSdk/VungleSdk.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleInterstitialHeaderBiddedAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype _Nullable)initWithDelegateService:(UMSVungleDelegateService *)delegateService
                                            appId:(NSString *_Nullable)appId
                                      placementId:(NSString *_Nullable)placementId
                             privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters
                                         adMarkup:(NSString *_Nullable)adMarkup;

@end

NS_ASSUME_NONNULL_END
