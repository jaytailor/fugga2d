#import <Foundation/Foundation.h>

@interface UMSNumberUtilities : NSObject

+ (NSDecimalNumber *)getBaseTenFromMicroDecimalNumber:(NSDecimalNumber *)microDecimalNumber;

+ (NSDecimalNumber *)getBaseTenFromMilliDecimalNumber:(NSDecimalNumber *)milliDecimalNumber;

+ (NSDecimalNumber *)getNanosFromMillis:(NSDecimalNumber *)milliDecimalNumber;

@end
