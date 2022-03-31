#import <Foundation/Foundation.h>
#import <UnityMediationInstantiationService/UnityMediationInstantiationService.h>
#import "UMSAdNetworkAdapterProtocol.h"

@protocol UMSAdNetworkInitializationDelegate;

@protocol UMSAdNetworkInitializationAdapterProtocol <NSObject>

- (void)initializeWithDelegate:(id <UMSAdNetworkInitializationDelegate>)delegate
                    parameters:(NSDictionary<NSString *, NSString *> *)parameters;

- (NSString *)                            getAdapterClassName;

- (void)getHeaderBiddingTokenWithCompletion:(UMSGetHeaderBiddingTokenCompletionHandler)completionHandler;

- (NSString *)                            getAdapterVersion;

- (NSString *)                            getAdNetworkSdkVersion;

- (UMISAdNetworkName)                     getAdNetworkName;

- (NSDictionary<NSString *, NSString *> *)getInitParameters;

@end
