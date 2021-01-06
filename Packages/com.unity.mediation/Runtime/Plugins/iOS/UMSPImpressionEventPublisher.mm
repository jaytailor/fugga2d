#import <UnityMediationSdk/UnityMediationSdk.h>
#import "UMSPImpressionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

void UMSPImpressionEventPublisherSubscribe(void *ptr) {
    if (!ptr) return;

    UMSPImpressionListener *listener = (__bridge UMSPImpressionListener *)ptr;

    [UMSImpressionEventPublisher subscribe:listener];
}

void UMSPImpressionEventPublisherUnsubscribe(void *ptr) {
    if (!ptr) return;

    UMSPImpressionListener *listener = (__bridge UMSPImpressionListener *)ptr;

    [UMSImpressionEventPublisher unsubscribe:listener];
}

#ifdef __cplusplus
}
#endif
