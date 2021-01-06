#import "UnityAppController.h"
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSPRewardedAdLoadListener.h"
#import "UMSPRewardedAdShowListener.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPRewardedAdCreate(const char *gameId, const char *adUnitId) {
    NSString *gameIdString = [NSString stringWithUTF8String:gameId];
    NSString *adUnitIdString = [NSString stringWithUTF8String:adUnitId];
    UMSRewardedAd *rewardedAd = [[UMSRewardedAd alloc]
                                 initWithGameId:gameIdString
                                       adUnitId:adUnitIdString];

    return (__bridge_retained void *)rewardedAd;
}

void UMSPRewardedAdLoad(void *ptr, void *listenerPtr) {
    if (!ptr) return;

    UMSRewardedAd *rewardedAd = (__bridge UMSRewardedAd *)ptr;
    UMSPRewardedAdLoadListener *listener = listenerPtr ? (__bridge UMSPRewardedAdLoadListener *)listenerPtr : nil;

    [rewardedAd loadWithListener:listener];
}

void UMSPRewardedAdShow(void *ptr, void *listenerPtr) {
    if (!ptr) return;

    UMSRewardedAd *rewardedAd = (__bridge UMSRewardedAd *)ptr;
    UMSPRewardedAdShowListener *listener = listenerPtr ? (__bridge UMSPRewardedAdShowListener *)listenerPtr : nil;

    UIViewController *viewController = [GetAppController() rootViewController];

    [rewardedAd showWithViewController:viewController
                              listener:listener];
}

const char * UMSPRewardedAdGetAdUnitId(void *ptr) {
    if (!ptr) return nil;

    UMSRewardedAd *rewardedAd = (__bridge UMSRewardedAd *)ptr;
    NSString *adUnitId = [rewardedAd getAdUnitId];

    if (!adUnitId) return nil;

    return strdup([adUnitId UTF8String]);
}

int UMSPRewardedAdGetAdState(void *ptr) {
    if (!ptr) return (int)UMSAdStateUnloaded;

    UMSRewardedAd *rewardedAd = (__bridge UMSRewardedAd *)ptr;

    return (int)[rewardedAd getAdState];
}

#ifdef __cplusplus
}
#endif
