#import <Foundation/Foundation.h>
#import <VungleSDK/VungleSDK.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleRewardedHeaderBiddedAd : NSObject <UMSRewardedAdapterAd>

- (instancetype _Nullable)initWithDelegateService:(UMSVungleDelegateService *)delegateService
                                            appId:(NSString *_Nullable)appId
                                      placementId:(NSString *_Nullable)placementId
                             privacyLawParameters:(UMSDataPrivacyParameters *_Nullable)privacyLawParameters
                                         adMarkup:(NSString *_Nullable)adMarkup;

@end

NS_ASSUME_NONNULL_END
