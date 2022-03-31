#import <Foundation/Foundation.h>
#import <UnityMediationSdk/UnityMediationSdk.h>
#import <UnityAds/UnityAds.h>

@interface UMSUnitySdk : NSObject

- (void)initializeWithConfiguration:(UMSAdapterConfiguration *)configuration
                       withDelegate:(id<UMSAdNetworkInitializationDelegate>)delegate;

- (BOOL)reservePlacementId:(NSString *)placementId;

- (void)removeReservedPlacementId:(NSString *)placementId;

@end
