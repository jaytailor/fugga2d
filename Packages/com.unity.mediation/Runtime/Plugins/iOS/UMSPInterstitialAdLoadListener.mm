#import "UMSPInterstitialAdLoadListener.h"

@implementation UMSPInterstitialAdLoadListener

- (id)initWithSuccessCallback:(LoadSuccessCallback)loadSuccess failCallback:(LoadFailCallback)loadFail {
    self = [super init];

    if (self) {
        self.loadSuccess = loadSuccess;
        self.loadFail = loadFail;
    }

    return self;
}

- (void)onInterstitialFailedLoad:(UMSInterstitialAd *)interstitialAd error:(UMSLoadError)error message:(NSString *)message {
    if (self.loadFail) {
        self.loadFail((__bridge void *)interstitialAd, (int)error, [message UTF8String]);
    }
}

- (void)onInterstitialLoaded:(UMSInterstitialAd *)interstitialAd {
    if (self.loadSuccess) {
        self.loadSuccess((__bridge void *)interstitialAd);
    }
}

@end

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPInterstitialAdLoadListenerCreate(LoadSuccessCallback loadSuccessCallback, LoadFailCallback loadFailCallback) {
    UMSPInterstitialAdLoadListener *listener = [[UMSPInterstitialAdLoadListener alloc]
                                                initWithSuccessCallback:loadSuccessCallback failCallback:loadFailCallback];

    return (__bridge_retained void *)listener;
}

void UMSPInterstitialAdLoadListenerDestroy(void *ptr) {
    if (!ptr) return;

    UMSPInterstitialAdLoadListener *listener = (__bridge_transfer UMSPInterstitialAdLoadListener *)ptr;

    listener.loadSuccess = nil;
    listener.loadFail = nil;
}

#ifdef __cplusplus
}
#endif
