/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSMergeMany : BMBookmarkablePublisher {
    NSArray * _publishers;
}

@property (nonatomic, readonly) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithPublishers:(id)arg1;
- (id)publishers;
- (void)subscribe:(id)arg1;

@end
