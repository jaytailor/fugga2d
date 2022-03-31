#import <Foundation/Foundation.h>
#import "UMSAdapterInitializationError.h"

/**
 * A protocol for an object to notify the UnityMediationSdk about an adapter's initialization completion.
 */
@protocol UMSAdNetworkInitializationDelegate <NSObject>

/**
 * Notify the UnityMediationSdk that the ad network adapter has successfully completed initialization of the ad network SDK.
 */
- (void)onInitializationComplete;

/**
 * Notify the UnityMediationSdk that the ad network adapter has failed initialization of the ad network SDK.
 *
 * @param errorCode `UMSInitializationError` enum specific to the failure.
 * @param message NSString message specific to the failure.
 */
- (void)onInitializationFailed:(UMSAdapterInitializationError)errorCode message:(NSString *)message;

@end
