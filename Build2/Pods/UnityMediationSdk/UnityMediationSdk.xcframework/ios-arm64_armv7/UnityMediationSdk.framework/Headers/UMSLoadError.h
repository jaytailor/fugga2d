#import <Foundation/Foundation.h>

/**
 * Enum containing load failure reasons.
 */
typedef NS_ENUM (NSInteger, UMSLoadError) {
    /**
     * Default unknown error.
     */
    UMSLoadErrorUnknown,
    /**
     * The ad unit successfully ran through the waterfall but was unable to get fill from any line items.
     */
    UMSLoadErrorNoFill,
    /**
     * A critical HTTP network request has failed.
     */
    UMSLoadErrorNetworkError,
    /**
     * `+[UMSUnityMediation initializeWithConfiguration:]` needs to be called with a valid gameId before loading the ad unit.
     */
    UMSLoadErrorSdkNotInitialized
};
