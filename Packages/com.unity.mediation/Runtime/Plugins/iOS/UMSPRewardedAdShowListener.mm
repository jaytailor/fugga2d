#import "UMSPRewardedAdShowListener.h"

@implementation UMSPRewardedAdShowListener

- (id)initWithStartedCallback:(StartedCallback)started clickedCallback:(ClickedCallback)clicked finishedCallback:(FinishedCallback)finished failedShowCallback:(FailedShowCallback)failedShow userRewardedCallback:(UserRewardedCallback)userRewarded {
    self = [super init];

    if (self) {
        self.started = started;
        self.clicked = clicked;
        self.finished = finished;
        self.failedShow = failedShow;
        self.userRewarded = userRewarded;
    }

    return self;
}

- (void)onRewardedClicked:(UMSRewardedAd *)rewardedAd {
    if (self.clicked) {
        self.clicked((__bridge void *)rewardedAd);
    }
}

- (void)onRewardedClosed:(UMSRewardedAd *)rewardedAd {
    if (self.finished) {
        self.finished((__bridge void *)rewardedAd);
    }
}

- (void)onRewardedFailedShow:(UMSRewardedAd *)rewardedAd error:(UMSShowError)error message:(NSString *)message {
    if (self.failedShow) {
        self.failedShow((__bridge void *)rewardedAd, (int)error, [message UTF8String]);
    }
}

- (void)onRewardedShowed:(UMSRewardedAd *)rewardedAd {
    if (self.started) {
        self.started((__bridge void *)rewardedAd);
    }
}

- (void)onRewardedImpression:(UMSRewardedAd *)rewardedAd {
}

- (void)onUserRewarded:(UMSRewardedAd *)rewardedAd reward:(id<UMSReward>)reward {
    if (self.userRewarded) {
        self.userRewarded((__bridge void *)rewardedAd, [[reward getType] UTF8String], [[reward getAmount] UTF8String]);
    }
}

@end

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPRewardedAdShowListenerCreate(StartedCallback startedCallback, ClickedCallback clickedCallback, FinishedCallback finishedCallback, FailedShowCallback failedShowCallback, UserRewardedCallback userRewardedCallback) {
    UMSPRewardedAdShowListener *listener = [[UMSPRewardedAdShowListener alloc] initWithStartedCallback:startedCallback clickedCallback:clickedCallback finishedCallback:finishedCallback failedShowCallback:failedShowCallback userRewardedCallback:userRewardedCallback];

    return (__bridge_retained void *)listener;
}

void UMSPRewardedAdShowListenerDestroy(void *ptr) {
    if (!ptr) return;

    UMSPRewardedAdShowListener *listener = (__bridge_transfer UMSPRewardedAdShowListener *)ptr;

    listener.started = nil;
    listener.clicked = nil;
    listener.finished = nil;
    listener.failedShow = nil;
    listener.userRewarded = nil;
}

#ifdef __cplusplus
}
#endif
