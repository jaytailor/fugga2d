#import <UnityMediationSdk/UnityMediationSdk.h>

typedef struct {
    const char *Timestamp;
    const char *AdUnitName;
    const char *AdUnitId;
    const char *AdUnitFormat;
    const char *ImpressionId;
    const char *Currency;
    const char *RevenueAccuracy;
    const char *PublisherRevenue;
    const char *AdSourceName;
    const char *AdSourceInstance;
    const char *AppVersion;
    const char *LineItemId;
    const char *LineItemName;
    const char *LineItemPriority;
    const char *Country;
} UMSPImpressionData;

typedef void (*ImpressionCallback)(const char *adUnitId, UMSPImpressionData *impressionData);

@interface UMSPImpressionListener : NSObject<UMSImpressionListener>
@property (assign) ImpressionCallback onImpression;
- (id)initWithCallback:(ImpressionCallback)onImpression;
@end