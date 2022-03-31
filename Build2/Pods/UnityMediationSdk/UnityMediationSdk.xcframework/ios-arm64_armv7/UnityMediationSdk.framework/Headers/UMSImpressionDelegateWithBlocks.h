#import <Foundation/Foundation.h>
#import "UMSImpressionDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Typedef of a block to be called when `-[UMSImpressionDelegate onImpressionWithAdUnitId:impressionData:]` is called.
 */
typedef void (^UMSImpressionDelegateOnImpressionBlock)(NSString *adUnitId, UMSImpressionData *_Nullable impressionData);

/**
 * Helper class that implements the `UMSImpressionDelegate` methods and provides block properties that can be set.
 * @code UMSImpressionDelegateWithBlocks *delegate = [[UMSImpressionDelegateWithBlocks alloc] init];
   delegate.onImpressionBlock = ^(NSString *adUnitId, UMSImpressionData *_Nullable impressionData){
     // Do something with the impression data
   }
   [UMSImpressionEventPublisher subscribe:delegate];
 */
@interface UMSImpressionDelegateWithBlocks : NSObject <UMSImpressionDelegate>

/**
 * Property to store a block of type `UMSImpressionDelegateOnImpressionBlock`.
 */
@property (nonatomic, strong, nullable) UMSImpressionDelegateOnImpressionBlock onImpressionBlock;

@end

NS_ASSUME_NONNULL_END
