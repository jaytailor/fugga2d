#import <Foundation/Foundation.h>
#import "UMSLoadError.h"

NS_ASSUME_NONNULL_BEGIN

/*
 * The UMSLoadError NSError domain constant.
 */
static NSString *const kUMSLoadErrorDomain = @"com.unity3d.ads.mediation.UnityMediationSdk.UMSLoadError";

/**
 * Utility function to translate a `UMSLoadError` into a human readable string.
 *
 * Example:
 *
 * UMSLoadErrorNoFill -> "UMSLoadErrorNoFill"
 *
 * @param error `UMSLoadError` to turn into a string.
 * @return NSString
 */
NSString * NSStringFromUMSLoadError(UMSLoadError error);

/**
 * Utility function to create a `NSError` from a UMSLoadError.
 *
 * @param loadError `UMSLoadError`
 * @param message `NSString`
 * @return NSError
 */
NSError * NSErrorFromUMSLoadErrorWithMessage(UMSLoadError loadError, NSString *_Nullable message);

/**
 * Utility function to create a `NSError` from a UMSLoadError.
 *
 * @param loadError `UMSLoadError`
 * @return NSError
 */
NSError * NSErrorFromUMSLoadError(UMSLoadError loadError);

/**
 * Utility function to get a `UMSLoadError` from an `NSError`
 *
 * @param error `NSError`
 * @return `UMSLoadError`
 */
UMSLoadError UMSLoadErrorFromNSError(NSError *error);

NS_ASSUME_NONNULL_END
