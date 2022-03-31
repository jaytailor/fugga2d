#import <Foundation/Foundation.h>
#import "UMSUserSessionProtocol.h"

/**
 * Manages session ID across the SDK.
 * There should only be one session ID for an app run.
 */
@interface UMSSessionManager : NSObject <UMSUserSessionProtocol>

/**
 * Get the current session ID
 * @return NSUUID
 */
- (NSUUID *)getSessionId;

@end
