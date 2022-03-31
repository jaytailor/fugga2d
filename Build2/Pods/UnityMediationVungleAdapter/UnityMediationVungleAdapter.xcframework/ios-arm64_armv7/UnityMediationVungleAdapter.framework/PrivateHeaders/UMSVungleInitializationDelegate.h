#import <Foundation/Foundation.h>
#import <VungleSDK/VungleSDK.h>

@interface UMSVungleInitializationDelegate : NSObject <VungleSDKDelegate>

@property (nonatomic, copy) void (^ vungleSDKDidInitializeBlock)(void);
@property (nonatomic, copy) void (^ vungleSDKFailedToInitializeWithErrorBlock)(NSError *error);

@end
