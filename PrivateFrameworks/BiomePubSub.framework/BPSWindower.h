/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher> {
    <BPSWindowAssigner> * _assigner;
    id /* block */  _key;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) <BPSWindowAssigner> *assigner;
@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)assigner;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 key:(id /* block */)arg2 assigner:(id)arg3;
- (id /* block */)key;
- (void)setKey:(id /* block */)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end