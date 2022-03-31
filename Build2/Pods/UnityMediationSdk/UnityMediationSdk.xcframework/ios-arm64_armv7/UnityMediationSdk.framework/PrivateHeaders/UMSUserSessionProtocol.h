#import <Foundation/Foundation.h>

/**
 * Protocol definition for an object that supplies a session id.
 */
@protocol UMSUserSessionProtocol <NSObject>

/**
 * Get the current session ID. This ID should be the same across a single user session.
 * @return NSUUID
 */
- (NSUUID *)getSessionId;

@end
