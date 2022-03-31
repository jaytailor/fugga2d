#import <Foundation/Foundation.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSDiagnosticsDeviceInfo : NSObject

+ (UMTSDiagnosticsEvent_DeviceInfo *)diagnosticDeviceInfo;
+ (UMTSNetworkType)                  getTrackingServiceNetworkType;

@end

NS_ASSUME_NONNULL_END
