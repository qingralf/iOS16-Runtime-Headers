/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMobileChromelessControlsViewController : AVMobileControlsViewController <AVControlItemDelegate, AVMediaSelectionMenuDelegate, AVMobileAuxiliaryControlsViewDelegate, AVMobileChromelessDisplayModeControlsViewDelegate, AVMobileChromelessPlaybackControlsViewDelegate, AVMobileChromelessSliderDelegate, AVMobileChromelessVolumeControlsViewDelegate, AVMobileFullscreenControllerDelegate, AVPlayerControllerWebKitDelegate, AVRoutePickerViewDelegate> {
    AVMobileAuxiliaryControl * _analysisControl;
    UIAction * _analysisToggleAction;
    AVButton * _analysisToggleButton;
    AVMobileAuxiliaryControl * _audibleMediaSelectionControl;
    UIMenu * _audibleMediaSelectionMenu;
    NSArray * _auxiliaryControlsForControlItems;
    AVMobileAuxiliaryControlsView * _auxiliaryControlsView;
    NSLayoutConstraint * _auxiliaryControlsViewTopAnchorConstraint;
    bool  _canFitAuxiliaryControls;
    bool  _canFitDisplayModeControls;
    bool  _canFitPlaybackControls;
    bool  _canFitTimelineControls;
    bool  _canFitTitlebar;
    bool  _canFitVolumeControls;
    bool  _controlsExpanded;
    NSLayoutConstraint * _currentTransportControlsTopAnchorConstraint;
    struct AVMobileChromelessControlsVisibilityState_st { 
        unsigned long long visibleControls; 
        bool backgroundGradientActive; 
    }  _currentVisibilityState;
    NSLayoutConstraint * _defaultTopAnchorConstraint;
    UILayoutGuide * _displayModeControlsLayoutGuide;
    AVMobileChromelessDisplayModeControlsView * _displayModeControlsView;
    AVTimeFormatter * _elapsedTimeFormatter;
    AVMobileChromelessBackgroundGradientView * _gradientBackgroundView;
    bool  _hasBeenSetUp;
    UIViewPropertyAnimator * _keyboardUIAvoidanceAnimator;
    AVMobileAuxiliaryControl * _legibleMediaSelectionControl;
    UIMenu * _legibleMediaSelectionMenu;
    UIViewPropertyAnimator * _loadingAnimator;
    AVMediaSelectionMenuController * _mediaSelectionMenuController;
    bool  _needsControlsVisibilityStateUpdate;
    bool  _needsTimeResolverUpdate;
    AVObservationController * _observationController;
    NSArray * _pinnedAuxiliaryControls;
    AVMobileChromelessPlaybackControlsView * _playbackControlsView;
    AVMobileAuxiliaryControl * _playbackSpeedControl;
    AVMobilePlaybackRateMenuController * _playbackSpeedMenuController;
    AVTimeFormatter * _remainingTimeFormatter;
    AVMobileAuxiliaryControl * _routePickerControl;
    AVRoutePickerView * _routePickerView;
    bool  _runningLoadingAnimation;
    bool  _showsAnalysisControl;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
    double  _systemKeyboardUIHeight;
    bool  _temporarilyVisibile;
    AVPlayerControllerTimeResolver * _timeResolver;
    UIViewPropertyAnimator * _timelineSliderEmphasisAnimator;
    NSLayoutConstraint * _timelineTopAnchorConstraint;
    AVMobileChromelessTimelineView * _timelineView;
    AVMobileTitlebarView * _titlebarView;
    NSLayoutConstraint * _titlebarViewTopAnchorConstraint;
    UILayoutGuide * _transportControlsLayoutGuide;
    long long  _userInteractionCount;
    UIView * _view;
    UIViewPropertyAnimator * _visibilityAnimator;
    NSTimer * _visibilityTimer;
    UIViewPropertyAnimator * _volumeControlsEmphasisAnimator;
    UILayoutGuide * _volumeControlsLayoutGuide;
    UIViewPropertyAnimator * _volumeControlsSliderAnimator;
    AVMobileChromelessVolumeControlsView * _volumeControlsView;
    NSTimer * _volumeEmphasisAnimationDelayTimer;
    bool  _volumeSliderTemporarilyVisibileInFullscreen;
    NSTimer * _volumeSliderTemporarilyVisibleTimer;
    AVObservationController * _webKitExcludedObservationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVMobileChromelessControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsAnalysisControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st { unsigned long long x1; bool x2; })arg1 withAnimationCoordinator:(id)arg2;
- (void)_didEndUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st { unsigned long long x1; bool x2; })arg1 completed:(bool)arg2;
- (void)_handleAnalysisToggleButton;
- (void)_incrementUserInteractionCount;
- (id)_sliderMarkForInterstitialTimeRange:(id)arg1;
- (void)_timelineSliderDidChangeValue:(id)arg1;
- (void)_timelineSliderTrackingStateDidChange:(id)arg1;
- (void)_updateAudibleMediaSelectionControlInclusionState;
- (void)_updateControlsVisibilityStateIfNeededAnimated:(id)arg1;
- (void)_updateLegibleMediaSelectionControlInclusionState;
- (void)_updatePrefersSystemVolumeHUDHidden;
- (void)_updatePrefersVolumeSliderIncludedAnimated:(bool)arg1;
- (void)_updateStyleSheet;
- (void)_willBeginUpdatingControlsVisibilityStateTo:(struct AVMobileChromelessControlsVisibilityState_st { unsigned long long x1; bool x2; })arg1 withAnimationCoordinator:(id)arg2;
- (id)auxiliaryControlsView:(id)arg1 menuElementForControl:(id)arg2;
- (void)auxiliaryControlsViewDidEndShowingOverflowMenu:(id)arg1;
- (void)auxiliaryControlsViewWillBeginShowingOverflowMenu:(id)arg1;
- (void)controlItemDidUpdateVisualConfiguration:(id)arg1;
- (void)dealloc;
- (id)displayModeControlsLayoutItem;
- (void)displayModeControlsViewFullscreenButtonWasPressed:(id)arg1;
- (void)displayModeControlsViewPictureInPictureButtonWasPressed:(id)arg1;
- (void)flashControlsWithDuration:(double)arg1;
- (void)fullscreenControllerDidChangePresentationState:(id)arg1;
- (void)loadView;
- (void)mediaSelectionMenuController:(id)arg1 didSelectOption:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)playbackControlsViewLeftSecondaryControlWasPressed:(id)arg1;
- (void)playbackControlsViewPlayPauseButtonWasPressed:(id)arg1;
- (void)playbackControlsViewRightSecondaryControlWasPressed:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)setControlItems:(id)arg1;
- (void)setFullscreenController:(id)arg1;
- (void)setIncludedControls:(unsigned long long)arg1;
- (void)setOptimizeForPerformance:(bool)arg1;
- (void)setPlaybackSpeedCollection:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setRoutingConfiguration:(id)arg1;
- (void)setSecondaryPlaybackControlsType:(unsigned long long)arg1;
- (void)setShowsAnalysisControl:(bool)arg1;
- (void)setShowsFullScreenControl:(bool)arg1;
- (void)setTransportBarCustomMenuItems:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (bool)showsAnalysisControl;
- (void)sliderDidBeginTracking:(id)arg1;
- (void)sliderDidEndTracking:(id)arg1;
- (void)toggleVisibility:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlsLayoutItem;
- (void)updateVisibilityPolicy:(unsigned long long)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)visibileControls;
- (id)volumeControlsLayoutItem;
- (void)volumeControlsView:(id)arg1 volumeDidChangeTo:(double)arg2;
- (void)volumeControlsViewButtonWasTapped:(id)arg1;
- (void)volumeControlsViewInteractionDidBegin:(id)arg1;
- (void)volumeControlsViewInteractionDidEnd:(id)arg1;
- (void)webkitPlayerController:(id)arg1 didChangeScrubbingStateTo:(bool)arg2;
- (void)webkitPlayerController:(id)arg1 didUpdateSeekToTime:(double)arg2;

@end
