/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator> {
    unsigned long long  _currentSize;
    <MTLDevice> * _device;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _pool_lock;
    struct { 
        struct MTLIOScratchBufferPrivate {} *tqh_first; 
        struct MTLIOScratchBufferPrivate {} **tqh_last; 
    }  activeq;
    struct { 
        struct MTLIOScratchBufferPrivate {} *tqh_first; 
        struct MTLIOScratchBufferPrivate {} **tqh_last; 
    }  poolq;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)arg1;
- (void)returnActiveScratchBuffersToPool;
- (void)returnPriv:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate {} *x_1_1_1; struct MTLIOScratchBufferPrivate {} **x_1_1_2; } x1; id x2; id x3; unsigned long long x4; bool x5; }*)arg1;

@end