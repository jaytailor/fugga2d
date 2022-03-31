#import <Foundation/Foundation.h>

/**
 * The different states that an ad unit can be in.
 */
typedef NS_ENUM (NSInteger, UMSAdState) {
    /**
     * The ad unit is unloaded and does not have an ad to show.
     */
    UMSAdStateUnloaded,
    /**
     * The ad unit is trying to load an ad.
     */
    UMSAdStateLoading,
    /**
     * The ad unit has an ad loaded and is ready to show.
     */
    UMSAdStateLoaded,
    /**
     * The ad unit is currently showing an ad.
     */
    UMSAdStateShowing
};
