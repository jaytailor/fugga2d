#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSWaterfallActionData.h"

@interface UMISConfigurationResponse (UMSWaterfallActionData) <UMSWaterfallActionData>

@property (nonatomic, strong, nullable, readonly) NSString *configVersion;
@property (nonatomic, strong, nullable, readonly) NSString *requestId;
@property (nonatomic, strong, nullable, readonly) NSString *waterfallId;
@property (nonatomic, strong, nullable, readonly) NSString *abVariantId;

@end
