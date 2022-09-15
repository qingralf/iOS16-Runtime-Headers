/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMobileControlsViewController : UIViewController <AVControlEventPublishing> {
    NSArray * _controlItems;
    <AVMobileControlsViewControllerDelegate> * _delegate;
    <AVKitLayoutItem> * _displayModeControlsLayoutItem;
    AVControlEventManager * _eventManager;
    AVMobileFullscreenController * _fullscreenController;
    unsigned long long  _includedControls;
    bool  _optimizeForPerformance;
    AVPictureInPictureController * _pipController;
    AVPlaybackSpeedCollection * _playbackSpeedCollection;
    AVPlayerController * _playerController;
    bool  _requiresLinearPlayback;
    AVRoutingConfiguration * _routingConfiguration;
    unsigned long long  _secondaryPlaybackControlsType;
    bool  _showsFullScreenControl;
    NSArray * _transportBarCustomMenuItems;
    <AVKitLayoutItem> * _transportControlsLayoutItem;
    unsigned long long  _visibileControls;
    unsigned long long  _visibilityPolicy;
    <AVVolumeController> * _volumeController;
    <AVKitLayoutItem> * _volumeControlsLayoutItem;
}

@property (nonatomic, copy) NSArray *controlItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVMobileControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <AVKitLayoutItem> *displayModeControlsLayoutItem;
@property (nonatomic, retain) AVMobileFullscreenController *fullscreenController;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long includedControls;
@property (nonatomic) bool optimizeForPerformance;
@property (nonatomic, retain) AVPictureInPictureController *pipController;
@property (nonatomic, retain) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool requiresLinearPlayback;
@property (nonatomic, retain) AVRoutingConfiguration *routingConfiguration;
@property (nonatomic) unsigned long long secondaryPlaybackControlsType;
@property (nonatomic) bool showsFullScreenControl;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *transportBarCustomMenuItems;
@property (nonatomic, readonly) <AVKitLayoutItem> *transportControlsLayoutItem;
@property (nonatomic) unsigned long long visibileControls;
@property (nonatomic) unsigned long long visibilityPolicy;
@property (nonatomic, retain) <AVVolumeController> *volumeController;
@property (nonatomic, readonly) <AVKitLayoutItem> *volumeControlsLayoutItem;

- (void).cxx_destruct;
- (void)addAction:(SEL)arg1 withTarget:(id)arg2 forControlEvent:(id)arg3;
- (id)controlItems;
- (id)delegate;
- (id)displayModeControlsLayoutItem;
- (id)eventManager;
- (void)flashControlsWithDuration:(double)arg1;
- (id)fullscreenController;
- (unsigned long long)includedControls;
- (id)init;
- (bool)optimizeForPerformance;
- (id)pipController;
- (id)playbackSpeedCollection;
- (id)playerController;
- (bool)requiresLinearPlayback;
- (id)routingConfiguration;
- (unsigned long long)secondaryPlaybackControlsType;
- (void)setControlItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullscreenController:(id)arg1;
- (void)setIncludedControls:(unsigned long long)arg1;
- (void)setOptimizeForPerformance:(bool)arg1;
- (void)setPipController:(id)arg1;
- (void)setPlaybackSpeedCollection:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setRoutingConfiguration:(id)arg1;
- (void)setSecondaryPlaybackControlsType:(unsigned long long)arg1;
- (void)setShowsFullScreenControl:(bool)arg1;
- (void)setTransportBarCustomMenuItems:(id)arg1;
- (void)setVisibileControls:(unsigned long long)arg1;
- (void)setVisibilityPolicy:(unsigned long long)arg1;
- (void)setVolumeController:(id)arg1;
- (bool)showsFullScreenControl;
- (void)toggleVisibility:(id)arg1;
- (id)transportBarCustomMenuItems;
- (id)transportControlsLayoutItem;
- (void)updateVisibilityPolicy:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)visibileControls;
- (unsigned long long)visibilityPolicy;
- (id)volumeController;
- (id)volumeControlsLayoutItem;

@end