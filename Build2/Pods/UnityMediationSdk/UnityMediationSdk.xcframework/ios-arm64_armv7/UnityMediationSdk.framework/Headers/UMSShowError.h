#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing show failure reasons.
 */
typedef NS_ENUM (NSInteger, UMSShowError) {
    /**
     * Default unknown error.
     */
    UMSShowErrorUnknown        = 0,
    /**
     * Show was called when the ad state was `UMSAdState.UMSAdStateLoaded` but the ad network adapter failed to have an ad ready to show.
     * This means that the ad network has previously marked an ad ready for playback but failed to have one ready at the time of show.
     */
    UMSShowErrorAdNotLoaded    = 1,
    /**
     * Show was called and the ad network attempted to show the ad but triggered one of their error callbacks.
     * An example of this would be that an ad was cached but an asset was bad or corrupted.
     */
    UMSShowErrorAdNetworkError = 2,
    // reserved: INVALID_ACTIVITY = 4 on Android
};

/**
 * Utility function to translate a `UMSShowError` into a human readable string.
 *
 * Example:
 *
 * UMSShowErrorAdNotLoaded -> "UMSShowErrorAdNotLoaded"
 *
 * @param error `UMSShowError` to turn into a string.
 * @return NSString
 */
NSString * NSStringFromUMSShowError(UMSShowError error);

NS_ASSUME_NONNULL_END
