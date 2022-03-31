#import <Foundation/Foundation.h>

/**
 * Enum for ad network initialization errors.
 */
typedef NS_ENUM (NSInteger, UMSAdapterInitializationError) {
    /**
     * Default unknown error.
     */
    UMSAdapterInitializationErrorUnknown,
    /**
     * The ad network experience and error.
     */
    UMSAdapterInitializationErrorAdNetworkError,
    /**
     * The parameters passed to the ad network were missing required information in order to initialize.
     */
    UMSAdapterInitializationErrorAdapterParamFailure,
    /**
     * An adapter to initialize was not found.
     */
    UMSAdapterInitializationErrorAdapterNotFound
};
