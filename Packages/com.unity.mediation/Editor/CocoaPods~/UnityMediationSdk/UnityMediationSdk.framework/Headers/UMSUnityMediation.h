#import <Foundation/Foundation.h>
#import "UMSInitializationState.h"
#import "UMSInitializationListener.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSUnityMediation : NSObject

+ (void)initializeWithListener:(id <UMSInitializationListener>)listener;

+ (UMSInitializationState)getInitializationState;

@end

NS_ASSUME_NONNULL_END
