#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSConfigurationPlatformInfo : NSObject

+ (UMISConfigurationRequest_PlatformInformation *)configurationRequestPlatformInfo;

+ (UMISConfigurationRequest_PlatformInformation *)configurationRequestPlatformInfoWithInfoDictionary:(NSDictionary *)infoDictionary;

@end

NS_ASSUME_NONNULL_END
