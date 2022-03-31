#import <UnityAds/UnityAds.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSUnitySdk.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSUnityInterstitialAd : NSObject <UMSInterstitialAdapterAd>

- (instancetype)initWithUnitySdk:(UMSUnitySdk *)unitySdk
                   configuration:(UMSAdapterConfiguration *)configuration;

@end

NS_ASSUME_NONNULL_END
