/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSBuffer : BMBookmarkablePublisher {
    unsigned long long  _prefetch;
    unsigned long long  _size;
    <BPSPublisher> * _upstream;
    NSMutableArray * _values;
    unsigned long long  _whenFull;
}

@property (nonatomic, readonly) unsigned long long prefetch;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) <BPSPublisher> *upstream;
@property (nonatomic, retain) NSMutableArray *values;
@property (nonatomic, readonly) unsigned long long whenFull;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4;
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4 values:(id)arg5;
- (unsigned long long)prefetch;
- (void)setValues:(id)arg1;
- (unsigned long long)size;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)values;
- (unsigned long long)whenFull;

@end