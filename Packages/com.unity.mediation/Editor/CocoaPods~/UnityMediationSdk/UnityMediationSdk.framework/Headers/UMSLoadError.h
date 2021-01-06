#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing Load failure reasons.
 */
typedef NS_ENUM (NSInteger, UMSLoadError) {
    UMSLoadErrorNoFill,
    UMSLoadErrorNetworkError,
    UMSLoadErrorUnknown,
};

NSString * NSStringFromUMSLoadError(UMSLoadError error);

NS_ASSUME_NONNULL_END
