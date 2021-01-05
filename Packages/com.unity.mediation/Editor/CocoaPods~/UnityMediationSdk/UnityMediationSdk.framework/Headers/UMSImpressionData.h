#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSImpressionData : NSObject
@property (nonatomic, copy, nullable) NSString *adUnitId;
@property (nonatomic, copy, nullable) NSString *adUnitName;
@property (nonatomic, copy, nullable) NSString *adUnitFormat;
@property (nonatomic, copy, nullable) NSString *impressionId;
@property (nonatomic, copy, nullable) NSString *currency;
@property (nonatomic, copy, nullable) NSString *revenueAccuracy;
@property (nonatomic, copy, nullable) NSString *publisherRevenue;
@property (nonatomic, copy, nullable) NSString *adSourceName;
@property (nonatomic, copy, nullable) NSString *adSourceInstance;
@property (nonatomic, copy, nullable) NSString *appVersion;
@property (nonatomic, copy, nullable) NSString *lineItemId;
@property (nonatomic, copy, nullable) NSString *lineItemName;
@property (nonatomic, copy, nullable) NSString *lineItemPriority;
@property (nonatomic, copy, nullable) NSString *country;
@property (nonatomic, copy, nullable) NSString *timestamp;
@property (nonatomic, copy, nullable) NSString *instanceId;
- (NSDictionary *)getJsonRepresentation;
@end

NS_ASSUME_NONNULL_END
