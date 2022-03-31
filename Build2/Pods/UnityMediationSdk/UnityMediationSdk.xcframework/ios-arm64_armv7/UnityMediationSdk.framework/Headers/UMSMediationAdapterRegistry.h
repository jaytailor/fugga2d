#import <Foundation/Foundation.h>
#import "UMSMediationAdapterFactory.h"

/**
 * UMSMediationAdapterRegistry is for registering `UMSMediationAdapterFactory` from various ad networks.
 */
@interface UMSMediationAdapterRegistry : NSObject

/**
 * Register a `UMSMediationAdapterFactory` with the mediation sdk.
 * This is necessary for an ad network to supply ads.
 *
 * @param mediationAdapterFactory `UMSMediationAdapterFactory` implementation that provides adapters for various ad types.
 */
+ (void)registerMediationAdapterFactory:(id<UMSMediationAdapterFactory>)mediationAdapterFactory;

@end
