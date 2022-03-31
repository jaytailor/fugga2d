#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSUnitySdk.h"

@interface UMSUnityRewardedAdapter : NSObject <UMSRewardedAdapter>

- (instancetype)initWithUnitySdk:(UMSUnitySdk *)unitySdk;

- (NSString *)               getVersion;

- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end
