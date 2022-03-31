#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing Load failure errors related to Adapters.
 */
typedef NS_ENUM (NSInteger, UMSAdapterLoadError) {
    /**
     * Default unknown error.
     */
    UMSAdapterLoadErrorUnknown,
    /**
     * No adapter with a specific class name could be found. This likely means that the specific ad network adapter is not installed.
     */
    UMSAdapterLoadErrorAdapterNotFound,
    /**
     * The ad network experienced an error.
     */
    UMSAdapterLoadErrorAdapterAdNetworkError,
    /**
     * The ad network failed to initialize.
     */
    UMSAdapterLoadErrorInitializationError,
    /**
     * The line item for a specific ad network took longer than the specified time out.
     */
    UMSAdapterLoadErrorLineItemTimedOut,
    /**
     * The ad network decided not to fill with ad content.
     */
    UMSAdapterLoadErrorNoFill,
    /**
     * The line item for this ad network is missing required information in order to function.
     */
    UMSAdapterLoadErrorAdapterParamFailure,
    /**
     * Too many requests for ads have been made to an ad network SDK.
     */
    UMSAdapterLoadErrorTooManyRequests,
    /**
     * When trying to load an ad from an adapter an exception was thrown.
     */
    UMSAdapterLoadErrorLoadThrewAnException
};

/**
 * Utility function to translate a `UMSAdapterLoadError` into a human readable string.
 *
 * Example:
 *
 * UMSAdapterLoadErrorAdapterNotFound -> "UMSAdapterLoadErrorAdapterNotFound"
 *
 * @param error `UMSAdapterLoadError` to turn into a string.
 * @return NSString
 */
NSString * NSStringFromUMSAdapterLoadError(UMSAdapterLoadError error);

NS_ASSUME_NONNULL_END
