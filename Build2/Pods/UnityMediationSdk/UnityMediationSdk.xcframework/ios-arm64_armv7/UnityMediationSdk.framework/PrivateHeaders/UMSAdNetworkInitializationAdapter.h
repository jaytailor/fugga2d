#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationAdapterProtocol.h"

@interface UMSAdNetworkInitializationAdapter : NSObject <UMSAdNetworkInitializationAdapterProtocol>

@property (nonatomic, strong) NSString *adapterClassName;
@property (nonatomic, assign) UMISAdNetworkName adNetworkName;
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *adapterInitParameters;
@property (nonatomic, strong) id <UMSAdNetworkAdapterProtocol> adNetworkAdapter;

- (instancetype)initWithAdapterClassName:(id <UMSAdNetworkAdapterProtocol>)adNetworkAdapter
                        adapterClassName:(NSString *)adapterClassName
                           adNetworkName:(UMISAdNetworkName)adNetworkName;

@end
