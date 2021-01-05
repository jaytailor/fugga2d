#import "UnityAppController.h"
#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSPInterstitialAdLoadListener.h"
#import "UMSPInterstitialAdShowListener.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPInterstitialAdCreate(const char *gameId, const char *adUnitId) {
    NSString *gameIdString = [NSString stringWithUTF8String:gameId];
    NSString *adUnitIdString = [NSString stringWithUTF8String:adUnitId];
    UMSInterstitialAd *interstitialAd = [[UMSInterstitialAd alloc]
                                         initWithGameId:gameIdString
                                               adUnitId:adUnitIdString];

    return (__bridge_retained void *)interstitialAd;
}

void UMSPInterstitialAdLoad(void *ptr, void *listenerPtr) {
    if (!ptr) return;

    UMSInterstitialAd *interstitialAd = (__bridge UMSInterstitialAd *)ptr;
    UMSPInterstitialAdLoadListener *listener = listenerPtr ? (__bridge UMSPInterstitialAdLoadListener *)listenerPtr : nil;

    [interstitialAd loadWithListener:listener];
}

void UMSPInterstitialAdShow(void *ptr, void *listenerPtr) {
    if (!ptr) return;

    UMSInterstitialAd *interstitialAd = (__bridge UMSInterstitialAd *)ptr;
    UMSPInterstitialAdShowListener *listener = listenerPtr ? (__bridge UMSPInterstitialAdShowListener *)listenerPtr : nil;

    UIViewController *viewController = [GetAppController() rootViewController];

    [interstitialAd showWithViewController:viewController
                                  listener:listener];
}

const char * UMSPInterstitialAdGetAdUnitId(void *ptr) {
    if (!ptr) return nil;

    UMSInterstitialAd *interstitialAd = (__bridge UMSInterstitialAd *)ptr;
    NSString *adUnitId = [interstitialAd getAdUnitId];

    if (!adUnitId) return nil;

    return strdup([adUnitId UTF8String]);
}

int UMSPInterstitialAdGetAdState(void *ptr) {
    if (!ptr) return (int)UMSAdStateUnloaded;

    UMSInterstitialAd *interstitialAd = (__bridge UMSInterstitialAd *)ptr;

    return (int)[interstitialAd getAdState];
}

#ifdef __cplusplus
}
#endif
