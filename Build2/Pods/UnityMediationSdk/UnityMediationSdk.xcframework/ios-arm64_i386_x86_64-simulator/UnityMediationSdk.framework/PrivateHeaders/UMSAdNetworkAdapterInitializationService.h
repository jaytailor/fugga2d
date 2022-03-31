#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationService.h"
#import "UMSDiagnosticServiceProtocol.h"
#import "UMSMediationAdapterFactoryRegistry.h"

@interface UMSAdNetworkAdapterInitializationService : NSObject <UMSAdNetworkInitializationService>

- (instancetype)initWithDiagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService
          mediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry;

@end
