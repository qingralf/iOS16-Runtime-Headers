/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSSequence : BMBookmarkablePublisher {
    NSEnumerator * _enumerator;
}

@property (nonatomic, retain) NSEnumerator *enumerator;

+ (id)new;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)enumerator;
- (id)init;
- (id)initWithEnumerator:(id)arg1;
- (id)initWithSequence:(id)arg1;
- (void)setEnumerator:(id)arg1;
- (void)subscribe:(id)arg1;

@end