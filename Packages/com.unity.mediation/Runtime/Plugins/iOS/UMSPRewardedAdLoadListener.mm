#import "UMSPRewardedAdLoadListener.h"

@implementation UMSPRewardedAdLoadListener

- (id)initWithSuccessCallback:(LoadSuccessCallback)loadSuccess failCallback:(LoadFailCallback)loadFail {
    self = [super init];

    if (self) {
        self.loadSuccess = loadSuccess;
        self.loadFail = loadFail;
    }

    return self;
}

- (void)onRewardedFailedLoad:(UMSRewardedAd *)rewardedAd error:(UMSLoadError)error message:(NSString *)message {
    if (self.loadFail) {
        self.loadFail((__bridge void *)rewardedAd, (int)error, [message UTF8String]);
    }
}

- (void)onRewardedLoaded:(UMSRewardedAd *)rewardedAd {
    if (self.loadSuccess) {
        self.loadSuccess((__bridge void *)rewardedAd);
    }
}

@end

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPRewardedAdLoadListenerCreate(LoadSuccessCallback loadSuccessCallback, LoadFailCallback loadFailCallback) {
    UMSPRewardedAdLoadListener *listener = [[UMSPRewardedAdLoadListener alloc]
                                            initWithSuccessCallback:loadSuccessCallback failCallback:loadFailCallback];

    return (__bridge_retained void *)listener;
}

void UMSPRewardedAdLoadListenerDestroy(void *ptr) {
    if (!ptr) return;

    UMSPRewardedAdLoadListener *listener = (__bridge_transfer UMSPRewardedAdLoadListener *)ptr;

    listener.loadSuccess = nil;
    listener.loadFail = nil;
}

#ifdef __cplusplus
}
#endif
