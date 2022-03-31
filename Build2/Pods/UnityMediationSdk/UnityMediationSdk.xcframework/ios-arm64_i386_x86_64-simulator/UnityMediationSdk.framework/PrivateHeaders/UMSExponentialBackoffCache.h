#import <Foundation/Foundation.h>

@interface UMSExponentialBackoffCache : NSObject

- (void)incrementCountForKey:(NSString *)key;

- (void)clearCountForKey:(NSString *)key;

- (int)getDelayInSecondsForKey:(NSString *)key;

@end
