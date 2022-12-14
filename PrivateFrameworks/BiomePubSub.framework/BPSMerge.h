/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSMerge : BMBookmarkablePublisher {
    <BPSPublisher> * _a;
    <BPSPublisher> * _b;
}

@property (nonatomic, readonly) <BPSPublisher> *a;
@property (nonatomic, readonly) <BPSPublisher> *b;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)a;
- (id)b;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2;
- (void)subscribe:(id)arg1;

@end
