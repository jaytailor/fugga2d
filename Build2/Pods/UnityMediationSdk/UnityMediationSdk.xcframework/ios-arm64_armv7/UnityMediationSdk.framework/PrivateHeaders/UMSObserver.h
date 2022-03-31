#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UMSObservable;

@interface UMSObserver : NSObject

@property (nonatomic) void (^observerBlock)(id);
@property (nonatomic, weak, nullable) UMSObservable *observable;

- (void)unregister;

@end

NS_ASSUME_NONNULL_END
