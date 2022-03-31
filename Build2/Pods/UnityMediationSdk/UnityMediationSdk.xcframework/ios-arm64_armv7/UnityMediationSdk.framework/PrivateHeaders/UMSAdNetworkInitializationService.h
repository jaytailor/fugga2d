#import <Foundation/Foundation.h>
#import "UMSAdNetworkInitializationAdapterProtocol.h"
#import "UMSAdNetworkInitializationInformation.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UMSAdNetworkInitializationService <NSObject>

- (void)initializeAdNetworkAdaptersWithGameId:(NSString * _Nullable)gameId
                               installationId:(NSString * _Nullable)installationId
                               adapterClasses:(NSArray<UMISInitializationResponse_AdapterClass *> *)adapterClasses;

- (NSDictionary<NSNumber *, UMSAdNetworkInitializationInformation *> *)getHeaderBiddingAdapters;

@end

NS_ASSUME_NONNULL_END
