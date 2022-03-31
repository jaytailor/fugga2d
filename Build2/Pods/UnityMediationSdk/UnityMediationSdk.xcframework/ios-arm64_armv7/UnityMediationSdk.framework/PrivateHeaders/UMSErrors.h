
#pragma mark - Errors

static NSString *const kUMSErrorDomain = @"com.unity3d.ads.mediation.UnityMediationSdk";

/**
 * Enum containing Load failure errors related to Adapters.
 */
typedef NS_ENUM (NSInteger, UMSError) {
    /**
     * Default unknown error.
     */
    UMSErrorUnknown,
    /**
     * Error used when the Initialization Request fails with an exception.
     */
    UMSErrorRequestInitializationResponseException,
    /**
     * A function call to an adapter resulted in an exception
     */
    UMSErrorAdNetworkAdapterCallEncounteredAnException
};
