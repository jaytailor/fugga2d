#import <UnityMediationSdk/UnityMediationSdk.h>

@interface UMSUnityAdapterAdNetworkInitializationDelegate : NSObject <UMSAdNetworkInitializationDelegate>

@property (nonatomic, copy) void (^ onInitializationCompleteBlock)(void);
@property (nonatomic, copy) void (^ onInitializationFailedBlock)(UMSAdapterInitializationError error, NSString *message);

@end
