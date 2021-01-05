#import <Foundation/Foundation.h>
#import "UMSImpressionData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSImpressionListener

- (void)onImpressionWithAdUnitId:(NSString *)adUnitId impressionData:(nullable UMSImpressionData *)impressionData;

@end

NS_ASSUME_NONNULL_END
