#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>


@interface UMSFacebookInterstitialAdapter : NSObject <UMSInterstitialAdapter>

- (NSString *)                   getVersion;

- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end
