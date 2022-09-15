/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCache : NSObject {
    NSURLCacheInternal * _internal;
}

@property (readonly) unsigned long long currentDiskUsage;
@property (readonly) unsigned long long currentMemoryUsage;
@property unsigned long long diskCapacity;
@property unsigned long long memoryCapacity;

+ (void)setSharedURLCache:(id)arg1;
+ (id)sharedURLCache;

- (const void*)_CFURLCache;
- (id)_cacheDirectory;
- (id)_diskCacheDefaultPath;
- (id)_initVaryHeaderEnabledWithPath:(id)arg1;
- (id)_initWithExistingCFURLCache:(void*)arg1;
- (id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(bool)arg4;
- (id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3;
- (bool)_isVaryHeaderSupportEnabled;
- (double)_maxCacheableEntrySizeRatio;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { }*)arg1;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1 forRequest:(struct _CFURLRequest { }*)arg2;
- (void)_updateVaryState:(id)arg1 forURL:(id)arg2;
- (id)_varyStateForURL:(id)arg1;
- (id)cachedResponseForRequest:(id)arg1;
- (unsigned long long)currentDiskUsage;
- (unsigned long long)currentMemoryUsage;
- (void)dealloc;
- (unsigned long long)diskCapacity;
- (void)flushWithCompletion:(id /* block */)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 directoryURL:(id)arg3;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (unsigned long long)memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (void)set_maxCacheableEntrySizeRatio:(double)arg1;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end