#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Object with information related to a specific impression event.
 */
@interface UMSImpressionData : NSObject

/**
 * The ID of the ad unit that triggered this impression event.
 */
@property (nonatomic, copy, nullable) NSString *adUnitId;

/**
 * The ad unit name as defined by the publisher.
 */
@property (nonatomic, copy, nullable) NSString *adUnitName;

/**
 * The ad unit format.
 * Examples :
 * - "INTERSTITIAL"
 * - "REWARDED"
 * - "BANNER"
 * - "UNKNOWN"
 */
@property (nonatomic, copy, nullable) NSString *adUnitFormat;

/**
 * A NSString unique ID for this impression.
 */
@property (nonatomic, copy, nullable) NSString *impressionId;

/**
 * NSString representation for the currency type that the `UMSImpressionData.publisherRevenuePerImpressionInMicros` represents.
 */
@property (nonatomic, copy, nullable) NSString *currency;

/**
 * NSString denoting the revenue accuracy type.
 *
 * Examples :
 * - "UMISPubRevAccuracy_UnknownAccuracy"
 * - "UMISPubRevAccuracy_PublisherCpm"
 */
@property (nonatomic, copy, nullable) NSString *revenueAccuracy;

/**
 * int64_t containing the revenue that this impression generated in micros.
 * The type of currency that this field represents is denoted by the `UMSImpressionData.currency`.
 *
 * Example : 12300
 *
 * [Here](https://stackoverflow.com/questions/3730019/why-not-use-double-or-float-to-represent-currency) is an explanation about why this is supplied in micros.
 */
@property (nonatomic, assign) int64_t publisherRevenuePerImpressionInMicros;

/**
 * NSDecimalNumber containing the revenue that this impression generated in base 10.
 * The type of currency that this field represents is denoted by the `UMSImpressionData.currency`.
 *
 * Example : 0.0123
 */
@property (nonatomic, copy, nullable) NSDecimalNumber *publisherRevenuePerImpression;

/**
 * NSString name of the Ad Network serving the impression, for example "UNITY".
 */
@property (nonatomic, copy, nullable) NSString *adSourceName;

/**
 * NSString ID of the Ad Network's ad unit ID / placement ID / zone ID.
 */
@property (nonatomic, copy, nullable) NSString *adSourceInstance;

/**
 * NSString CFBundleVersion from the main bundle info dictionary.
 */
@property (nonatomic, copy, nullable) NSString *appVersion;

/**
 * NSString line item id that generated the impression event.
 */
@property (nonatomic, copy, nullable) NSString *lineItemId;

/**
 * NSString line item name that generated the impression event.
 */
@property (nonatomic, copy, nullable) NSString *lineItemName;

/**
 * NSString line item priority.
 *
 * Examples:
 * - "UMISLineItemPriority_UnknownLineitemPriority"
 * - "UMISLineItemPriority_SortByEcpm"
 */
@property (nonatomic, copy, nullable) NSString *lineItemPriority;

/**
 * NSString country code where the impression occurred.
 */
@property (nonatomic, copy, nullable) NSString *country;

/**
 * NSString timestamp of when the impression event occurred.
 */
@property (nonatomic, copy, nullable) NSString *timestamp;

/**
 * NSString configuration response ID detailing which waterfall the impression originated from.
 */
@property (nonatomic, copy, nullable) NSString *instanceId;

/**
 * Returns NSDictionary<NSString *, NSObject *> containing all of the non-nil fields above.
 *
 * @return NSDictionary<NSString *, NSObject *>
 */
- (NSDictionary<NSString *, NSObject *> *)getJsonRepresentation;

@end

NS_ASSUME_NONNULL_END
