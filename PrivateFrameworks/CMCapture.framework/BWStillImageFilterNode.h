/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    CIContext * _cachedCIContext;
    BWColorLookupCache * _colorLookupCache;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    NSObject<OS_dispatch_queue> * _emitQueue;
    struct { 
        int width; 
        int height; 
    }  _maskDimensions;
    BWStillImageMetalBlurMapRenderer * _metalBlurMapRenderer;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    BWStillImageMetalSDOFRenderer * _metalSDOFRenderer;
    <MTLCommandQueue> * _mtlCommandQueue;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    BWVideoFormat * _outputFormat;
    struct OpaqueVTPixelTransferSession { } * _portraitDownsamplingTransferSession;
    int  _portraitRenderQuality;
    BWPixelBufferPool * _processingBufferPool;
    BWRenderList * _renderList;
    BWRenderListProcessor * _renderListProcessor;
    <BWRendererResourceProvider> * _rendererProvider;
    NSDictionary * _sdofRenderingTuningParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)_initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(bool)arg2 personSegmentationEnabled:(bool)arg3 refinedDepthEnabled:(bool)arg4 portraitRenderQuality:(int)arg5 renderResourceProvider:(id)arg6;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(bool)arg2 personSegmentationEnabled:(bool)arg3 refinedDepthEnabled:(bool)arg4 portraitRenderQuality:(int)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sdofRenderingTuningParameters;
- (void)setSdofRenderingTuningParameters:(id)arg1;

@end
