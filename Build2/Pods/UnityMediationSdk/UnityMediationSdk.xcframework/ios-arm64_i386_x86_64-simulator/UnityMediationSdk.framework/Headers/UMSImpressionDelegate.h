#import <Foundation/Foundation.h>
#import "UMSImpressionData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol that an object should implement to be able to receive impression events.
 */
@protocol UMSImpressionDelegate

/**
 * Method to be called when the implementation of this protocol has been subscribed to `UMSImpressionEventPublisher`.
 *
 * @param adUnitId NSString Ad Unit ID that triggered the impression event.
 * @param impressionData `UMSImpressionData` Object with detailed information about an impression.
 */
- (void)onImpressionWithAdUnitId:(NSString *)adUnitId impressionData:(nullable UMSImpressionData *)impressionData;

@end

NS_ASSUME_NONNULL_END
