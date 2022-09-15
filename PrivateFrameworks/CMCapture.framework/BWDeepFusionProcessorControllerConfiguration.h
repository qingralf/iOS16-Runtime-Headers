/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    bool  _delayPrepareAndCacheBuffers;
    struct { 
        int width; 
        int height; 
    }  _maxInputDimensions;
    struct { 
        int width; 
        int height; 
    }  _maxOutputDimensions;
    bool  _quadraSupportEnabled;
    NSDictionary * _rawColorCalibrationsByPortType;
    NSDictionary * _rawLensShadingCorrectionCoefficientsByPortType;
    int  _stillImageFusionScheme;
}

@property (nonatomic) bool delayPrepareAndCacheBuffers;
@property (nonatomic) struct { int x1; int x2; } maxInputDimensions;
@property (nonatomic) struct { int x1; int x2; } maxOutputDimensions;
@property (nonatomic) bool quadraSupportEnabled;
@property (nonatomic, retain) NSDictionary *rawColorCalibrationsByPortType;
@property (nonatomic, retain) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType;
@property (nonatomic) int stillImageFusionScheme;

- (void)dealloc;
- (bool)delayPrepareAndCacheBuffers;
- (struct { int x1; int x2; })maxInputDimensions;
- (struct { int x1; int x2; })maxOutputDimensions;
- (bool)quadraSupportEnabled;
- (id)rawColorCalibrationsByPortType;
- (id)rawLensShadingCorrectionCoefficientsByPortType;
- (void)setDelayPrepareAndCacheBuffers:(bool)arg1;
- (void)setMaxInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setMaxOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setQuadraSupportEnabled:(bool)arg1;
- (void)setRawColorCalibrationsByPortType:(id)arg1;
- (void)setRawLensShadingCorrectionCoefficientsByPortType:(id)arg1;
- (void)setStillImageFusionScheme:(int)arg1;
- (int)stillImageFusionScheme;

@end