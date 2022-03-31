#import <Foundation/Foundation.h>
#import "UMSObserver.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSObservable<ObjectType> : NSObject

@property (readonly, nonatomic, strong) ObjectType currentValue;

- (UMSObserver *)register :(void (^)(ObjectType)) observerBlock;

- (void)unregister:(UMSObserver *)observer;

- (void)notify:(ObjectType)newValue;

@end

NS_ASSUME_NONNULL_END
