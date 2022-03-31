#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import <UnityMediationTrackingService/UnityMediationTrackingService.h>
#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationAdapterFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSInitializationUtilities : NSObject

+ (NSString *)getAdNetworkNameString:(UMISAdNetworkName)adnetworkName;

+ (NSString *)getUsageTypeString:(UMISUsageType)usageType;

+ (UMTSUsageType)getUMTSUsageTypeWithUMISUsageType:(UMISUsageType)usageType;

@end

NS_ASSUME_NONNULL_END
