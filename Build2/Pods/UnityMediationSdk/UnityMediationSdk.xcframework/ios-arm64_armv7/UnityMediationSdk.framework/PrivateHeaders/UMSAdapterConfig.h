#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
/**
 * Class to representing Adapter configuration for configuration request.
 */
@interface UMSAdapterConfig : NSObject

/**
 * adapterClassName The class name adapter used to instantiated itself.
 */
@property (nonatomic, strong) NSString *adapterClassName;

/**
 * headerBiddingToken The token get from adapter.
 */
@property (nonatomic, strong) NSString *headerBiddingToken;

/**
   parameters Extra data for hb auction.
 */
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *parameters;

/**
   adNetworkName The AdNetowrkName of the adapter.
 */
@property (nonatomic, assign) UMISAdNetworkName adNetworkName;

/**
   adapterVersion The AdapterVersion of the adapter.
 */
@property (nonatomic, strong) NSString *adapterVersion;

/**
   sdkVersion The sdkVersion of the adapter.
 */
@property (nonatomic, strong) NSString *sdkVersion;

@end
