/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration <NSSecureCoding> {
    bool  _adjustablePortraitLightingEffectStrengthSupported;
    NSDictionary * _baseZoomFactorsByPortType;
    NSDictionary * _cameraInfoByPortType;
    bool  _captureTimePhotosCurationSupported;
    int  _dcProcessorVersion;
    struct { 
        int width; 
        int height; 
    }  _deepFusionEnhancedResolutionDimensions;
    bool  _deepFusionSupported;
    int  _deepZoomVersion;
    bool  _deferredProcessingSupported;
    unsigned int  _demosaicedRawPixelFormat;
    int  _depthDataType;
    bool  _deviceHasFlash;
    int  _deviceType;
    NSArray * _enabledSemanticSegmentationMatteURNs;
    bool  _fastCapturePrioritizationEnabled;
    float  _gainMapMainImageDownscalingFactor;
    struct { 
        int width; 
        int height; 
    }  _gdcInDCProcessorOutputCropDimensions;
    bool  _gdcInDCProcessorSupported;
    int  _greenGhostMitigationVersion;
    bool  _highQualityPhotoCaptureForVideoFormatEnabled;
    unsigned int  _inferencePriority;
    bool  _learnedNRSupported;
    int  _maxLossyCompressionLevel;
    struct { 
        int width; 
        int height; 
    }  _outputStillImageDimensions;
    int  _pearlModuleType;
    unsigned int  _pipelineStagePriority;
    NSArray * _portTypesWithGeometricDistortionCorrectionEnabled;
    NSArray * _portTypesWithIntelligentDistortionCorrectionEnabled;
    bool  _quadraProcessingSupportEnabled;
    NSDictionary * _rawColorCalibrationsByPortType;
    NSDictionary * _rawLensShadingCorrectionCoefficientsByPortType;
    struct { 
        int width; 
        int height; 
    }  _rawSensorDimensions;
    int  _redEyeReductionVersion;
    bool  _responsiveShutterSupported;
    int  _semanticDevelopmentVersion;
    int  _semanticRenderingVersion;
    bool  _semanticStyleRenderingEnabled;
    NSDictionary * _sensorIDStringsByPortType;
    unsigned int  _sensorRawPixelFormat;
    bool  _sifrStillImageCaptureEnabledIfAvailable;
    bool  _softISPSupported;
    int  _stillImageSinkPipelineProcessingMode;
    NSArray * _supportedSemanticSegmentationMatteURNs;
    int  _swfrVersion;
    float  _ubInferenceMainImageDownscalingFactor;
    bool  _ultraHighResolutionProcessingEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionSensorRawDimensions;
    int  swfrVersion;
}

@property (nonatomic) bool adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic, retain) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) bool captureTimePhotosCurationSupported;
@property (nonatomic) int dcProcessorVersion;
@property (nonatomic) struct { int x1; int x2; } deepFusionEnhancedResolutionDimensions;
@property (nonatomic) bool deepFusionSupported;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) bool deferredProcessingSupported;
@property (nonatomic) unsigned int demosaicedRawPixelFormat;
@property (nonatomic) int depthDataType;
@property (nonatomic) bool deviceHasFlash;
@property (nonatomic) int deviceType;
@property (nonatomic, retain) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) bool fastCapturePrioritizationEnabled;
@property (nonatomic) float gainMapMainImageDownscalingFactor;
@property (nonatomic) struct { int x1; int x2; } gdcInDCProcessorOutputCropDimensions;
@property (nonatomic) bool gdcInDCProcessorSupported;
@property (nonatomic) int greenGhostMitigationVersion;
@property (nonatomic) bool highQualityPhotoCaptureForVideoFormatEnabled;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) bool learnedNRSupported;
@property (nonatomic) int maxLossyCompressionLevel;
@property (nonatomic) struct { int x1; int x2; } outputStillImageDimensions;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic, retain) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (nonatomic, retain) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled;
@property (nonatomic) bool quadraProcessingSupportEnabled;
@property (nonatomic, retain) NSDictionary *rawColorCalibrationsByPortType;
@property (nonatomic, retain) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) struct { int x1; int x2; } rawSensorDimensions;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic) bool responsiveShutterSupported;
@property (nonatomic) int semanticDevelopmentVersion;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) bool semanticStyleRenderingEnabled;
@property (nonatomic, retain) NSDictionary *sensorIDStringsByPortType;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) bool sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) bool softISPSupported;
@property (nonatomic) int stillImageSinkPipelineProcessingMode;
@property (nonatomic, retain) NSArray *supportedSemanticSegmentationMatteURNs;
@property (nonatomic) int swfrVersion;
@property (nonatomic) float ubInferenceMainImageDownscalingFactor;
@property (nonatomic) bool ultraHighResolutionProcessingEnabled;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionSensorRawDimensions;

+ (bool)supportsSecureCoding;

- (bool)adjustablePortraitLightingEffectStrengthSupported;
- (id)baseZoomFactorsByPortType;
- (id)cameraInfoByPortType;
- (bool)captureTimePhotosCurationSupported;
- (int)dcProcessorVersion;
- (void)dealloc;
- (struct { int x1; int x2; })deepFusionEnhancedResolutionDimensions;
- (bool)deepFusionSupported;
- (int)deepZoomVersion;
- (bool)deferredProcessingSupported;
- (unsigned int)demosaicedRawPixelFormat;
- (int)depthDataType;
- (bool)deviceHasFlash;
- (int)deviceType;
- (id)enabledSemanticSegmentationMatteURNs;
- (void)encodeWithCoder:(id)arg1;
- (bool)fastCapturePrioritizationEnabled;
- (float)gainMapMainImageDownscalingFactor;
- (struct { int x1; int x2; })gdcInDCProcessorOutputCropDimensions;
- (bool)gdcInDCProcessorSupported;
- (int)greenGhostMitigationVersion;
- (bool)highQualityPhotoCaptureForVideoFormatEnabled;
- (unsigned int)inferencePriority;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)learnedNRSupported;
- (int)maxLossyCompressionLevel;
- (struct { int x1; int x2; })outputStillImageDimensions;
- (int)pearlModuleType;
- (unsigned int)pipelineStagePriority;
- (id)portTypesWithGeometricDistortionCorrectionEnabled;
- (id)portTypesWithIntelligentDistortionCorrectionEnabled;
- (bool)quadraProcessingSupportEnabled;
- (id)rawColorCalibrationsByPortType;
- (id)rawLensShadingCorrectionCoefficientsByPortType;
- (struct { int x1; int x2; })rawSensorDimensions;
- (int)redEyeReductionVersion;
- (bool)responsiveShutterSupported;
- (int)semanticDevelopmentVersion;
- (int)semanticRenderingVersion;
- (bool)semanticStyleRenderingEnabled;
- (id)sensorIDStringsByPortType;
- (unsigned int)sensorRawPixelFormat;
- (void)setAdjustablePortraitLightingEffectStrengthSupported:(bool)arg1;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCaptureTimePhotosCurationSupported:(bool)arg1;
- (void)setDcProcessorVersion:(int)arg1;
- (void)setDeepFusionEnhancedResolutionDimensions:(struct { int x1; int x2; })arg1;
- (void)setDeepFusionSupported:(bool)arg1;
- (void)setDeepZoomVersion:(int)arg1;
- (void)setDeferredProcessingSupported:(bool)arg1;
- (void)setDemosaicedRawPixelFormat:(unsigned int)arg1;
- (void)setDepthDataType:(int)arg1;
- (void)setDeviceHasFlash:(bool)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setEnabledSemanticSegmentationMatteURNs:(id)arg1;
- (void)setFastCapturePrioritizationEnabled:(bool)arg1;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setGdcInDCProcessorOutputCropDimensions:(struct { int x1; int x2; })arg1;
- (void)setGdcInDCProcessorSupported:(bool)arg1;
- (void)setGreenGhostMitigationVersion:(int)arg1;
- (void)setHighQualityPhotoCaptureForVideoFormatEnabled:(bool)arg1;
- (void)setInferencePriority:(unsigned int)arg1;
- (void)setLearnedNRSupported:(bool)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setOutputStillImageDimensions:(struct { int x1; int x2; })arg1;
- (void)setPearlModuleType:(int)arg1;
- (void)setPipelineStagePriority:(unsigned int)arg1;
- (void)setPortTypesWithGeometricDistortionCorrectionEnabled:(id)arg1;
- (void)setPortTypesWithIntelligentDistortionCorrectionEnabled:(id)arg1;
- (void)setQuadraProcessingSupportEnabled:(bool)arg1;
- (void)setRawColorCalibrationsByPortType:(id)arg1;
- (void)setRawLensShadingCorrectionCoefficientsByPortType:(id)arg1;
- (void)setRawSensorDimensions:(struct { int x1; int x2; })arg1;
- (void)setRedEyeReductionVersion:(int)arg1;
- (void)setResponsiveShutterSupported:(bool)arg1;
- (void)setSemanticDevelopmentVersion:(int)arg1;
- (void)setSemanticRenderingVersion:(int)arg1;
- (void)setSemanticStyleRenderingEnabled:(bool)arg1;
- (void)setSensorIDStringsByPortType:(id)arg1;
- (void)setSensorRawPixelFormat:(unsigned int)arg1;
- (void)setSifrStillImageCaptureEnabledIfAvailable:(bool)arg1;
- (void)setSoftISPSupported:(bool)arg1;
- (void)setStillImageSinkPipelineProcessingMode:(int)arg1;
- (void)setSupportedSemanticSegmentationMatteURNs:(id)arg1;
- (void)setSwfrVersion:(int)arg1;
- (void)setUbInferenceMainImageDownscalingFactor:(float)arg1;
- (void)setUltraHighResolutionProcessingEnabled:(bool)arg1;
- (void)setUltraHighResolutionSensorRawDimensions:(struct { int x1; int x2; })arg1;
- (bool)sifrStillImageCaptureEnabledIfAvailable;
- (bool)softISPSupported;
- (int)stillImageSinkPipelineProcessingMode;
- (id)supportedSemanticSegmentationMatteURNs;
- (int)swfrVersion;
- (float)ubInferenceMainImageDownscalingFactor;
- (bool)ultraHighResolutionProcessingEnabled;
- (struct { int x1; int x2; })ultraHighResolutionSensorRawDimensions;

@end