/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait
 */

@interface PTEspressoGenericExecutor : NSObject {
    <MTLCommandQueue> * _commandQueue;
    void * _ctx;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _espressoCallbackQueue;
    NSMutableArray * _inputConversion;
    NSMutableDictionary * _inputsMap;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    NSString * _networkVersion;
    NSMutableDictionary * _outputsMap;
    void * _plan;
    NSMutableArray * _tensorSwap;
    <MTLComputePipelineState> * _unInterleaveTexture;
    NSURL * _url;
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)arg1;

- (void).cxx_destruct;
- (short)bindBuffers:(id)arg1 toMap:(id)arg2 withMode:(int)arg3;
- (unsigned int)bindInputResourceWithName:(id)arg1 to:(struct __CVBuffer { }*)arg2;
- (short)bindTensorSwaps:(id)arg1;
- (unsigned int)convertBindInput;
- (void)dealloc;
- (unsigned int)execute;
- (unsigned int)executeAsync;
- (unsigned int)executeAsync:(id /* block */)arg1;
- (id)getInputResourceWithName:(id)arg1;
- (id)getOutputResourceWithName:(id)arg1;
- (id)getResourceWithName:(id)arg1 fromMap:(id)arg2;
- (id)initPipelineState:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3;
- (id)initWithUrl:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 tensorSwapNames:(id)arg4 device:(id)arg5 library:(id)arg6 pipelineLibrary:(id)arg7 commandQueue:(id)arg8 reshape:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg9 configuration:(id)arg10;
- (id)networkVersion;
- (unsigned int)tensorSwap:(int)arg1;
- (id)texture2DArrayToTexture2D:(id)arg1;
- (void)unInterleaveTexture:(id)arg1 input:(id)arg2 output:(id)arg3;

@end
