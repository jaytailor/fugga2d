#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSUnityInterstitialAdapter : NSObject <UMSInterstitialAdapter>

- (NSString *)                   getVersion;

- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end
