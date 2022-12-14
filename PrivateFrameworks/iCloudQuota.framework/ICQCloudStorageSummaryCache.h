/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQCloudStorageSummaryCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    id  _cloudSubscriptionFeaturesObserver;
    id  _quotaChangeNotificationObserver;
    id  _quotaInfoChangeNotificationObserver;
    NSMutableDictionary * _summaryCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanupCacheForPrimaryAccount;
- (void)_startObservingCloudSubscriptionFeaturesNotifications;
- (void)_startObservingQuotaChangeNotifications;
- (void)_stopObservingCloudSubscriptionFeaturesNotifications;
- (void)_stopObservingQuotaChangeNotifications;
- (void)dealloc;
- (id)init;
- (void)setStorageSummary:(id)arg1 forAltDSID:(id)arg2;
- (id)storageSummaryForAltDSID:(id)arg1;

@end
