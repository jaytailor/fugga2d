#import "UnityAds/UADSPurchasing.h"
#import "UnityAds/UADSMetaData.h"

extern "C" {
    inline const char * UnityAdsCopyString(const char * string) {
        char * copy = (char *)malloc(strlen(string) + 1);
        strcpy(copy, string);
        return copy;
    }
    
    typedef void (*UnityAdsPurchasingDidInitiatePurchasingCommandCallback)(const char * eventString);
    typedef void (*UnityAdsPurchasingGetProductCatalogCallback)();
    typedef void (*UnityAdsPurchasingGetPurchasingVersionCallback)();
    typedef void (*UnityAdsPurchasingInitializeCallback)();
        
    static UnityAdsPurchasingDidInitiatePurchasingCommandCallback iapCommandCallback = NULL;
    static UnityAdsPurchasingGetProductCatalogCallback iapCatalogCallback = NULL;
    static UnityAdsPurchasingGetPurchasingVersionCallback iapVersionCallback = NULL;
    static UnityAdsPurchasingInitializeCallback iapInitializeCallback = NULL;
}

@interface UnityAdsPurchasingWrapperDelegate : NSObject <UADSPurchasingDelegate>
@end

@implementation UnityAdsPurchasingWrapperDelegate
- (void)unityAdsPurchasingGetProductCatalog {
    if(iapCatalogCallback != NULL) {
        iapCatalogCallback();
    }
}

- (void)unityAdsPurchasingGetPurchasingVersion {
    if(iapVersionCallback != NULL) {
        iapVersionCallback();
    }
}

- (void)unityAdsPurchasingInitialize {
    if(iapInitializeCallback != NULL) {
        iapInitializeCallback();
    }
}

- (void)unityAdsPurchasingDidInitiatePurchasingCommand:(NSString *)eventString {
    if(iapCommandCallback != NULL) {
        const char * rawEventString = UnityAdsCopyString([eventString UTF8String]);
        iapCommandCallback(rawEventString);
        free((void *)rawEventString);
    }
}
@end

extern "C" {
    void InitializeUnityAdsPurchasingWrapper() {
        static id<UADSPurchasingDelegate> delegate = nil;
        if (delegate == nil) {
            delegate = [[UnityAdsPurchasingWrapperDelegate alloc] init];
            [UADSPurchasing initialize:delegate];
        }
    }
    
    void UnityAdsSetMetaData(const char * category, const char * data) {
        if(category != NULL && data != NULL) {
            UADSMetaData* metaData = [[UADSMetaData alloc] initWithCategory:[NSString stringWithUTF8String:category]];
            NSDictionary* json = [NSJSONSerialization JSONObjectWithData:[[NSString stringWithUTF8String:data] dataUsingEncoding:NSUTF8StringEncoding] options:0 error:nil];
            for(id key in json) {
                [metaData set:key value:[json objectForKey:key]];
            }
            [metaData commit];
        }
    }

    void UnityAdsSetDidInitiatePurchasingCommandCallback(UnityAdsPurchasingDidInitiatePurchasingCommandCallback callback) {
        iapCommandCallback = callback;
    }
    
    void UnityAdsSetGetProductCatalogCallback(UnityAdsPurchasingGetProductCatalogCallback callback) {
        iapCatalogCallback = callback;
    }
    
    void UnityAdsSetGetVersionCallback(UnityAdsPurchasingGetPurchasingVersionCallback callback) {
        iapVersionCallback = callback;
    }
    
    void UnityAdsSetInitializePurchasingCallback(UnityAdsPurchasingInitializeCallback callback) {
        iapInitializeCallback = callback;
    }
    
    void UnityAdsPurchasingDispatchReturnEvent(UnityAdsPurchasingEvent event, const char * payload) {
        if (payload == NULL) {
            payload = "";
        }
        [UADSPurchasing dispatchReturnEvent:event withPayload:[NSString stringWithUTF8String:payload]];
    }
}
