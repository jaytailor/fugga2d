#import <UnityMediationSdk/UnityMediationSdk.h>

typedef void (*InitSuccessCallback)();
typedef void (*InitFailureCallback)(int, const char *);

static InitSuccessCallback s_InitializationSuccess;
static InitFailureCallback s_InitializationFailed;

@interface UMSPInitializeDelegate : NSObject <UMSInitializationDelegate>
@end

@implementation UMSPInitializeDelegate

- (void)onInitializationComplete {
    if (s_InitializationSuccess) {
        s_InitializationSuccess();
    }
}

- (void)onInitializationFailed:(UMSSdkInitializationError)errorCode message:(NSString *)message {
    if (s_InitializationFailed) {
        s_InitializationFailed((int)errorCode, [message UTF8String]);
    }
}

@end

#ifdef __cplusplus
extern "C" {
#endif

int UMSPUnityMediationGetInitializationState() {
    return (int)[UMSUnityMediation getInitializationState];
}

void UMSPUnityMediationInitialize(const char *gameId, InitSuccessCallback successCallback, InitFailureCallback failCallback) {
    s_InitializationSuccess = successCallback;
    s_InitializationFailed = failCallback;
    NSString *convertedGameId = [NSString stringWithUTF8String:gameId];

    [UMSUnityMediation initializeWithGameId:convertedGameId delegate:[UMSPInitializeDelegate new]];
}

#ifdef __cplusplus
}
#endif
