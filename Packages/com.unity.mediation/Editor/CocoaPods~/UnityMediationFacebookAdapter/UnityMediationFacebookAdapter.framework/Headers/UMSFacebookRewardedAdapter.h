#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>


@interface UMSFacebookRewardedAdapter : NSObject <UMSRewardedAdapter>

- (NSString *)               getVersion;

- (id <UMSRewardedAdapterAd>)createRewardedAd:(UMSAdapterConfiguration *)parameters;

@end
