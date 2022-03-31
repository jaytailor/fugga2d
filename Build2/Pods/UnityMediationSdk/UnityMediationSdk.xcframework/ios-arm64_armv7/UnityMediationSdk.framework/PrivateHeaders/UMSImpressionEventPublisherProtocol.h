#import <Foundation/Foundation.h>
#import "UMSImpressionDelegate.h"
#import "UMSImpressionData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSImpressionEventPublisherProtocol <NSObject>
- (void)subscribe:(id <UMSImpressionDelegate>)delegate;

- (void)unsubscribe:(id <UMSImpressionDelegate>)delegate;

- (void)notifyImpression:(NSString *)adUnitId
          impressionData:(nullable UMSImpressionData *)impressionData;

- (void)clear;
@end

NS_ASSUME_NONNULL_END
