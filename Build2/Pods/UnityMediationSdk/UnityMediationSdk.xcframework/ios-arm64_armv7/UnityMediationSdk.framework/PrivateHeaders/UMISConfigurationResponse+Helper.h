#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSAdNetwork.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMISConfigurationResponse (Helper)
- (NSString *)  getAdUnitFormatString;

+ (UMSAdNetwork)adNetworkFromAdNetworkName:(UMISAdNetworkName)adNetworkName;

@end

NS_ASSUME_NONNULL_END
