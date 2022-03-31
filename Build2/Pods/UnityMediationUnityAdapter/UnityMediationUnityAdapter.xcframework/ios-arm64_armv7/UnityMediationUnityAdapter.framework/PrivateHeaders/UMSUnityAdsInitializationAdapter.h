#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSUnitySdk.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSUnityAdsInitializationAdapter : NSObject <UMSAdNetworkAdapterProtocol>

- (instancetype)initWithUnitySdk:(UMSUnitySdk *)unitySdk;

@end

NS_ASSUME_NONNULL_END
