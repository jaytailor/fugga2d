#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Enum containing supported ad networks.
 */
typedef NS_ENUM (NSInteger, UMSAdNetwork) {
    /**
     * Default unknown.
     */
    UMSAdNetworkUnknown,

    /**
     * AdColony Ad Network
     */
    UMSAdNetworkAdColony,
    /**
     * Admob Ad Network
     */
    UMSAdNetworkAdmob,
    /**
     * AppLovin Ad Network
     */
    UMSAdNetworkAppLovin,
    /**
     * Facebook Ad Network
     */
    UMSAdNetworkFacebook,
    /**
     * IronSource Ad Network
     */
    UMSAdNetworkIronSource,
    /**
     * Unity Ad Network
     */
    UMSAdNetworkUnity,
    /**
     * Vungle Ad Network
     */
    UMSAdNetworkVungle
};

NS_ASSUME_NONNULL_END
