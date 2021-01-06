#import <Foundation/Foundation.h>
#import "UMSInitializationError.h"

@protocol UMSInitializationListener <NSObject>

- (void)onInitializationComplete;

- (void)onInitializationFailed:(UMSInitializationError)errorCode message:(NSString *)message;

@end
