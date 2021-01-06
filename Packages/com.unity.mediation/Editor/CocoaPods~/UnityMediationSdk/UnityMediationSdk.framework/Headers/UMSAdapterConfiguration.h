#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Object containing parameters to be passed to the ad network from a waterfall configuration.
 */
@interface UMSAdapterConfiguration : NSObject

/**
 * Initializer
 * @param parameters NSDictionary of NSString keys to NSString values.
 * @return UMSAdapterConfiguration.
 */
- (instancetype)initWithParameters:(NSDictionary<NSString *, NSString *> *)parameters;

/**
 * Getter for pulling values from the configuration.
 * @param key NSString key
 * @return NSString value or nil
 */
- (NSString *_Nullable)getAdapterParameter:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
