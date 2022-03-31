#import <Foundation/Foundation.h>
#import "UMSAdNetworkAdapterProtocol.h"
#import "UMSAdNetworkInitializationAdapterProtocol.h"
#import "UMSMediationAdapterFactoryRegistry.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdNetworkInitializationAdapterFactory : NSObject

- (instancetype)initWithMediationAdapterFactoryRegistry:(id <UMSMediationAdapterFactoryRegistry>)mediationAdapterFactoryRegistry;

- (id <UMSAdNetworkInitializationAdapterProtocol> _Nullable)getAdapterWithAdapterClass:(UMISInitializationResponse_AdapterClass *)adapterClass;

@end

NS_ASSUME_NONNULL_END
