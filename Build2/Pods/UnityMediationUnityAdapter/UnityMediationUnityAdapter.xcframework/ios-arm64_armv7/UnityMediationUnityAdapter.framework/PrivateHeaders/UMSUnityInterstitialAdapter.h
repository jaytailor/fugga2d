#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSUnitySdk.h"

@interface UMSUnityInterstitialAdapter : NSObject <UMSInterstitialAdapter>

- (instancetype)initWithUnitySdk:(UMSUnitySdk *)unitySdk;

- (NSString *)                   getVersion;

- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end
