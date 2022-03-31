#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSIronSourceDelegateService.h"

@interface UMSIronSourceInitializationAdapter : NSObject <UMSAdNetworkAdapterProtocol>

- (instancetype)initWithDelegateService:(UMSIronSourceDelegateService *)delegateService;

@end
