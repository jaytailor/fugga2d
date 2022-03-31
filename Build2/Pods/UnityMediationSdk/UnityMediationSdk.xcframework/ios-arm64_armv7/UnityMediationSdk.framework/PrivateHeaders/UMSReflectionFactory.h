#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSReflectionFactory : NSObject

/**
 * Method to reflectively instantiate an Objective-C Class.
 * This will instantiate using [[Class alloc] init].
 *
 * @warning Do not pass a class that does not inherit from NSObject or this will crash!
 *
 * @param className NSString class.
 * @param protocolName NSString protocol that the class should conform to.
 * @return Instance of className or nil if it doesn't exist.
 */
+ (id _Nullable)getInstanceOfClass:(NSString *)className
                      protocolName:(NSString *)protocolName;

@end

NS_ASSUME_NONNULL_END
