#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleInterstitialAdapter : NSObject <UMSInterstitialAdapter>

- (instancetype)initWithDelegateService:(UMSVungleDelegateService *)delegateService;

- (NSString *)                   getVersion;

- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end

NS_ASSUME_NONNULL_END
