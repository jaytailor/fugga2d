#import "UMSS2SRedeemAction.h"
#import "UMSURLSession.h"
#import "UMSUserSessionProtocol.h"
#import "UMSSdkConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface UMSS2SService : NSObject <UMSS2SRedeemAction>

- (instancetype)initWithURLSession:(id <UMSURLSession>)urlSession
                       userSession:(id <UMSUserSessionProtocol>)userSession
                  sdkConfiguration:(id <UMSSdkConfiguration>)sdkConfiguration;

@end

NS_ASSUME_NONNULL_END
