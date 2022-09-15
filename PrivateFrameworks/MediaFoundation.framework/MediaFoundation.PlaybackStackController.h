/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
 */

@interface MediaFoundation.PlaybackStackController : _TtCs12_SwiftObject <MFAudioSessionControlling, MFPlayerConfigurable, MFResettable, MFStackModeConfigurable, MFStateDumpable> {
    void backgroundTaskController;
    void currentSetQueueIdentifier;
    void errorController;
    void internalController;
    void playerController;
    void queueAssetLoader;
    void queueController;
    void reporter;
}

@property (nonatomic, readonly) bool isModeManagedSession;
@property (nonatomic, readonly) bool isModeShared;
@property (nonatomic, readonly) bool isModeSolo;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)activateAudioSessionWithCompletion:(id /* block */)arg1;
- (bool)isModeManagedSession;
- (bool)isModeShared;
- (bool)isModeSolo;
- (id)modeDescription;
- (void)reset;
- (void)setRelativeVolume:(float)arg1;
- (void)setSpatializationFormat:(long long)arg1;
- (void)setupForManagedSessionWithAudioSession:(id)arg1;
- (void)setupForShared;
- (void)setupForSolo;
- (id)stateDictionary;
- (void)updateAudioSessionWithConfiguration:(id)arg1;

@end