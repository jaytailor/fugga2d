#import <VungleSDK/VungleSDK.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleRewardedAd : NSObject <UMSRewardedAdapterAd>

- (instancetype _Nullable)initWithDelegateService:(UMSVungleDelegateService *)delegateService
                                            appId:(NSString *_Nullable)appId
                                      placementId:(NSString *_Nullable)placementId
                             privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters;

@end

NS_ASSUME_NONNULL_END
