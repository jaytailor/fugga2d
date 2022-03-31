#import <Foundation/Foundation.h>
#import "UMISConfigurationResponse+Helper.h"
#import "UMSAdNetworkInitializationAdapterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM (NSInteger, UMSAdNetworkInitializationState) {
    UMSAdNetworkInitializationStateUnknown       = 0,
    UMSAdNetworkInitializationStateUninitialized = 1,
    UMSAdNetworkInitializationStateInitializing  = 2,
    UMSAdNetworkInitializationStateInitialized   = 3,
    UMSAdNetworkInitializationStateFailed        = 4
};

@interface UMSAdNetworkInitializationInformation : NSObject

@property (nonatomic, assign, readonly) UMSAdNetworkInitializationState adNetworkInitializationState;
@property (nonatomic, strong, readonly, nullable) id <UMSAdNetworkInitializationAdapterProtocol> adNetworkInitializationAdapter;
@property (nonatomic, assign, readonly) UMISUsageType usageType;

- (instancetype)initWithAdNetworkInitializationAdapter:(id <UMSAdNetworkInitializationAdapterProtocol> _Nullable)adNetworkInitializationAdapter
                          adNetworkInitializationState:(UMSAdNetworkInitializationState)adNetworkInitializationState
                                             usageType:(UMISUsageType)usageType;

@end

NS_ASSUME_NONNULL_END
