#import "UMSImpressionEventPublisher.h"
#import "UMSImpressionEventPublisherProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Private module Interface to the UnityMediationSDK. Exposes methods to allow for the SDK to send notifyImpression:impressionData: and clear call
 *
 */

@interface UMSImpressionEventPublisher (UMSImpressionEventPublisherExtension) <UMSImpressionEventPublisherProtocol>
+ (instancetype)sharedInstance;
@end

NS_ASSUME_NONNULL_END
