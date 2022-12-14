/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSFlatMap : BMBookmarkablePublisher {
    long long  _maxPublishers;
    id /* block */  _transform;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) long long maxPublishers;
@property (nonatomic, readonly) id /* block */ transform;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(id /* block */)arg3;
- (long long)maxPublishers;
- (void)subscribe:(id)arg1;
- (id /* block */)transform;
- (id)upstream;

@end
