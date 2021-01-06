#import "UMSPImpressionListener.h"

@implementation UMSPImpressionListener

- (id)initWithCallback:(ImpressionCallback)onImpression {
    self = [super init];

    if (self) {
        self.onImpression = onImpression;
    }

    return self;
}

- (void)onImpressionWithAdUnitId:(NSString *)adUnitId impressionData:(UMSImpressionData *)impressionData {
    if (!self.onImpression) {
        return;
    }

    UMSPImpressionData unityImpressionData;

    if (impressionData) {
        unityImpressionData.Timestamp = [impressionData.timestamp UTF8String];
        unityImpressionData.AdUnitName = [impressionData.adUnitName UTF8String];
        unityImpressionData.AdUnitId = [impressionData.adUnitId UTF8String];
        unityImpressionData.AdUnitFormat = [impressionData.adUnitFormat UTF8String];
        unityImpressionData.ImpressionId = [impressionData.impressionId UTF8String];
        unityImpressionData.Currency = [impressionData.currency UTF8String];
        unityImpressionData.RevenueAccuracy = [impressionData.revenueAccuracy UTF8String];
        unityImpressionData.PublisherRevenue = [impressionData.publisherRevenue UTF8String];
        unityImpressionData.AdSourceName = [impressionData.adSourceName UTF8String];
        unityImpressionData.AdSourceInstance = [impressionData.adSourceInstance UTF8String];
        unityImpressionData.AppVersion = [impressionData.appVersion UTF8String];
        unityImpressionData.LineItemId = [impressionData.lineItemId UTF8String];
        unityImpressionData.LineItemName = [impressionData.lineItemName UTF8String];
        unityImpressionData.LineItemPriority = [impressionData.lineItemPriority UTF8String];
        unityImpressionData.Country = [impressionData.country UTF8String];
    }

    self.onImpression([adUnitId UTF8String], impressionData ? &unityImpressionData : nil);
}

@end

#ifdef __cplusplus
extern "C" {
#endif

void * UMSPImpressionListenerCreate(ImpressionCallback impressionCallback) {
    UMSPImpressionListener *listener = [[UMSPImpressionListener alloc] initWithCallback:impressionCallback];

    return (__bridge_retained void *)listener;
}

void UMSPImpressionListenerDestroy(void *ptr) {
    if (!ptr) return;

    UMSPImpressionListener *listener = (__bridge_transfer UMSPImpressionListener *)ptr;

    listener.onImpression = nil;
}

#ifdef __cplusplus
}

#endif
