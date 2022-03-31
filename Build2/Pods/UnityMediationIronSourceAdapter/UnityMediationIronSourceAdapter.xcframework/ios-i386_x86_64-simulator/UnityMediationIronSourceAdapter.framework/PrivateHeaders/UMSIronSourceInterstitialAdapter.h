#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSIronSourceDelegateService.h"

@interface UMSIronSourceInterstitialAdapter : NSObject <UMSInterstitialAdapter>

- (instancetype)initWithDelegateService:(UMSIronSourceDelegateService *)delegateService;

- (NSString *)                   getVersion;

- (id <UMSInterstitialAdapterAd>)createInterstitialAd:(UMSAdapterConfiguration *)parameters;

@end
