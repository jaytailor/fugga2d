#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleRewardedAdapter : NSObject <UMSRewardedAdapter>

- (instancetype)initWithDelegateService:(UMSVungleDelegateService *)delegateService;

- (NSString *)               getVersion;

- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end

NS_ASSUME_NONNULL_END
