#import <Foundation/Foundation.h>
#import <VungleSDK/VungleSDK.h>
#import <VungleSDK/VungleSDKHeaderBidding.h>
#import "UMSVungleInitializationDelegate.h"
#import "UMSVungleAdapterDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSVungleDelegateService : NSObject <VungleSDKDelegate, VungleSDKHBDelegate>

- (BOOL)registerDelegate:(id <UMSVungleAdapterDelegate>)vungleAdapterDelegate
             placementId:(NSString *)placementId;

- (void)unregisterDelegateForPlacementId:(NSString *)placementId;

- (void)initializeVungleSdkOnceWithAppId:(NSString *)appId
                  initializationDelegate:(UMSVungleInitializationDelegate *)initializationDelegate;

@end

NS_ASSUME_NONNULL_END
