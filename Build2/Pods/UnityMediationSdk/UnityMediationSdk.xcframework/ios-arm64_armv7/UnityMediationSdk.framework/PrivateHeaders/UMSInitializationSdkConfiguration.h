#import "UMSSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSInitializationSdkConfiguration : NSObject <UMSSdkConfiguration>

@property (nonatomic, assign) BOOL diagnosticsEnabled;
@property (nonatomic, assign) int64_t initializationDelayInMilliseconds;
@property (nonatomic, assign) int64_t headerBiddingTokenFetchTimeoutInMilliseconds;
@property (nonatomic, assign) int64_t httpMaxNumberOfRetries;
@property (nonatomic, strong, nullable) NSString *trackingHostname;
@property (nonatomic, strong, nullable) NSString *diagnosticEventHostname;
@property (nonatomic, strong) UMSObservable<NSString *> *s2sHostname;

@end

NS_ASSUME_NONNULL_END
