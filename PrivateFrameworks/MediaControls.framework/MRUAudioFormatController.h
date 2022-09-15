/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUAudioFormatController : NSObject <MRExpanseManagerObserver, MRNowPlayingAudioFormatControllerDelegate> {
    MRNowPlayingAudioFormatController * _audioFormatController;
    <MRUAudioFormatControllerDelegate> * _delegate;
    bool  _isFaceTimePreferencesVisible;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    bool  _optimisticSpatialAudioActive;
    NSTimer * _optimisticTimer;
}

@property (nonatomic, retain) MRNowPlayingAudioFormatController *audioFormatController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUAudioFormatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayBundleID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFaceTimePreferencesVisible;
@property (nonatomic, readonly) bool isMultichannelAvailable;
@property (nonatomic, readonly) bool isMultichannelPreferencesVisible;
@property (nonatomic, readonly) bool isSpatialAudioActive;
@property (nonatomic, readonly) bool isSpatialAudioEnabled;
@property (nonatomic, readonly) bool isSpatialAudioNotAvailable;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *layoutMonitor;
@property (nonatomic) bool optimisticSpatialAudioActive;
@property (nonatomic, retain) NSTimer *optimisticTimer;
@property (nonatomic, readonly) NSString *preferencesBundleID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioFormatController;
- (id)audioFormatDescriptionForPreferences:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayBundleID;
- (void)expanseManagerDidJoinExpanseSession:(id)arg1;
- (void)expanseManagerDidLeaveExpanseSession:(id)arg1;
- (id)init;
- (bool)isFaceTimePreferencesVisible;
- (bool)isMultichannelAvailable;
- (bool)isMultichannelPreferencesVisible;
- (bool)isSpatialAudioActive;
- (bool)isSpatialAudioEnabled;
- (bool)isSpatialAudioNotAvailable;
- (id)layoutMonitor;
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeAudioFormatContentInfo:(id)arg2;
- (void)nowPlayingAudioFormatController:(id)arg1 didChangeBundleID:(id)arg2 displayName:(id)arg3;
- (bool)optimisticSpatialAudioActive;
- (id)optimisticTimer;
- (id)preferencesBundleID;
- (void)resetOptimisticSpatialAudioActive;
- (void)setAudioFormatController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFaceTimePreferencesVisible:(bool)arg1;
- (void)setLayoutMonitor:(id)arg1;
- (void)setOptimisticSpatialAudioActive:(bool)arg1;
- (void)setOptimisticTimer:(id)arg1;
- (void)startMonitoring;
- (void)startOptimisticSpatialAudioActive;
- (void)stopMonitoring;
- (void)stopOptimisticSpatialAudioActive;
- (void)updateFacetime;

@end