#import <Foundation/Foundation.h>
#import <os/log.h>

NS_ASSUME_NONNULL_BEGIN

// Wrapper implementation of the functionality in <os/log.h>.
// This is done in case we need to swap out logging functionality
// in the future it can be done rather easily.
/**
 * Unity Mediation's logging class. All log messages from the sdk are sent through this class. This class is modeled after apple's [\<os/log.h\>](https://developer.apple.com/documentation/os/logging).
 */
@interface UMSLogger : NSObject

/**
 * Log NSString at the default level.
 *
 * @param logString NSString to be logged.
 */
+ (void)logWithString:(NSString *)logString;

/**
 * Log NSString at the info level.
 *
 * @param logString NSString to be logged.
 */
+ (void)logInfoWithString:(NSString *)logString;

/**
 * Log NSString at the debug level.
 *
 * @param logString NSString to be logged.
 */
+ (void)logDebugWithString:(NSString *)logString;

/**
 * Log NSString at the error level.
 *
 * @param logString NSString to be logged.
 */
+ (void)logErrorWithString:(NSString *)logString;

/**
 * Log NSString at the fault level.
 *
 * @param logString NSString to be logged.
 */
+ (void)logFaultWithString:(NSString *)logString;

/**
 * Disable UMSLogger.
 *
 * This will prevent all messages from being logged.
 *
 */
+ (void)disable;

/**
 * Enable the UMSLogger.
 *
 * This will allow log messages to be sent to the OS_LOG_DEFAULT.
 * The UMSLogger is enabled by default.
 *
 */
+ (void)enable;

/**
 * Set the specific os_log_t that log messages should be output to.
 */
+ (void)setLog:(os_log_t)log;

@end

NS_ASSUME_NONNULL_END
