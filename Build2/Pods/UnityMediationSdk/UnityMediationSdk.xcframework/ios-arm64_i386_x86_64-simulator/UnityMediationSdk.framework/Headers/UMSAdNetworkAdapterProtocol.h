#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationDelegate.h"
#import "UMSAdapterConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Block definition.
 * This function should be called with either a token or error. Never both.
 */
typedef void (^UMSGetHeaderBiddingTokenCompletionHandler)(NSString *_Nullable token, NSError *_Nullable error);

/**
 * A protocol for ad networks to implement to provide the following functionality:
 *
 * - Ad network SDK initialization.
 * - Header bidding token.
 */
@protocol UMSAdNetworkAdapterProtocol <NSObject>

/**
 * Initialize call to tell ad networks to do their initialization logic.
 * @param delegate A `UMSAdNetworkInitializationDelegate` object to be notified when initialization is complete or has failed.
 * @param parameters A `UMSAdapterConfiguration` object of keys and values of data needed for the ad network to initialize.
 */
- (void)initializeWithDelegate:(id <UMSAdNetworkInitializationDelegate>)delegate
                    parameters:(UMSAdapterConfiguration *)parameters;

/**
 * Returns NSString version of the ad network SDK.
 *
 * @return NSString.
 */
- (NSString *)getAdNetworkSdkVersion;

/**
 * Returns NSString version for the ad network adapter's version.
 *
 * @return NSString
 */
- (NSString *)getAdapterVersion;

/**
 * Returns NSString containing the name of the ad network.
 *
 * Example: "UNITY"
 *
 * @return NSString
 */
- (NSString *)getNetworkName;


/**
 * Each call to this function should return a unique token in the completion handler that will be passed to our server side header bidder.
 *
 * @param completionHandler Function called with a usable token or an error.
 */
- (void)getHeaderBiddingTokenWithCompletion:(UMSGetHeaderBiddingTokenCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
