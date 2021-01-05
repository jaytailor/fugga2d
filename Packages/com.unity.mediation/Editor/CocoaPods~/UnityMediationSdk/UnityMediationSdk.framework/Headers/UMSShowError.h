#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing Show failure reasons.
 */
typedef NS_ENUM (NSInteger, UMSShowError) {
    UMSShowErrorUnknown        = 0,
    UMSShowErrorAdNotLoaded    = 1,
    UMSShowErrorAdNetworkError = 2,
    // reserved: INVALID_ACTIVITY = 4
};

NSString * NSStringFromUMSShowError(UMSShowError error);

NS_ASSUME_NONNULL_END
