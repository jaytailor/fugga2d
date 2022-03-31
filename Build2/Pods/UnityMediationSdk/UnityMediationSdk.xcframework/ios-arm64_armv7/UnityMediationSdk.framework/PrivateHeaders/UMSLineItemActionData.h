#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>

@protocol UMSLineItemActionData

@property (nonatomic, strong) NSString *lineItemId;
@property (nonatomic, strong) NSString *adNetworkId;
@property (nonatomic, assign) UMISUsageType usageType;

@end
