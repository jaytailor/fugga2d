#import "UMSPInterstitialAdShowListener.h"

@implementation UMSPInterstitialAdShowListener

- (id)initWithStartedCallback:(StartedCallback)started clickedCallback:(ClickedCallback)clicked finishedCallback:(FinishedCallback)finished failedShowCallback:(FailedShowCallback)failedShow {
    self = [super init];

    if (self) {
        self.started = started;
        self.clicked = clicked;
        self.finished = finished;
        self.failedShow = failedShow;
    }

    return self;
}

- (void)onInterstitialClicked:(UMSInterstitialAd *)interstitialAd {
    if (self.clicked) {
        self.clicked((__bridge void *)interstitialAd);
    }
}

- (void)onInterstitialClosed:(UMSInterstitialAd *)interstitialAd {
    if (self.finished) {
        self.finished((__bridge void *)interstitialAd);
    }
}

- (void)onInterstitialFailedShow:(UMSInterstitialAd *)interstitialAd error:(UMSShowError)error message:(NSString *)message {
    if (self.failedShow) {
        self.failedShow((__bridge void *)interstitialAd, (int)error, [message UTF8String]);
    }
}

- (void)onInterstitialImpression:(UMSInterstitialAd *)interstitialAd {
}

- (void)onInterstitialShowed:(UMSInterstitialAd *)interstitialAd {
    if (self.started) {
        self.started((__bridge void *)interstitialAd);
    }
}

@end

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPInterstitialAdShowListenerCreate(StartedCallback startedCallback, ClickedCallback clickedCallback, FinishedCallback finishedCallback, FailedShowCallback failedShowCallback) {
    UMSPInterstitialAdShowListener *listener = [[UMSPInterstitialAdShowListener alloc] initWithStartedCallback:startedCallback clickedCallback:clickedCallback finishedCallback:finishedCallback failedShowCallback:failedShowCallback];

    return (__bridge_retained void *)listener;
}

void UMSPInterstitialAdShowListenerDestroy(void *ptr) {
    if (!ptr) return;

    UMSPInterstitialAdShowListener *listener = (__bridge_transfer UMSPInterstitialAdShowListener *)ptr;

    listener.started = nil;
    listener.clicked = nil;
    listener.finished = nil;
    listener.failedShow = nil;
}

#ifdef __cplusplus
}
#endif
