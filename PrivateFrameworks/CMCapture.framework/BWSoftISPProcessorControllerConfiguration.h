/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWSoftISPProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    bool  _deepFusionEnabled;
    int  _digitalFlashProgressiveFusionBatchSize;
    bool  _gdcEnabled;
    struct { 
        int width; 
        int height; 
    }  _inputDimensions;
    bool  _learnedNREnabled;
    bool  _linearRGBForDisparityEnabled;
    int  _lossyCompressionLevel;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    bool  _quadraProcessingEnabled;
    unsigned int  _sensorRawPixelFormat;
    bool  _standardYUVProcessingEnabled;
    bool  _ultraHighResolutionBinningEnabled;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionInputDimensions;
    struct { 
        int width; 
        int height; 
    }  _ultraHighResolutionOutputDimensions;
}

@property (nonatomic) bool deepFusionEnabled;
@property (nonatomic) int digitalFlashProgressiveFusionBatchSize;
@property (nonatomic) bool gdcEnabled;
@property (nonatomic) struct { int x1; int x2; } inputDimensions;
@property (nonatomic) bool learnedNREnabled;
@property (nonatomic) bool linearRGBForDisparityEnabled;
@property (nonatomic) int lossyCompressionLevel;
@property (nonatomic) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) bool quadraProcessingEnabled;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) bool standardYUVProcessingEnabled;
@property (nonatomic) bool ultraHighResolutionBinningEnabled;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionInputDimensions;
@property (nonatomic) struct { int x1; int x2; } ultraHighResolutionOutputDimensions;

- (bool)deepFusionEnabled;
- (int)digitalFlashProgressiveFusionBatchSize;
- (bool)gdcEnabled;
- (struct { int x1; int x2; })inputDimensions;
- (bool)learnedNREnabled;
- (bool)linearRGBForDisparityEnabled;
- (int)lossyCompressionLevel;
- (struct { int x1; int x2; })outputDimensions;
- (bool)quadraProcessingEnabled;
- (unsigned int)sensorRawPixelFormat;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setDigitalFlashProgressiveFusionBatchSize:(int)arg1;
- (void)setGdcEnabled:(bool)arg1;
- (void)setInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setLearnedNREnabled:(bool)arg1;
- (void)setLinearRGBForDisparityEnabled:(bool)arg1;
- (void)setLossyCompressionLevel:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setQuadraProcessingEnabled:(bool)arg1;
- (void)setSensorRawPixelFormat:(unsigned int)arg1;
- (void)setStandardYUVProcessingEnabled:(bool)arg1;
- (void)setUltraHighResolutionBinningEnabled:(bool)arg1;
- (void)setUltraHighResolutionInputDimensions:(struct { int x1; int x2; })arg1;
- (void)setUltraHighResolutionOutputDimensions:(struct { int x1; int x2; })arg1;
- (bool)standardYUVProcessingEnabled;
- (bool)ultraHighResolutionBinningEnabled;
- (struct { int x1; int x2; })ultraHighResolutionInputDimensions;
- (struct { int x1; int x2; })ultraHighResolutionOutputDimensions;

@end
