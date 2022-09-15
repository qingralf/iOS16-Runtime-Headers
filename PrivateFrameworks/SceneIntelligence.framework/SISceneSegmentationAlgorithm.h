/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
 */

@interface SISceneSegmentationAlgorithm : SIAlgorithm <SIVisualLoggerSupporting> {
    SISceneSegmentationNetworkConfiguration * _configuration;
    SIScaler * _depthScaler;
    double  _frameTimestamp;
    SIImageInputData * _inputData;
    SISceneSegmentation * _model;
    SIScaler * _scalerOne;
}

@property (nonatomic, readonly) SISceneSegmentationNetworkConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })getOutputResolution:(long long)arg1;
+ (Class)inputDataClass;
+ (Class)outputDataClass;
+ (struct CGSize { double x1; double x2; })outputResolution;
+ (id)subLoggers;

- (void).cxx_destruct;
- (long long)_inferenceWithInput:(id)arg1 output:(id)arg2;
- (bool)_isDepthAwareModel;
- (long long)_postprocessingOutput:(id)arg1;
- (long long)_preprocessingInputData:(id)arg1;
- (long long)_switchConfiguration:(unsigned long long)arg1;
- (id)configuration;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 managedBuffers:(bool)arg3;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 uncertaintyThreshold:(float)arg3;
- (id)initWithComputeEngine:(long long)arg1 andNetworkConfiguration:(long long)arg2 uncertaintyThreshold:(float)arg3 useE5RT:(bool)arg4;
- (id)initWithInputResolution:(struct CGSize { double x1; double x2; })arg1 andComputeEngine:(long long)arg2;
- (id)initWithNetworkConfiguration:(id)arg1;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 depth:(struct __CVBuffer { }*)arg2 output:(id)arg3 resampleOutput:(bool)arg4 networkConfiguration:(long long)arg5;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 depthInput:(struct __CVBuffer { }*)arg2 output:(struct __IOSurface { }*)arg3 confidenceOutput:(struct __IOSurface { }*)arg4 uncertaintyOutput:(struct __IOSurface { }*)arg5 resampleOutput:(bool)arg6;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 depthInput:(struct __CVBuffer { }*)arg2 output:(struct __IOSurface { }*)arg3 confidenceOutput:(struct __IOSurface { }*)arg4 uncertaintyOutput:(struct __IOSurface { }*)arg5 resampleOutput:(bool)arg6 networkConfiguration:(long long)arg7;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 resampleOutput:(bool)arg4;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 resampleOutput:(bool)arg4 networkConfiguration:(long long)arg5;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 uncertaintyOutput:(struct __IOSurface { }*)arg4;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 uncertaintyOutput:(struct __IOSurface { }*)arg4 resampleOutput:(bool)arg5;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(struct __IOSurface { }*)arg2 confidenceOutput:(struct __IOSurface { }*)arg3 uncertaintyOutput:(struct __IOSurface { }*)arg4 resampleOutput:(bool)arg5 networkConfiguration:(long long)arg6;
- (long long)runWithInput:(struct __CVBuffer { }*)arg1 output:(id)arg2 resampleOutput:(bool)arg3 networkConfiguration:(long long)arg4;
- (bool)supportUncertainty;

@end