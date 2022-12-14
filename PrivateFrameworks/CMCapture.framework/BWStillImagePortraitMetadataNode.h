/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWStillImagePortraitMetadataNode : BWNode {
    NSDictionary * _cameraInfoByPortType;
    BWFigVideoCaptureDevice * _captureDevice;
    int  _renderingVersion;
    FigSDOFRenderingTuningParameters * _sdofRenderingParameters;
    NSDictionary * _sdofRenderingTuningParametersDictionary;
    NSDictionary * _sensorIDDictionary;
    float  _zoomFactorAtConfiguration;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sensorIDDictionary:(id)arg2 cameraInfoByPortType:(id)arg3 sdofRenderingTuningParametersDictionary:(id)arg4 captureDevice:(id)arg5;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
