/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBagProvider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cache;
    NSMutableSet * _cacheKeysScheduledForRefresh;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _pendingOperationsForCacheKey;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
}

+ (id)sharedBagProvider;

- (void).cxx_destruct;
- (id)_amsProcessInfoFromRequestContext:(id)arg1;
- (id)_cacheFilePath;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_getCacheKeyForRequestContext:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCache;
- (void)_saveCache;
- (bool)_shouldUseLegacyProtocolForRequestContext:(id)arg1;
- (void)dealloc;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateCache;

@end