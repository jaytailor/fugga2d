#import <Foundation/Foundation.h>
#import "UMSInitializationDelegate.h"
#import "UMSInitializationConfiguration.h"

@class UMSInitializationConfiguration;

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol for the ability to set the delegate and build the `UMSInitializationConfiguration` object.
 */
@protocol UMSInitializationConfigurationOptionals

/**
 * Adds a `UMSInitializationDelegate` to the `UMSInitializationConfigurationBuilder` object.
 *
 * @param delegate `UMSInitializationDelegate` to receive initialize events.
 * @return `UMSInitializationConfigurationOptionals`
 */
- (id <UMSInitializationConfigurationOptionals>)setInitializationDelegate:(id<UMSInitializationDelegate>)delegate;

/**
 * Adds a string key value pair to an options dictionary to be used during initialization.
 *
 * @param value NSString value.
 * @param key NSString key.
 * @return `UMSInitializationConfigurationOptionals`
 */
- (id <UMSInitializationConfigurationOptionals>)setOption:(NSString *)value forKey:(NSString *)key;

/**
 * Builds the `UMSInitializationConfiguration` object using this builder's properties.
 *
 * @return `UMSInitializationConfiguration`
 */
- (UMSInitializationConfiguration *)            build;

@end

/**
 * Protocol for the ability to set a gameId field.
 */
@protocol UMSInitializationConfigurationGameId

/**
 * Adds a gameId to the `UMSInitializationConfigurationBuilder` object.
 *
 * @param gameId The iOS game ID listed in your publisher [dashboard](https://dashboard.unity3d.com).
 * @return `UMSInitializationConfigurationOptionals` object for setting optional properties.
 */
- (id <UMSInitializationConfigurationOptionals>)setGameId:(NSString *)gameId;

@end

/**
 * Builder object for creating the `UMSInitializationConfiguration` object needed to initialize the Unity Mediation SDK.
 */
@interface UMSInitializationConfigurationBuilder : NSObject <UMSInitializationConfigurationGameId, UMSInitializationConfigurationOptionals>

/**
 * Static function for getting the builder of the `UMSInitializationConfiguration` object.
 */
+ (id<UMSInitializationConfigurationGameId>)    builder;

@end

NS_ASSUME_NONNULL_END
