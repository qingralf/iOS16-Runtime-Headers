/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMomentCaptureSettings : NSObject {
    bool  _autoOriginalPhotoDeliveryEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    long long  _flashMode;
    long long  _hdrMode;
    long long  _lowLightMode;
    long long  _maximumPhotoResolution;
    NSString * _persistenceUUID;
    long long  _photoEncodingBehavior;
    long long  _photoQualityPrioritization;
    bool  _shouldDisableCameraSwitchingDuringVideoRecording;
    long long  _torchMode;
    unsigned long long  _userInitiationTime;
}

@property (nonatomic, readonly) bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, readonly) bool autoSpatialOverCaptureEnabled;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) long long lowLightMode;
@property (nonatomic, readonly) long long maximumPhotoResolution;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) long long photoQualityPrioritization;
@property (nonatomic, readonly) bool shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic, readonly) long long torchMode;
@property (nonatomic, readonly) unsigned long long userInitiationTime;

- (void).cxx_destruct;
- (bool)autoOriginalPhotoDeliveryEnabled;
- (bool)autoSpatialOverCaptureEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)flashMode;
- (long long)hdrMode;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (long long)lowLightMode;
- (long long)maximumPhotoResolution;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)persistenceUUID;
- (long long)photoEncodingBehavior;
- (long long)photoQualityPrioritization;
- (bool)shouldDisableCameraSwitchingDuringVideoRecording;
- (long long)torchMode;
- (unsigned long long)userInitiationTime;

@end