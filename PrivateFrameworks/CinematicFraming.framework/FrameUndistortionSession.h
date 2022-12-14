/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface FrameUndistortionSession : NSObject <FramingSpaceManager> {
    float  _additionalCameraRotation;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*topLeft; 
        } corners; 
    }  _backProjectedFramingSpaceViewport;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*normalizedOutputToSensorScalingCoefs; 
    }  _calibrationParameters;
    int  _cameraOrientation;
    bool  _cameraOrientationCorrectionEnabled;
    <MTLCommandQueue> * _commandQueue;
    struct __CVMetalTextureCache { } * _cvMetalTextureCacheRef;
    unsigned int  _exifOrientation;
    bool  _firstGravityVectorRegistered;
    void _gravity;
    bool  _isFrontCamera;
    <MTLLibrary> * _library;
    <MTLDevice> * _metalDevice;
    int  _mode;
    int  _numCCWRotationsFromInputToFramingSpace;
    CinematicFramingSessionOptions * _options;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    int  _outputType;
    <MTLComputePipelineState> * _pipelineComputeStates;
    NSString * _portType;
    int  _sensorID;
}

@property (nonatomic, readonly) float additionalCameraRotation;
@property (nonatomic, readonly) struct { struct { } x1; } backProjectedFramingSpaceViewport;
@property (nonatomic, readonly) struct { float x1; int x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[3]; } x3; } calibrationParams;
@property (nonatomic) int cameraOrientation;
@property (nonatomic) bool cameraOrientationCorrectionEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } defaultFramingSpaceViewport;
@property (nonatomic) unsigned int exifOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } framingSpaceBounds;
@property (nonatomic, readonly) void gravity;
@property (nonatomic, readonly) bool imageTransformIsValid;
@property (nonatomic, readonly) bool isFrontCamera;
@property (nonatomic, readonly) float maxWidth;
@property (nonatomic, readonly) int mode;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
@property (nonatomic, readonly) int numCCWRotationsFromInputToFramingSpace;
@property (nonatomic, retain) CinematicFramingSessionOptions *options;
@property (nonatomic, readonly) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) int outputType;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) int sensorID;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)_cachedTexturesFromPixelBuffer:(struct __CVBuffer { }*)arg1 isOptimized:(bool)arg2 textures:(struct { unsigned int x1; id x2[2]; }*)arg3;
- (id)_compileComputeShader:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (int)_compileShaders;
- (int)_computeNumberOfCCWRotationsFromInputToFramingSpaceForOrientation:(int)arg1;
- (int)_createComputePipelinesForShaders:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framingSpaceBoundsLandscapeLeft;
- (float)_getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2 outputAspectRatioInDeviceOrientation:(float)arg3;
- (float)_getHeightForWidth:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (int)_getTransformShaderParameters:(unsigned long long)arg1 isLuma:(bool)arg2 pixelRatio:(unsigned int*)arg3 pipelineIndexToUse:(int*)arg4;
- (float)_getWidthForHeight:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_projectRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setShaderParametersForRotationNormalizedDisplayRect:(void *)arg1 gidToNormalizedOutput:(void *)arg2 calibrationParameters:(void *)arg3 commandEncoder:(void *)arg4; // needs 4 arg types, found 3: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, struct { float x1; int x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[3]; } x3; }, id
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calibrationParameters:(struct { float x1; int x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[3]; } x3; })arg2;
- (float)additionalCameraRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustDisplayRectToFitInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { } x1; })backProjectedFramingSpaceViewport;
- (struct { float x1; int x2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_1[3]; } x3; })calibrationParams;
- (int)cameraOrientation;
- (bool)cameraOrientationCorrectionEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeNewCoordinatesInOrientation:(int)arg1 forViewportInCurrentOrientation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFramingSpaceViewport;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFramingSpaceViewport:(float)arg1;
- (unsigned int)exifOrientation;
- (void)finish;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })framingSpaceBounds;
- (float)getHeightDerivativeForWidth:(float)arg1 widthDerivative:(float)arg2;
- (float)getHeightForWidth:(float)arg1;
- (float)getWidthForHeight:(float)arg1;
- (void)gravity;
- (bool)imageTransformIsValid;
- (id)initWithOutputDimensions:(struct { int x1; int x2; })arg1 mode:(int)arg2 portType:(id)arg3;
- (void)initializeMetal;
- (bool)isFrontCamera;
- (float)maxWidth;
- (int)mode;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
- (int)numCCWRotationsFromInputToFramingSpace;
- (id)options;
- (float)outputAspectRatioInDeviceOrientation;
- (struct { int x1; int x2; })outputDimensions;
- (int)outputType;
- (id)portType;
- (int)processBuffer:(struct __CVBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })projectRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDisplayRectInFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { struct { } x1; })projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { } x1; })projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)registerAdditionalCameraRotation:(float)arg1;
- (int)registerCalibrationData:(id)arg1;
- (void)registerGravityX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)registerOutputType:(int)arg1;
- (void)registerSensorID:(int)arg1;
- (int)sensorID;
- (void)setCameraOrientation:(int)arg1;
- (void)setCameraOrientationCorrectionEnabled:(bool)arg1;
- (void)setExifOrientation:(unsigned int)arg1;
- (void)setOptions:(id)arg1;
- (void)setOutputType:(int)arg1;
- (void)warpMetadataInInputImageCoordinatesToFramingSpace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })warpRectInInputImageCoordinatesToFramingSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)zRotationsFromNaturalOrientationForCamera:(int)arg1;

@end
