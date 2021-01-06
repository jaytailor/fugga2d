#import <Foundation/Foundation.h>
#import "UMSImpressionListener.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^UMSImpressionListenerOnImpressionBlock)(NSString *adUnitId, UMSImpressionData *_Nullable impressionData);

@interface UMSImpressionListenerWithBlocks : NSObject <UMSImpressionListener>

@property (nonatomic, strong, nullable) UMSImpressionListenerOnImpressionBlock onImpressionBlock;

@end

NS_ASSUME_NONNULL_END
