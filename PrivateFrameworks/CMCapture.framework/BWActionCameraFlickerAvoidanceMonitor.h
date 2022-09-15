/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWActionCameraFlickerAvoidanceMonitor : NSObject {
    int  _confidenceHysteresis;
    int  _confidenceThreshold;
    NSDictionary * _defaultMaxExposureDurationFrameworkOverrideByPortType;
    int  _flickerFrequency;
    bool  _frameRateAware;
    int  _frameRateCompatibleFlickerFrequency;
}

@property (nonatomic) int flickerFrequency;

+ (void)initialize;

- (void)dealloc;
- (bool)detectFlickerWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromCaptureStreamWithPortType:(id)arg2;
- (int)flickerFrequency;
- (id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:(id)arg1;
- (void)setFlickerFrequency:(int)arg1;

@end