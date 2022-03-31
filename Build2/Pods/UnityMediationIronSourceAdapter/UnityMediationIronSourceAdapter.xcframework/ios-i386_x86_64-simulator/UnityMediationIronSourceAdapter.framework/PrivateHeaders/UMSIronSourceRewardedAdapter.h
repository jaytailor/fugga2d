#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSIronSourceDelegateService.h"

@interface UMSIronSourceRewardedAdapter : NSObject <UMSRewardedAdapter>

- (instancetype)initWithDelegateService:(UMSIronSourceDelegateService *)delegateService;

- (NSString *)               getVersion;

- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end
