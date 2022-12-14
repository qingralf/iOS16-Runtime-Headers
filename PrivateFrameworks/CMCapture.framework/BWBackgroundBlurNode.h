/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWBackgroundBlurNode : BWNode <BWFigVideoCaptureDevicePortraitEffectStudioLightQualityChangedDelegate> {
    unsigned long long  _activeBlurEffect;
    unsigned long long  _availablePTEffects;
    BWStats * _backgroundBlurProcessingTimeStats;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSString * _clientApplicationID;
    BWDeviceOrientationMonitor * _deviceOrientationMonitor;
    bool  _effectBypassed;
    long long  _effectQuality;
    bool  _fastSwitchEnabled;
    bool  _isContinuityCapture;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    int  _maxLossyCompressionLevel;
    int  _maxThermalSystemPressurelLevel;
    int  _numberOfFramesThatCouldNotBeBlurred;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    bool  _previousEffectBypassed;
    unsigned long long  _previousPTEffect;
    PTEffect * _ptEffect;
    unsigned int  _stillCaptureEnqueueIndex;
    struct { 
        struct __CVBuffer {} *pixelBuffer; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
    }  _stillCaptureQueue;
    bool  _stillImageCaptureEnabled;
    BWNodeInput * _stillImageInput;
    BWNodeOutput * _stillImageOutput;
    struct OpaqueVTPixelTransferSession { } * _stillImagePixelTransferSession;
    bool  _upstreamDeviceOrientationCorrectionEnabled;
    BWNodeInput * _videoInput;
    BWNodeOutput * _videoOutput;
}

@property (nonatomic) unsigned long long activeBlurEffect;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool effectBypassed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeInput *stillImageInput;
@property (nonatomic, readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BWNodeInput *videoInput;
@property (nonatomic, readonly) BWNodeOutput *videoOutput;

+ (void)initialize;

- (unsigned long long)activeBlurEffect;
- (id)clientApplicationID;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didChangePortraitEffectStudioLightQuality:(long long)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)effectBypassed;
- (id)initWithStillImageCaptureEnabled:(bool)arg1 maxLossyCompressionLevel:(int)arg2 fastSwitchEnabled:(bool)arg3 availableEffects:(unsigned long long)arg4 activeEffect:(unsigned long long)arg5 isHighQualitySupported:(bool)arg6 isRunningForContinuityCapture:(bool)arg7 upstreamDeviceOrientationCorrectionEnabled:(bool)arg8;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setActiveBlurEffect:(unsigned long long)arg1;
- (void)setClientApplicationID:(id)arg1;
- (void)setEffectBypassed:(bool)arg1;
- (id)stillImageInput;
- (id)stillImageOutput;
- (id)videoInput;
- (id)videoOutput;

@end
