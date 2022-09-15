/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXSuggestedPagesCache : NSObject

- (id)_cacheForPageType:(long long)arg1;
- (void)cacheSuggestedPages:(id)arg1 forPageType:(long long)arg2;
- (id)cachedSuggestedPagesForPageType:(long long)arg1;
- (void)evictCachedSuggestedPages;
- (void)printCachedSuggestedPagesStats;

@end