#import <Foundation/Foundation.h>
#import "UMSHeaderBiddingService.h"
#import "UMSAdNetworkInitializationService.h"
#import "UMSDiagnosticServiceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSAdNetworkHeaderBiddingService : NSObject <UMSHeaderBiddingService>

- (instancetype)initWithAdNetworkInitializationService:(id <UMSAdNetworkInitializationService>)adNetworkInitializationService
                                     diagnosticService:(id <UMSDiagnosticServiceProtocol>)diagnosticService;

@end

NS_ASSUME_NONNULL_END
