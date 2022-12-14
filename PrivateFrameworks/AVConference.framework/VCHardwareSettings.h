/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettings : NSObject {
    NSMutableDictionary * _hardwareUsageModeSettings;
    bool  _isSiriVoicePlayoutSupported;
    bool  _isSiriVoiceTapSupported;
    NSMutableSet * _pixelFormatCollections;
    int  _supportHEVC;
    bool  _supportVCPEncoder;
    bool  _supportVCPEncoderInitialized;
}

@property (nonatomic, readonly) bool isSiriVoicePlayoutSupported;
@property (nonatomic, readonly) bool isSiriVoiceTapSupported;
@property (nonatomic, readonly) bool isVideoRenderingSupported;
@property (nonatomic, readonly) NSSet *pixelFormatCollections;
@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;

+ (unsigned int)builtinMicCount;
+ (long long)deviceClass;
+ (bool)disableMLScalarDuringSharing;
+ (bool)disableViewPointCorrectionForSharing;
+ (struct CGPoint { double x1; double x2; })frontCameraOffsetFromDisplayCenter;
+ (bool)isCaptionsSupported;
+ (bool)isCaptureSIFRPreferred;
+ (bool)isCellularTappingSupported;
+ (bool)isDisplayPortrait;
+ (bool)isSiriVoicePlayoutSupported;
+ (bool)isSiriVoiceTapSupported;
+ (bool)isSpatialAudioSupported;
+ (bool)isVideoRenderingSupported;
+ (bool)limitCameraDownlinkBitrateDuringSharing;
+ (unsigned int)maxActiveScreenEncoders;
+ (unsigned int)maxActiveVideoDecoders;
+ (unsigned int)maxActiveVideoEncoders;
+ (unsigned int)maxFpsCameraCaptureDuringSharing;
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;
+ (unsigned int)maxFrameRateSupportedScreenShare;
+ (unsigned int)maxMultiwayFramerateSupported;
+ (unsigned int)maxOneToOneFramerateSupported;
+ (unsigned int)maxRemoteParticipants30fps;
+ (unsigned long long)maxScreenEncodingSizeSupported;
+ (unsigned int)maxVCPSupportedTemporalLayers;
+ (bool)preferPresentationTimestamp;
+ (double)previewPreferredAspectRatio;
+ (bool)retainPixelBufferForMomentsEnabled;
+ (unsigned int)screenHeight;
+ (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;
+ (long long)screenShareCapabilities;
+ (unsigned int)screenWidth;
+ (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;
+ (bool)shouldEnforceScreenFrameRateLimit;
+ (bool)shouldOverrideGPUMuxing;
+ (id)supportedVideoPayloads;
+ (bool)supportsDedicatedSystemAudioStream;
+ (bool)supportsHEIFEncoding;
+ (bool)supportsHEVCDecoding;
+ (bool)supportsHEVCEncoding;
+ (bool)supportsPortraitCameraCapture;

- (void)dealloc;
- (id)featureListStringForH264:(int)arg1;
- (id)featureListStringForHEVC:(int)arg1;
- (id)init;
- (bool)isHEVCDecodeSupported:(int)arg1;
- (bool)isHEVCEncodeSupported:(int)arg1;
- (bool)isSiriVoicePlayoutSupported;
- (bool)isSiriVoiceTapSupported;
- (bool)isVideoRenderingSupported;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(bool)arg1 isLowLatencyAudio:(bool)arg2;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(bool)arg1;
- (id)pixelFormatCollections;
- (bool)storeHardwareSettingsForAllOperatingModes;
- (bool)supportHEVC;
- (unsigned int)tilesPerVideoFrame:(int)arg1;
- (unsigned int)tilesPerVideoFrame:(int)arg1 hdrMode:(unsigned long long)arg2;
- (bool)vcpSupportsHEVCEncoder;

@end
