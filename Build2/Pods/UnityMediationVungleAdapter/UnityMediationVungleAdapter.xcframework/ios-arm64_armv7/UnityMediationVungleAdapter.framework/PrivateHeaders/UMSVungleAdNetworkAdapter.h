#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSVungleDelegateService.h"

@interface UMSVungleAdNetworkAdapter : NSObject <UMSAdNetworkAdapterProtocol>

- (instancetype)initWithDelegateService:(UMSVungleDelegateService *)delegateService;

@end
