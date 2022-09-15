/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsView : UIView {
    AVControlOverflowButton * _controlOverflowButton;
    NSArray * _customAudioItems;
    NSArray * _customControlItems;
    AVPlayerViewControllerCustomControlsView * _customControlsView;
    NSArray * _customDisplayModeItems;
    NSArray * _customMediaItems;
    NSArray * _defaultAudioControls;
    NSArray * _defaultDisplayModeControls;
    AVButton * _doneButton;
    bool  _doubleRowLayoutEnabled;
    bool  _fullScreen;
    AVButton * _fullScreenButton;
    long long  _includedContainers;
    double  _keyboardHeight;
    UIViewPropertyAnimator * _keyboardUIAvoidanceAnimator;
    AVButton * _mediaSelectionButton;
    NSUUID * _mostRecentAnimationCompletionsID;
    bool  _needsIntialLayout;
    AVObservationController * _observationController;
    NSValue * _overrideLayoutMarginsWhenEmbeddedInline;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _overrideTransformForProminentPlayButton;
    AVButton * _pictureInPictureButton;
    AVTouchIgnoringView * _playbackControlsContainer;
    UIViewPropertyAnimator * _playbackControlsVisibilityAnimator;
    AVButton * _playbackSpeedButton;
    long long  _preferredUnobscuredArea;
    bool  _prefersDoneButtonIncluded;
    bool  _prefersFullScreenButtonIncluded;
    bool  _prefersPiPButtonIncluded;
    bool  _prefersVideoGravityButtonIncluded;
    bool  _prefersVolumeSliderExpandedAutomatically;
    AVButton * _prominentPlayButton;
    AVLayoutView * _prominentPlayButtonContainerView;
    AVPlaybackControlsRoutePickerView * _routePickerView;
    AVLayoutView * _screenModeControls;
    AVScrubber * _scrubber;
    bool  _showsAudioControls;
    bool  _showsPlaybackControls;
    AVButton * _skipBackButton;
    AVButton * _skipForwardButton;
    AVButton * _standardPlayPauseButton;
    AVButton * _startLeftwardContentTransitionButton;
    AVButton * _startRightwardContentTransitionButton;
    AVMobileChromeControlsStyleSheet * _styleSheet;
    bool  _topAreaLayoutGuideExpanded;
    AVView * _transportControlsContainerView;
    AVTransportControlsView * _transportControlsView;
    AVButton * _videoGravityButton;
    <AVPlaybackControlsViewVisibilityDelegate> * _visibilityDelegate;
    AVVolumeButtonControl * _volumeButton;
    AVLayoutView * _volumeControls;
    AVTouchIgnoringView * _volumeControlsContainer;
    AVVolumeSlider * _volumeSlider;
}

@property (nonatomic, readonly) AVControlOverflowButton *controlOverflowButton;
@property (nonatomic, readonly, copy) NSArray *customAudioItems;
@property (nonatomic, readonly, copy) NSArray *customControlItems;
@property (nonatomic, retain) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (nonatomic, readonly, copy) NSArray *customDisplayModeItems;
@property (nonatomic, readonly, copy) NSArray *customMediaItems;
@property (nonatomic, readonly) NSArray *defaultAudioControls;
@property (nonatomic, readonly) NSArray *defaultDisplayModeControls;
@property (nonatomic, readonly) AVButton *doneButton;
@property (getter=isDoubleRowLayoutEnabled, nonatomic) bool doubleRowLayoutEnabled;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic, readonly) AVButton *fullScreenButton;
@property (nonatomic, readonly) bool hasVisibleSubview;
@property (nonatomic, readonly) long long includedContainers;
@property (nonatomic, readonly) bool includesAudioControlsContainer;
@property (nonatomic, readonly) bool includesCustomAudioControls;
@property (nonatomic, readonly) bool includesCustomDisplayModeControls;
@property (nonatomic, readonly) bool includesDisplayModeControlsContainer;
@property (nonatomic, readonly) bool includesTransportControls;
@property (nonatomic) double keyboardHeight;
@property (nonatomic, readonly) UIViewPropertyAnimator *keyboardUIAvoidanceAnimator;
@property (nonatomic, readonly) AVButton *mediaSelectionButton;
@property (nonatomic, retain) NSUUID *mostRecentAnimationCompletionsID;
@property (nonatomic) bool needsIntialLayout;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, retain) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } overrideTransformForProminentPlayButton;
@property (nonatomic, readonly) AVButton *pictureInPictureButton;
@property (nonatomic, readonly) AVTouchIgnoringView *playbackControlsContainer;
@property (nonatomic, retain) UIViewPropertyAnimator *playbackControlsVisibilityAnimator;
@property (nonatomic, readonly) AVButton *playbackSpeedButton;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) bool prefersDoneButtonIncluded;
@property (nonatomic) bool prefersFullScreenButtonIncluded;
@property (nonatomic) bool prefersPiPButtonIncluded;
@property (nonatomic) bool prefersVideoGravityButtonIncluded;
@property (nonatomic) bool prefersVolumeSliderExpandedAutomatically;
@property (nonatomic, readonly) AVButton *prominentPlayButton;
@property (nonatomic, readonly) AVLayoutView *prominentPlayButtonContainerView;
@property (nonatomic, readonly) AVPlaybackControlsRoutePickerView *routePickerView;
@property (nonatomic, readonly) AVLayoutView *screenModeControls;
@property (nonatomic, readonly) AVScrubber *scrubber;
@property (nonatomic) bool showsAudioControls;
@property (nonatomic) bool showsPlaybackControls;
@property (nonatomic, readonly) bool showsProminentPlayButton;
@property (nonatomic, readonly) AVButton *skipBackButton;
@property (nonatomic, readonly) AVButton *skipForwardButton;
@property (nonatomic, readonly) AVButton *standardPlayPauseButton;
@property (nonatomic, readonly) AVButton *startLeftwardContentTransitionButton;
@property (nonatomic, readonly) AVButton *startRightwardContentTransitionButton;
@property (nonatomic, retain) AVMobileChromeControlsStyleSheet *styleSheet;
@property (getter=isTopAreaLayoutGuideExpanded, nonatomic) bool topAreaLayoutGuideExpanded;
@property (nonatomic, readonly) AVView *transportControlsContainerView;
@property (nonatomic, readonly) AVTransportControlsView *transportControlsView;
@property (nonatomic, readonly) AVButton *videoGravityButton;
@property (nonatomic) <AVPlaybackControlsViewVisibilityDelegate> *visibilityDelegate;
@property (nonatomic, readonly) AVVolumeButtonControl *volumeButton;
@property (nonatomic, readonly) AVLayoutView *volumeControls;
@property (nonatomic, readonly) AVTouchIgnoringView *volumeControlsContainer;
@property (nonatomic, readonly) AVVolumeSlider *volumeSlider;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (void).cxx_destruct;
- (void)_animateKeyboardAvoidance:(long long)arg1 duration:(double)arg2;
- (id)_audioViewsToRemoveDuringAnimation;
- (void)_collapse:(bool)arg1 view:(id)arg2;
- (void)_collapse:(bool)arg1 views:(id)arg2;
- (id)_currentArrangedAudioModeViews;
- (id)_currentArrangedDisplayModeViews;
- (id)_customControlsViewIfLoaded;
- (id)_displayModeViewsToRemoveDuringAnimation;
- (id)_playbackControlsViewItems;
- (id)_playbackControlsViewsForControlItems:(id)arg1 withType:(long long)arg2;
- (id)_preferredArrangedAudioModeViews;
- (id)_preferredArrangedDisplayModeViews;
- (void)_setupInitialLayout;
- (void)_showPlaybackControlsAnimated:(bool)arg1;
- (void)_updateAreVolumeAndTransportControlsVisible;
- (void)_updateDoubleRowLayoutEnabled;
- (void)_updateLayoutMargins;
- (void)_updatePlaybackControlsContainerVisibilityAnimated:(bool)arg1 additionalActions:(id /* block */)arg2;
- (void)_updateTransportControlsFrame;
- (void)_updateVolumeControlsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;
- (id)controlOverflowButton;
- (id)customAudioItems;
- (id)customControlItems;
- (id)customControlsView;
- (id)customDisplayModeItems;
- (id)customMediaItems;
- (void)dealloc;
- (id)defaultAudioControls;
- (id)defaultDisplayModeControls;
- (id)doneButton;
- (id)fullScreenButton;
- (bool)hasVisibleSubview;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)includedContainers;
- (bool)includesAudioControlsContainer;
- (bool)includesCustomAudioControls;
- (bool)includesCustomDisplayModeControls;
- (bool)includesDisplayModeControlsContainer;
- (bool)includesTransportControls;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2;
- (bool)isDoubleRowLayoutEnabled;
- (bool)isFullScreen;
- (bool)isTopAreaLayoutGuideExpanded;
- (double)keyboardHeight;
- (id)keyboardUIAvoidanceAnimator;
- (void)layoutSubviews;
- (id)mediaSelectionButton;
- (id)mostRecentAnimationCompletionsID;
- (bool)needsIntialLayout;
- (id)observationController;
- (id)overrideLayoutMarginsWhenEmbeddedInline;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })overrideTransformForProminentPlayButton;
- (id)pictureInPictureButton;
- (id)playbackControlsContainer;
- (id)playbackControlsVisibilityAnimator;
- (id)playbackSpeedButton;
- (long long)preferredUnobscuredArea;
- (bool)prefersDoneButtonIncluded;
- (bool)prefersFullScreenButtonIncluded;
- (bool)prefersPiPButtonIncluded;
- (bool)prefersVideoGravityButtonIncluded;
- (bool)prefersVolumeSliderExpandedAutomatically;
- (id)prominentPlayButton;
- (id)prominentPlayButtonContainerView;
- (void)reevaluateHiddenStateForContainersAndSubviews;
- (id)routePickerView;
- (void)safeAreaInsetsDidChange;
- (id)screenModeControls;
- (id)scrubber;
- (void)setCustomControlItems:(id)arg1 animations:(id /* block */)arg2;
- (void)setCustomControlsView:(id)arg1;
- (void)setDoubleRowLayoutEnabled:(bool)arg1;
- (void)setIncludedContainers:(long long)arg1 animations:(id /* block */)arg2;
- (void)setKeyboardHeight:(double)arg1;
- (void)setMostRecentAnimationCompletionsID:(id)arg1;
- (void)setNeedsIntialLayout:(bool)arg1;
- (void)setOverrideLayoutMarginsWhenEmbeddedInline:(id)arg1;
- (void)setOverrideTransformForProminentPlayButton:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPlaybackControlsVisibilityAnimator:(id)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setPrefersDoneButtonIncluded:(bool)arg1;
- (void)setPrefersFullScreenButtonIncluded:(bool)arg1;
- (void)setPrefersPiPButtonIncluded:(bool)arg1;
- (void)setPrefersVideoGravityButtonIncluded:(bool)arg1;
- (void)setPrefersVolumeSliderExpanded:(bool)arg1 prefersVolumeButtonIncluded:(bool)arg2 animated:(bool)arg3;
- (void)setPrefersVolumeSliderExpandedAutomatically:(bool)arg1;
- (void)setShowsAudioControls:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setTopAreaLayoutGuideExpanded:(bool)arg1;
- (void)setVisibilityDelegate:(id)arg1;
- (void)setupInitialLayout;
- (void)showPlaybackControls:(bool)arg1 immediately:(bool)arg2;
- (bool)showsAudioControls;
- (bool)showsPlaybackControls;
- (bool)showsProminentPlayButton;
- (id)skipBackButton;
- (id)skipForwardButton;
- (id)standardPlayPauseButton;
- (id)startLeftwardContentTransitionButton;
- (id)startRightwardContentTransitionButton;
- (id)styleSheet;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlsContainerView;
- (id)transportControlsView;
- (void)updateDisplayControlsVisibilityIncludedButtons:(id)arg1;
- (id)videoGravityButton;
- (id)visibilityDelegate;
- (id)volumeButton;
- (id)volumeControls;
- (id)volumeControlsContainer;
- (id)volumeSlider;

// Image: /System/Library/AccessibilityBundles/AVKit.axbundle/AVKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityAllControlsAreHidden;
- (id)_accessibilityFullScreenViewController;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityNextResponderOfClass:(Class)arg1;
- (id)_accessibilityPlaybackControlsVisibilityController;
- (id)_accessibilityPlayerViewController;
- (bool)_accessibilityViewIsVisible;
- (bool)accessibilityElementsHidden;
- (void)setFullScreen:(bool)arg1;

@end