/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMStreamsAccessAssertionCache : NSObject {
    _PASLock * _lock;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_makeAssertionWithDescriptor:(id)arg1 extensionToken:(id)arg2;
- (id)assertionForAccessDescriptor:(id)arg1;
- (id)createAssertionForAccessDescriptor:(id)arg1 extensionToken:(id)arg2;
- (id)init;

@end
