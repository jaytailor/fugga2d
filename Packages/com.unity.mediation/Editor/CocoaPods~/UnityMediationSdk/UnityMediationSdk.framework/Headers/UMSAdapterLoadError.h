#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing Load failure errors related to Adapters.
 */
typedef NS_ENUM (NSInteger, UMSAdapterLoadError) {
    UMSAdapterLoadErrorUnknown,
    UMSAdapterLoadErrorAdapterNotFound,
    UMSAdapterLoadErrorAdapterAdNetworkError,
    UMSAdapterLoadErrorInitializationError,
    UMSAdapterLoadErrorInvalidAdUnitId,
    UMSAdapterLoadErrorLineItemTimedOut,
    UMSAdapterLoadErrorNoFill,
    UMSAdapterLoadErrorAdapterParamFailure,
    UMSAdapterLoadErrorTooManyRequests,
    UMSAdapterLoadErrorUserError,
    UMSAdapterLoadErrorLoadThrewAnException
};

NSString * NSStringFromUMSAdapterLoadError(UMSAdapterLoadError error);

NS_ASSUME_NONNULL_END
