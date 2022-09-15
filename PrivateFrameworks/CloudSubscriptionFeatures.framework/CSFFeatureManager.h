/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudSubscriptionFeatures.framework/CloudSubscriptionFeatures
 */

@interface CSFFeatureManager : NSObject

// Image: /System/Library/PrivateFrameworks/CloudSubscriptionFeatures.framework/CloudSubscriptionFeatures

+ (id)addFeatureChangeObserverWithChange:(id /* block */)arg1;
+ (void)clearCacheAndNotify;
+ (void)clearFeatureCacheAndNotify;
+ (void)getFeatureEligibilityForFeatureWithId:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
+ (bool)isCloudSubscriber;
+ (void)processPushNotificationDictionary:(id)arg1;
+ (void)processPushNotificationWithDictionary:(id)arg1;
+ (void)refreshAllGeoclassificationCache;
+ (void)refreshGeoclassificationCache;
+ (id)registerForFeatureChangeNotificationsUsingBlock:(id /* block */)arg1;
+ (void)removeFeatureChangeObserverWithToken:(id)arg1;
+ (void)requestFeatureWithId:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestGeoClassificationForFeatureID:(id)arg1 bundleID:(id)arg2 altDSID:(id)arg3 ignoreCache:(bool)arg4 completion:(id /* block */)arg5;
+ (void)requestGeoClassificationForFeatureID:(id)arg1 bundleID:(id)arg2 ignoreCache:(bool)arg3 completion:(id /* block */)arg4;
+ (void)unregisterForFeatureChangeNotificationsUsingObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id /* block */)icqui_notifyClientsWithCompletion:(id /* block */)arg1;

@end