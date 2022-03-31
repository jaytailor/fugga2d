#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSConfigurationDeviceInfo : NSObject

+ (UMISConfigurationRequest_DeviceInformation *)configurationRequestDeviceInfoWithUserAgent:(NSString *_Nullable)userAgent;

+ (UMISNetworkType)                             getInstantiationServiceNetworkType;

@end

NS_ASSUME_NONNULL_END
