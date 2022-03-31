#import <Foundation/Foundation.h>
#import "UMSImpressionDelegate.h"
#import "UMSImpressionData.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Class for developers to subscribe to impression events.
 */
@interface UMSImpressionEventPublisher : NSObject

/**
 * Method to subscribe a delegate to receive impression events.
 *
 * @param delegate `UMSImpressionDelegate` Object that should start receiving `UMSImpressionDelegate` delegate method calls.
 */
+ (void)subscribe:(id<UMSImpressionDelegate>)delegate;

/**
 * Method to unsubscribe a delegate from receiving impression events.
 *
 * @param delegate `UMSImpressionDelegate` Object that should stop receiving `UMSImpressionDelegate` delegate method calls.
 */
+ (void)unsubscribe:(id<UMSImpressionDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
