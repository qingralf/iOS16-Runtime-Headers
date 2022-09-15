/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackUserDefaults : NSObject {
    NSObject<OS_dispatch_queue> * _accountsQueue;
    NSUserDefaults * _airplayUserDefaults;
    NSUserDefaults * _iPodUserDefaults;
    NSUserDefaults * _mediaPlaybackCoreUserDefaults;
    struct { 
        int mobileiPodPrefsChanged; 
        int mobileiPodPlaybackPrefsChangedAllowCellularData; 
        int videoPrefsChanged; 
        int airplayPrefsChanged; 
    }  _notifyTokens;
    long long  _preferredVideoDownloadResolution;
    NSUserDefaults * _videoUserDefaults;
}

@property (nonatomic, readonly) double activationDelay;
@property (nonatomic, readonly) bool allowScreenRecording;
@property (nonatomic, readonly) bool allowsHighQualityMusicStreamingOnCellular;
@property (nonatomic, readonly) bool archiveSessionArtwork;
@property (nonatomic, readonly) double assetURLExpirationDuration;
@property (nonatomic, readonly) unsigned long long audioAnalysisRefreshRate;
@property (nonatomic, readonly) double crossfadeDuration;
@property (getter=isDevicePrivateListeningEnabled, nonatomic, readonly, copy) NSNumber *devicePrivateListeningEnabled;
@property (nonatomic, readonly) bool disableAssetCaching;
@property (nonatomic, readonly) bool disableAudioAnalysis;
@property (nonatomic, readonly) bool disableAudioProcessing;
@property (nonatomic, readonly) bool disableMiniSINF;
@property (nonatomic, readonly) bool disablePeriodicStateRestore;
@property (nonatomic, readonly) bool disableQHO;
@property (getter=isProcessTapEnabled, nonatomic, readonly) bool enableProcessTap;
@property (nonatomic, readonly) bool forceLibrarySupplementalContexts;
@property (nonatomic, readonly) bool forceMusicResolution;
@property (nonatomic, readonly) bool forceMusicStreaming;
@property (nonatomic, readonly) long long forcedMusicResolution;
@property (nonatomic, readonly) double forwardBufferDuration;
@property (nonatomic, readonly) bool includeContentItemDebugFields;
@property (nonatomic, readonly) long long maximumQueueHandOffSize;
@property (nonatomic, readonly) MPPlaybackEQSetting *musicEQSetting;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (nonatomic, readonly) double playbackAuthorizationTokenHalfLifeDuration;
@property (nonatomic) long long preferredMusicDownloadResolution;
@property (nonatomic) long long preferredMusicHighBandwidthResolution;
@property (nonatomic) long long preferredMusicLowBandwidthResolution;
@property (nonatomic, readonly) long long preferredVideoDownloadResolution;
@property (nonatomic, readonly) long long preferredVideoHighBandwidthResolution;
@property (nonatomic, readonly) long long preferredVideoLowBandwidthResolution;
@property (nonatomic) bool prefersSpatialAudio;
@property (nonatomic) bool prefersSpatialDownloads;
@property (nonatomic, readonly) bool prerollEnabled;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) float progressiveDownloadAssetRatio;
@property (nonatomic, readonly) bool showDebugUI;
@property (nonatomic) bool showLosslessAudio;
@property (nonatomic) bool soundCheckEnabled;
@property (nonatomic) long long spatialAudioPreference;
@property (nonatomic, readonly) bool speakerRouteEnabled;

+ (id)standardUserDefaults;

- (void).cxx_destruct;
- (void)_accountStoreChangedNotification:(id)arg1;
- (id)_init;
- (void)_loadAccountProperties;
- (void)_migrateUserDefaults;
- (double)activationDelay;
- (bool)allowScreenRecording;
- (bool)allowsHighQualityMusicStreamingOnCellular;
- (bool)archiveSessionArtwork;
- (double)assetURLExpirationDuration;
- (unsigned long long)audioAnalysisRefreshRate;
- (bool)autoPlayEnabledForUserIdentity:(id)arg1;
- (double)crossfadeDuration;
- (void)dealloc;
- (bool)disableAssetCaching;
- (bool)disableAudioAnalysis;
- (bool)disableAudioProcessing;
- (bool)disableMiniSINF;
- (bool)disablePeriodicStateRestore;
- (bool)disableQHO;
- (bool)forceLibrarySupplementalContexts;
- (bool)forceMusicResolution;
- (bool)forceMusicStreaming;
- (long long)forcedMusicResolution;
- (double)forwardBufferDuration;
- (bool)includeContentItemDebugFields;
- (id)isDevicePrivateListeningEnabled;
- (id)isPrivateListeningEnabled;
- (bool)isProcessTapEnabled;
- (long long)maximumQueueHandOffSize;
- (id)musicEQSetting;
- (long long)musicRepeatType;
- (long long)musicShuffleType;
- (double)playbackAuthorizationTokenHalfLifeDuration;
- (long long)preferredMusicDownloadResolution;
- (long long)preferredMusicHighBandwidthResolution;
- (long long)preferredMusicLowBandwidthResolution;
- (long long)preferredVideoDownloadResolution;
- (long long)preferredVideoHighBandwidthResolution;
- (long long)preferredVideoLowBandwidthResolution;
- (bool)prefersSpatialAudio;
- (bool)prefersSpatialDownloads;
- (bool)prerollEnabled;
- (float)progressiveDownloadAssetRatio;
- (void)resetAllInternalSettings;
- (void)setAutoPlayEnabled:(bool)arg1 forUserIdentity:(id)arg2;
- (void)setMusicRepeatType:(long long)arg1;
- (void)setMusicShuffleType:(long long)arg1;
- (void)setPlaybackAuthorizationTokenHalfLifeDuration:(double)arg1;
- (void)setPreferredMusicDownloadResolution:(long long)arg1;
- (void)setPreferredMusicHighBandwidthResolution:(long long)arg1;
- (void)setPreferredMusicLowBandwidthResolution:(long long)arg1;
- (void)setPrefersSpatialAudio:(bool)arg1;
- (void)setPrefersSpatialDownloads:(bool)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (void)setShowLosslessAudio:(bool)arg1;
- (void)setSoundCheckEnabled:(bool)arg1;
- (void)setSpatialAudioPreference:(long long)arg1;
- (bool)showDebugUI;
- (bool)showLosslessAudio;
- (bool)soundCheckEnabled;
- (long long)spatialAudioPreference;
- (bool)speakerRouteEnabled;

@end