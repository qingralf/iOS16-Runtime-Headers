/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    float  _EUVolumeLimit;
    AVSystemController * _avSystemController;
    NSObject<OS_dispatch_queue> * _avscQueue;
    <MPVolumeControllerDataSourceDelegate> * _delegate;
    bool  _forceAVSystemController;
    bool  _muted;
    NSMutableArray * _pendingVolumeCompletions;
    float  _volume;
    NSSet * _volumeAudioCategories;
    NSString * _volumeAudioCategory;
    bool  _volumeControlAvailable;
    unsigned int  _volumeControlCapabilities;
    bool  _volumeControlCapabilitiesInitialized;
    NSString * _volumeControlLabel;
    bool  _volumeInitialized;
    bool  _volumeWarningEnabled;
    long long  _volumeWarningState;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, readonly) bool applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVolumeControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceAVSystemController;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (readonly) Class superclass;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSSet *volumeAudioCategories;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) unsigned int volumeControlCapabilities;
@property (nonatomic, readonly, copy) NSString *volumeControlLabel;
@property (nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (id)_mediaPlaybackVolumeAudioCategory;
- (void)_mediaServerDiedNotification:(id)arg1;
- (id)_reloadQueue;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_setup;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_tearDown;
- (void)_updateRouteLabelForRoute:(id)arg1;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (bool)applicationShouldOverrideHardwareVolumeBehavior;
- (void)beginDecreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (bool)forceAVSystemController;
- (void)getVolumeValueWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initCommon;
- (id)initWithVolumeAudioCategories:(id)arg1;
- (id)initWithVolumeAudioCategory:(id)arg1;
- (void)initializeVolume;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (void)reload;
- (void)reloadWarning;
- (void)setDelegate:(id)arg1;
- (void)setForceAVSystemController:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)updateVolume:(float)arg1;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;
- (float)volume;
- (id)volumeAudioCategories;
- (id)volumeAudioCategory;
- (unsigned int)volumeControlCapabilities;
- (id)volumeControlLabel;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

@end