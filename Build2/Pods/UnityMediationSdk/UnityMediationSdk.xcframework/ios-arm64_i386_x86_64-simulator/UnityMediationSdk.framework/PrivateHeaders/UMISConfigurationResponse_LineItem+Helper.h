#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMISConfigurationResponse_LineItem (Helper)
- (NSString *)       getPublisherRevenuePerImpressionInMicrosString;
- (NSDecimalNumber *)getPublisherRevenuePerImpression;
- (NSString *)       getPubRevAccuracyString;
- (NSString *)       getLineItemPriorityTypeString;
@end

NS_ASSUME_NONNULL_END
