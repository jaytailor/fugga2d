#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdColonyRewardedAdapter : NSObject <UMSRewardedAdapter>

- (NSString *)               getVersion;

- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end

NS_ASSUME_NONNULL_END
