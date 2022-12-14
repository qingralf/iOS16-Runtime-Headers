/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARPersonOcclusionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    struct __CVPixelBufferPool { } * _depthPixelBufferPool;
    long long  _lastDeviceOrientation;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _localPixelDepthDict;
    unsigned long long  _minFilterIntermediateBufferSize;
    char * _minFilterIntermediatePooledBuffer;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    struct shared_ptr<arkit::RobustExpFilter<float>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _varExpFilter;
}

+ (float)_confidenceForDepthData:(void *)arg1 location:(void *)arg2; // needs 2 arg types, found 1: id

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fullDescription;
- (int)_minFilterDepthMap:(struct __CVBuffer { }*)arg1 kernelSize:(unsigned long long)arg2 pResultBuffer:(struct __CVBuffer {}**)arg3;
- (void)dealloc;
- (id)init;
- (bool)isBusy;
- (int)postProcessSegmentation:(struct __CVBuffer { }*)arg1 depthData:(id)arg2 depthDataSource:(long long)arg3 detectionData:(id)arg4 pResultingDepthBuffer:(struct __CVBuffer {}**)arg5;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
