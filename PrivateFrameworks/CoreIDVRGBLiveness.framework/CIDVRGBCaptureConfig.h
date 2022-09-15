/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDVRGBLiveness.framework/CoreIDVRGBLiveness
 */

@interface CIDVRGBCaptureConfig : NSObject {
    const struct __CFString { } * _encryptionAlgorithm;
    id  _encryptionKey;
    NSDictionary * _encryptionParameters;
    NSNumber * _faceOutOfBoundFrames;
    NSNumber * _gestureCompletionDelay;
    NSNumber * _gestureDetectedSuccessDuration;
    NSArray * _gestureSequence;
    NSNumber * _gestureSkipHardAccessible;
    NSNumber * _gestureSkipHardTimeout;
    NSNumber * _gestureSkipSoftAccessible;
    NSNumber * _gestureSkipSoftTimeout;
    NSArray * _gestureTypes;
    NSNumber * _imageCompressionQuality;
    NSNumber * _imageHeight;
    NSNumber * _imageWidth;
    NSString * _issuerName;
    NSNumber * _lastGestureExtraFrameDuration;
    NSNumber * _maxRetakeCount;
    NSNumber * _minRequiredGesturesCount;
    UIViewController * _parentVC;
    bool  _requiresGoodLux;
    const struct __CFString { } * _signingAlgorithm;
    id  _signingKey;
    NSData * _signingNonce;
    long long  _targetDevice;
    NSNumber * _timeout;
    NSNumber * _tutorialResumeDelay;
    NSNumber * _tutorialVideoDelay;
    NSNumber * _tutorialVideoDuration;
}

@property (nonatomic) const struct __CFString { }*encryptionAlgorithm;
@property (nonatomic, retain) id encryptionKey;
@property (nonatomic, retain) NSDictionary *encryptionParameters;
@property (nonatomic, retain) NSNumber *faceOutOfBoundFrames;
@property (nonatomic, retain) NSNumber *gestureCompletionDelay;
@property (nonatomic, retain) NSNumber *gestureDetectedSuccessDuration;
@property (nonatomic, retain) NSArray *gestureSequence;
@property (nonatomic, retain) NSNumber *gestureSkipHardAccessible;
@property (nonatomic, retain) NSNumber *gestureSkipHardTimeout;
@property (nonatomic, retain) NSNumber *gestureSkipSoftAccessible;
@property (nonatomic, retain) NSNumber *gestureSkipSoftTimeout;
@property (nonatomic, retain) NSArray *gestureTypes;
@property (nonatomic, retain) NSNumber *imageCompressionQuality;
@property (nonatomic, retain) NSNumber *imageHeight;
@property (nonatomic, retain) NSNumber *imageWidth;
@property (nonatomic, retain) NSString *issuerName;
@property (nonatomic, retain) NSNumber *lastGestureExtraFrameDuration;
@property (nonatomic, retain) NSNumber *maxRetakeCount;
@property (nonatomic, retain) NSNumber *minRequiredGesturesCount;
@property (nonatomic) UIViewController *parentVC;
@property (nonatomic) bool requiresGoodLux;
@property (nonatomic) const struct __CFString { }*signingAlgorithm;
@property (nonatomic, retain) id signingKey;
@property (nonatomic, retain) NSData *signingNonce;
@property (nonatomic) long long targetDevice;
@property (nonatomic, retain) NSNumber *timeout;
@property (nonatomic, retain) NSNumber *tutorialResumeDelay;
@property (nonatomic, retain) NSNumber *tutorialVideoDelay;
@property (nonatomic, retain) NSNumber *tutorialVideoDuration;

- (void).cxx_destruct;
- (const struct __CFString { }*)encryptionAlgorithm;
- (id)encryptionKey;
- (id)encryptionParameters;
- (id)faceOutOfBoundFrames;
- (id)gestureCompletionDelay;
- (id)gestureDetectedSuccessDuration;
- (id)gestureSequence;
- (id)gestureSkipHardAccessible;
- (id)gestureSkipHardTimeout;
- (id)gestureSkipSoftAccessible;
- (id)gestureSkipSoftTimeout;
- (id)gestureTypes;
- (id)imageCompressionQuality;
- (id)imageHeight;
- (id)imageWidth;
- (id)issuerName;
- (id)lastGestureExtraFrameDuration;
- (id)maxRetakeCount;
- (id)minRequiredGesturesCount;
- (id)parentVC;
- (bool)requiresGoodLux;
- (void)sanitize;
- (void)setEncryptionAlgorithm:(const struct __CFString { }*)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setEncryptionParameters:(id)arg1;
- (void)setFaceOutOfBoundFrames:(id)arg1;
- (void)setGestureCompletionDelay:(id)arg1;
- (void)setGestureDetectedSuccessDuration:(id)arg1;
- (void)setGestureSequence:(id)arg1;
- (void)setGestureSkipHardAccessible:(id)arg1;
- (void)setGestureSkipHardTimeout:(id)arg1;
- (void)setGestureSkipSoftAccessible:(id)arg1;
- (void)setGestureSkipSoftTimeout:(id)arg1;
- (void)setGestureTypes:(id)arg1;
- (void)setImageCompressionQuality:(id)arg1;
- (void)setImageHeight:(id)arg1;
- (void)setImageWidth:(id)arg1;
- (void)setIssuerName:(id)arg1;
- (void)setLastGestureExtraFrameDuration:(id)arg1;
- (void)setMaxRetakeCount:(id)arg1;
- (void)setMinRequiredGesturesCount:(id)arg1;
- (void)setParentVC:(id)arg1;
- (void)setRequiresGoodLux:(bool)arg1;
- (void)setSigningAlgorithm:(const struct __CFString { }*)arg1;
- (void)setSigningKey:(id)arg1;
- (void)setSigningNonce:(id)arg1;
- (void)setTargetDevice:(long long)arg1;
- (void)setTimeout:(id)arg1;
- (void)setTutorialResumeDelay:(id)arg1;
- (void)setTutorialVideoDelay:(id)arg1;
- (void)setTutorialVideoDuration:(id)arg1;
- (const struct __CFString { }*)signingAlgorithm;
- (id)signingKey;
- (id)signingNonce;
- (long long)targetDevice;
- (id)timeout;
- (id)tutorialResumeDelay;
- (id)tutorialVideoDelay;
- (id)tutorialVideoDuration;

@end