/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoCaptureServer : NSObject <VCVideoCaptureServer> {
    unsigned long long  _biomeEventType;
    struct tagVCVideoBufferStatistics { 
        int bufferWidth; 
        int bufferHeight; 
        bool preferPTS; 
        double frameTime; 
        double hostTimeFromBufferAttachment; 
        double presentationTime; 
        double presentationTimeConvertedToHost; 
        double clockTime; 
    }  _bufferStatsData;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _bufferStatsDumpFile;
    NSObject<OS_dispatch_queue> * _cameraPreviewClientMonitorQueue;
    NSMutableDictionary * _cameraPreviewClients;
    bool  _cinematicFramingEnabled;
    struct _VCVideoSourceToken { 
        union { 
            struct { 
                unsigned int identifier : 24; 
                unsigned int type : 8; 
            } ; 
            unsigned int bits; 
        } ; 
    }  _currentVideoSourceToken;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultPortraitAspectRatio;
    int  _encodingHeight;
    int  _encodingWidth;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _enqueueLock;
    bool  _firstPreviewFrameReceived;
    bool  _followSystemCamera;
    bool  _forceDisableThermal;
    VCImageRotationConverter * _imageRotationConverter;
    bool  _isBufferStatsDumpEnabled;
    bool  _isCapturing;
    bool  _isPreviewRunning;
    bool  _isScreenCaptureForScreenShare;
    int  _maxFrameRate;
    int  _newPeakPowerLevel;
    int  _newThermalLevel;
    int  _peakPowerLevel;
    int  _peakPowerNotificationToken;
    bool  _portraitResolutionSupported;
    double  _previousClockTime;
    double  _previousFrameTime;
    NSObject<VCVideoSource> * _screenCapture;
    int  _screenConfiguredFrameRate;
    int  _screenCurrentFrameRate;
    NSMutableDictionary * _screenShareCaptureConfig;
    NSMutableDictionary * _streamInputCaptureSources;
    NSObject<OS_dispatch_queue> * _streamInputQueue;
    NSMutableDictionary * _streamInputs;
    NSMutableDictionary * _systemAudioCapture;
    NSMutableDictionary * _systemAudioCaptureConfig;
    NSMutableDictionary * _systemAudioSourceToClients;
    int  _thermalLevel;
    int  _thermalNotificationToken;
    VCVideoSourceTokenManager * _tokenManager;
    bool  _useAVCaptureSession;
    bool  _useScreenCaptureKitForAudio;
    bool  _viewPointCorrectionEnabledByClient;
    bool  _viewPointCorrectionEnabledByThermal;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
    NSObject<AVConferencePreviewDelegate> * appDelegate;
    NSObject<VCVideoSource> * avCapture;
    VCImageQueue * backQueue;
    struct __CVPixelBufferPool { } * bufferPool;
    NSObject<OS_dispatch_source> * cameraHealthMonitor;
    NSMutableArray * cameraVideoSinks;
    NSObject<OS_dispatch_queue> * captureCameraQueue;
    NSObject<OS_dispatch_queue> * captureClientQueue;
    int  captureFrameCount;
    NSObject<OS_dispatch_queue> * captureServerQueue;
    int  currentFrameRate;
    int  currentHeight;
    int  currentWidth;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    double  falteredRenderingtimeStamp;
    VCImageQueue * frontQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedPortraitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
    int  pendingFrameRate;
    int  pendingHeight;
    int  pendingWidth;
    int  previewFrameCount;
    bool  resize;
    NSMutableArray * screenCaptureClients;
    NSObject<OS_dispatch_source> * screenHealthMonitor;
    NSObject<OS_dispatch_queue> * snapshotQueue;
    int  snapshotRequestCount;
    struct OpaqueVTPixelTransferSession { } * transferSession;
    NSObject<OS_dispatch_queue> * variablesQueue;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewDelegate> *appDelegate;
@property (nonatomic, readonly) struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; } currentVideoSourceToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool followSystemCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)VCVideoCaptureServerSingleton;

- (void)addObservePreferredCamera;
- (void)addScreenStatsToDict:(struct __CFDictionary { }*)arg1;
- (void)addStreamInputStatsToDict:(struct __CFDictionary { }*)arg1 captureSource:(int)arg2;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)appDelegate;
- (void)applyPressureLevelChanges;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (bool)cameraSupportsWidth:(int)arg1 height:(int)arg2;
- (bool)canStopPreview;
- (bool)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)centerStageEnabledDidChange:(bool)arg1;
- (void)changeCameraToPendingSettingsWithReset:(bool)arg1;
- (void)cleanupStreamInputs;
- (struct __CFDictionary { }*)copyCameraColorInfo;
- (id)copyLocalScreenAttributesForVideoAttributes:(id)arg1;
- (id)copyLocalVideoAttributes;
- (struct __CFDictionary { }*)copyReportingStatsForCaptureSource:(int)arg1;
- (struct __CFDictionary { }*)copyStatsDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CVBuffer { }*)createResizedFrame:(struct __CVBuffer { }*)arg1;
- (int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(bool)arg4;
- (struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })currentVideoSourceToken;
- (void)dealloc;
- (void)deregisterCaptureClientForScreenShare:(id)arg1;
- (bool)deregisterCaptureConfig:(id)arg1 forSource:(int)arg2;
- (bool)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2;
- (bool)deregisterSystemAudioConfig:(id)arg1 forSource:(int)arg2;
- (void)didReceiveFirstPreviewFrame;
- (bool)dispatchedAddScreenCaptureAudioOutputForConfig:(id)arg1;
- (bool)dispatchedRemoveScreenCaptureAudioOutput;
- (void)dispatchedSetCaptureCameraWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (void)dispatchedSetCaptureFrameRate:(int)arg1;
- (void)dispatchedSetCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (bool)dispatchedStartSystemAudioForClientKey:(id)arg1;
- (void)dispatchedStartSystemAudioForSource:(int)arg1;
- (bool)dispatchedStopSystemAudioForClientKey:(id)arg1;
- (void)dispatchedStopSystemAudioForSource:(int)arg1;
- (void)dispatchedUpdateSystemAudioConfigTapTypeForClientKey:(id)arg1 forSource:(int)arg2;
- (void)effectsEnabledDidChange:(bool)arg1;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (bool)enqueueFrameToQueueFront:(bool)arg1 frame:(struct __CVBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)findNextAvailableCaptureSourceID;
- (bool)followSystemCamera;
- (int)getCappedFrameRate:(int)arg1;
- (int)getCaptureFrameRateForSource:(int)arg1;
- (int)getFrameRateForPeakPowerLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2;
- (int)getScreenFrameRateForThermalLevel:(int)arg1;
- (void)handleAVCaptureError:(int)arg1 domain:(id)arg2;
- (void)handleAVCaptureError:(int)arg1 error:(id)arg2;
- (void)handleCaptureEvent:(id)arg1;
- (void)handleCaptureEvent:(id)arg1 subType:(id)arg2;
- (void)handleCaptureSourcePositionDidChange:(bool)arg1;
- (id)init;
- (bool)internalRegisterStreamInput:(id)arg1;
- (bool)internalUnregisterStreamInput:(id)arg1;
- (bool)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2;
- (bool)isValidStreamInput:(id)arg1;
- (struct CGSize { double x1; double x2; })localExpectedRatioForScreenOrientation:(int)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })localScreenRatioForScreenOrientation:(int)arg1;
- (id)localVideoAttributes;
- (struct opaqueCMFormatDescription { }*)newFormatDescriptionForCaptureSource:(int)arg1;
- (void)notifyCameraDidChangeAvailability:(id)arg1 available:(bool)arg2;
- (void)notifyEffectsAppliedForClients:(id)arg1 effectsApplied:(bool)arg2;
- (void)notifyFrameRateBeingThrottledForClients:(id)arg1 newFrameRate:(int)arg2 thermalLevelDidChange:(bool)arg3 powerLevelDidChange:(bool)arg4;
- (void)notifyThermalChangeForClients:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(int)arg3;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 switching:(bool)arg3 camera:(int)arg4 videoMirrored:(bool)arg5;
- (bool)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (void)pausePreview;
- (void)portraitBlurEnabledDidChange:(bool)arg1;
- (void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)processCaptureSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 camera:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)processFrameSizeChange:(struct __CVBuffer { }*)arg1 cameraStatusBits:(unsigned char)arg2;
- (void)processPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 camera:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)reconnectClientLayerFront:(bool)arg1;
- (void)registerBlocksForServer;
- (void)registerCaptureClientForScreenShare:(id)arg1;
- (bool)registerCaptureConfig:(id)arg1 forSource:(int)arg2;
- (bool)registerForFrames:(id)arg1;
- (bool)registerForVideoFramesFromSource:(int)arg1 sourceConfig:(id)arg2;
- (bool)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5;
- (bool)registerStreamInput:(id)arg1;
- (int)registerStreamInputCaptureSourceWithConfiguration:(id)arg1;
- (int)registerStreamInputCaptureSourceWithID:(long long)arg1 frameRate:(unsigned int)arg2;
- (bool)registerSystemAudioConfig:(id)arg1 forSource:(int)arg2;
- (void)registerVideoSink:(id)arg1 withCaptureSource:(int)arg2;
- (oneway void)release;
- (void)removeObservePreferredCamera;
- (void)resetCameraToPreviewSettingsForced:(bool)arg1;
- (void)resumeVideoSink:(id)arg1 withCaptureSource:(int)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)sendBiomeEventIsStarting:(bool)arg1;
- (void)sendSnapshotFromFrame:(struct __CVBuffer { }*)arg1;
- (void)setAppDelegate:(id)arg1;
- (void)setCFAvailabilityChange:(bool)arg1;
- (void)setCameraZoomAvailable:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (bool)setCaptureCameraWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 8; } x_1_1_1; unsigned int x_1_1_2; } x1; })arg1;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(bool)arg4;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (void)setCurrentFrameRate:(int)arg1;
- (void)setFollowSystemCamera:(bool)arg1;
- (void)setLocalCamera:(id)arg1;
- (bool)setLocalScreenAttributes:(id)arg1;
- (bool)setLocalVideoAttributes:(id)arg1;
- (unsigned int)setLocalVideoDestination:(id)arg1 facing:(bool)arg2;
- (void)setPauseCapture:(bool)arg1;
- (void)setScreenCaptureFrameRate:(int)arg1;
- (void)setSystemPreferredAsLocalCamera;
- (void)setUpDefaultAspectRatios;
- (void)setUpImageRotationConverter;
- (bool)setUpScreenVideoCaptureSource:(id)arg1;
- (void)setViewPointCorrectionEnabled:(bool)arg1;
- (void)setupLogFiles;
- (bool)setupScreenCaptureForSource:(int)arg1 config:(id)arg2;
- (bool)setupStreamInputs;
- (bool)shouldSendVideoAttributeCallback:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)startPreview;
- (bool)startScreenShareCapture:(id)arg1;
- (void)stopCapture;
- (void)stopPreview;
- (bool)stopScreenShareCapture;
- (long long)streamInputIDForCaptureSourceID:(int)arg1;
- (bool)supportsPortraitResolution;
- (void)suspendVideoSink:(id)arg1 withCaptureSource:(int)arg2;
- (void)tearDownImageRotationConverter;
- (void)thermalLevelDidChange:(int)arg1;
- (void)unregisterStreamInput:(id)arg1;
- (bool)unregisterStreamInputCaptureSourceWithCaptureSourceID:(int)arg1;
- (void)unregisterVideoSink:(id)arg1 withCaptureSource:(int)arg2;
- (void)updateImageQueueFrameRate:(int)arg1;
- (void)updateLocalAspectRatios:(int)arg1 localScreenAspectRatio:(struct CGSize { double x1; double x2; })arg2;
- (void)updatePreviewState;
- (void)updateViewPointCorrectionStatus;

@end