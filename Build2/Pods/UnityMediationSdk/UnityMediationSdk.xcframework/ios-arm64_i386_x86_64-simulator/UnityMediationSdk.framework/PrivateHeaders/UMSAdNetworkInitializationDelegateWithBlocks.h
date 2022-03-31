#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationDelegate.h"

@interface UMSAdNetworkInitializationDelegateWithBlocks : NSObject <UMSAdNetworkInitializationDelegate>

@property (nonatomic, copy) void (^ onInitializationCompleteBlock)(void);
@property (nonatomic, copy) void (^ onInitializationFailedBlock)(UMSAdapterInitializationError errorCode, NSString *message);

@end
