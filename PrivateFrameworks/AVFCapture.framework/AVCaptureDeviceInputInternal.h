/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureDeviceInputInternal : NSObject {
    bool  backgroundBlurAllowed;
    bool  builtInMicrophoneStereoAudioCaptureEnabled;
    bool  cameraCalibrationDataDeliveryEnabled;
    bool  centerStageAllowed;
    AVCaptureDevice * device;
    <AVCallbackCancellation> * deviceOpenCallbackInvoker;
    float  maxGainOverride;
    NSArray * multiCamPorts;
    float  portraitLightingEffectStrength;
    NSArray * ports;
    bool  ready;
    float  simulatedAperture;
    bool  studioLightingAllowed;
    bool  unifiedAutoExposureDefaultsEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMinFrameDurationOverride;
    bool  visionDataDeliveryEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;

@end