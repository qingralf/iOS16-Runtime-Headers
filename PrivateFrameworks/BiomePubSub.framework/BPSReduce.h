/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSReduce : BMBookmarkablePublisher {
    id  _initialResult;
    id /* block */  _nextPartialResult;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id initialResult;
@property (nonatomic, readonly, copy) id /* block */ nextPartialResult;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(id /* block */)arg3;
- (id)initialResult;
- (id /* block */)nextPartialResult;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
