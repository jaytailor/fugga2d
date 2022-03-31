#import "UMSAdapterConfiguration.h"

@interface UMSAdapterConfiguration ()

- (instancetype)initWithAdapterParameters:(NSDictionary<NSString *, NSString *> *)adapterParameters privacyLawParameters:(UMSDataPrivacyParameters *)privacyLawParameters;

@end
