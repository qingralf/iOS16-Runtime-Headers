/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSSearchItemIndexer : NSObject {
    void $__lazy_storage_$_indexer;
    void fetchState;
    void name;
    void queue;
}

+ (id)default;

- (void).cxx_destruct;
- (void)deleteAllWithCompletionHandler:(id /* block */)arg1;
- (void)indexWithTips:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)reindexWithTips:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
