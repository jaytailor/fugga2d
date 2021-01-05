#import <Foundation/Foundation.h>
#import "UMSImpressionListener.h"
#import "UMSImpressionData.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSImpressionEventPublisher : NSObject
+ (void)subscribe:(id<UMSImpressionListener>)listener;
+ (void)unsubscribe:(id<UMSImpressionListener>)listener;
@end

NS_ASSUME_NONNULL_END
