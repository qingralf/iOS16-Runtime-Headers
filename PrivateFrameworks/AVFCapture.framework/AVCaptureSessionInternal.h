/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureSessionInternal : NSObject {
    NSMutableArray * _devicesObservingVideoZoomFactor;
    bool  authorizedToUseCameraInMultipleForegroundAppLayout;
    bool  automaticallyConfiguresApplicationAudioSession;
    bool  automaticallyConfiguresCaptureDeviceForWideColor;
    int  beginConfigRefCount;
    NSMutableArray * committedAVCaptureSessionConfigurations;
    NSMutableArray * connections;
    NSMutableArray * devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    bool  figCaptureSessionRunning;
    bool  figCaptureSessionStarted;
    struct OpaqueFigReentrantMutex { } * figCaptureSourceConfigChangeCacheMutex;
    int  graphRebuildFromCommitConfigRefCount;
    long long  graphRebuildSignalCount;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    float  hardwareCost;
    NSMutableArray * inputs;
    bool  interrupted;
    bool  isCameraOrDerivative;
    AVCaptureSessionConfiguration * liveAVCaptureSessionConfiguration;
    bool  notifiesOnMainThread;
    NSMutableArray * outputs;
    AVRunLoopCondition * runLoopCondition;
    bool  running;
    id  serverConnectionDiedNotificationToken;
    NSObject<OS_dispatch_semaphore> * serverConnectionDiedSemaphore;
    FigCaptureSessionConfiguration * sessionConfig;
    NSString * sessionPreset;
    NSError * stopError;
    struct OpaqueCMClock { } * synchronizationClock;
    NSObject<OS_tcc_identity> * tccIdentity;
    bool  usesApplicationAudioSession;
    bool  videoInputDeviceUsed;
    NSHashTable * videoPreviewLayers;
    bool  waitingForFigCaptureSessionConfigurationToBecomeLive;
    bool  waitingForFigCaptureSessionToStart;
    bool  waitingForFigCaptureSessionToStop;
    AVWeakReference * weakReference;
    bool  xctestAuthorizedToStealDevice;
}

@end
