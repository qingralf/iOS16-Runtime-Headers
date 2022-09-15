/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPhotoEditMediaToolController : PUPhotoEditToolController <PUPhotoEditApertureToolbarDelegate, PUTrimToolControllerDelegate, PUVideoEditOverlayViewControllerDelegate, PXCinematicEditControllerDelegate> {
    CEKApertureButton * _apertureButton;
    UIView * _apertureButtonContainer;
    UIView * _apertureContainer;
    UILayoutGuide * _apertureContainerLayoutGuide;
    CEKEdgeGradientView * _apertureGradientView;
    PUPhotoEditApertureToolbar * _apertureToolbar;
    PXUIButton * _autoFocusButton;
    _UIBackdropView * _backdropBackgroundView;
    PXCinematicEditController * _cinematographyController;
    NSMutableArray * _constraints;
    UIView * _containerView;
    double  _horizontalControlPadding;
    double  _horizontalPrimaryViewPaddingOffset;
    bool  _isActiveTool;
    long long  _layoutType;
    NSLayoutConstraint * _leadingWidthConstraint;
    PXUIButton * _livePhotoButton;
    PXUIButton * _muteButton;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalStillImageTime;
    PUVideoEditOverlayViewController * _overlayController;
    PXUIButton * _portraitVideoButton;
    UIView * _primaryView;
    UIView * _solidBackgroundView;
    bool  _stabilizationInProgress;
    UIButton * _stabilizeButton;
    PLRoundProgressView * _stabilizeProgressView;
    long long  _toolMode;
    NSLayoutConstraint * _trailingWidthConstraint;
    PUTrimToolController * _trimController;
    bool  _trimControllerScrubberNeedsVisualUpdate;
    bool  _trimControllerVisible;
    bool  _useTranslucentBackground;
    double  _verticalButtonOffset;
    UILabel * _videoLabelView;
    bool  _viewHasAppeared;
    NSLayoutConstraint * _viewHeightConstraint;
}

@property (nonatomic, readonly) PTCinematographyScript *cinematographyScript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalControlPadding;
@property (nonatomic, readonly) double horizontalPrimaryViewPaddingOffset;
@property (nonatomic) long long layoutType;
@property (nonatomic, readonly) UIButton *livePhotoButton;
@property (nonatomic, retain) UIView *primaryView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUTrimToolController *trimController;
@property (nonatomic) bool useTranslucentBackground;
@property (nonatomic) double verticalButtonOffset;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void).cxx_destruct;
- (void)_dismissPortraitVideoDebugControls:(id)arg1;
- (void)_handleApertureButton:(id)arg1;
- (void)_handleAutoFocusButton:(id)arg1;
- (void)_handleLivePhotoButton:(id)arg1;
- (void)_handleMuteButton:(id)arg1;
- (void)_handlePortraitVideoButton:(id)arg1;
- (void)_handlePortraitVideoButtonLongPress:(id)arg1;
- (void)_handleStabilizeButton:(id)arg1;
- (void)_initializeCinematographyScript;
- (void)_invalidateConstraints;
- (void)_invalidateTrimControlScrubberThumbnails;
- (bool)_isTrimAllowed;
- (void)_layoutToolGradient;
- (id)_localizedTitleForCurrentPlaybackVariation;
- (void)_presentPortraitVideoDebugControls;
- (void)_reportStabilizeProgress:(double)arg1;
- (void)_resetDefaultToolMode;
- (void)_setToolMode:(long long)arg1;
- (void)_updateApertureControlsAnimated:(bool)arg1;
- (void)_updateApertureSliderLength;
- (bool)_updateAutoFocusToolbarButton;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (void)_updateLivePhotoButton:(id)arg1;
- (void)_updatePortraitVideoButtonAnimated:(bool)arg1;
- (void)_updateStabilizationInProgress:(bool)arg1;
- (void)_updateStabilizeButtonAnimated:(bool)arg1;
- (void)_updateStabilizeProgressViewAnimated:(bool)arg1;
- (void)_updateToolVisibilityAnimated:(bool)arg1;
- (void)_updateTrackerDisplay:(bool)arg1;
- (bool)_wantsPortraitVideoControls;
- (bool)_wantsTrimControl;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;
- (void)apertureToolbarDidStartSliding:(id)arg1;
- (void)apertureToolbarDidStopSliding:(id)arg1;
- (bool)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;
- (id)axDescriptionForFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)baseMediaInvalidated;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)cineScriptBecameAvailable:(id)arg1;
- (void)cineScriptCouldNotInitializeWithError:(id)arg1;
- (id)cinematographyScript;
- (void)cinematographyWasEdited;
- (void)cinematographyWasEditedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)decreaseScrubberValue:(bool)arg1;
- (void)didRemoveUserDecision;
- (bool)hasTrimmedVideo;
- (double)horizontalControlPadding;
- (double)horizontalPrimaryViewPaddingOffset;
- (void)increaseScrubberValue:(bool)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)interactionBegan;
- (long long)layoutType;
- (id)leadingToolbarViews;
- (id)livePhotoButton;
- (void)loadView;
- (id)localizedName;
- (id)makeTrimToolController;
- (void)mediaView:(id)arg1 didZoom:(double)arg2;
- (void)mediaViewDidScroll:(id)arg1;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)photoEditLivePhotoModelUpdated;
- (id)primaryView;
- (void)reactivate;
- (void)removeFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)scrubberOrientation;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setHorizontalControlPadding:(double)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutType:(long long)arg1;
- (void)setOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPrimaryView:(id)arg1;
- (void)setUseGradientBackground:(bool)arg1 animated:(bool)arg2;
- (void)setUseTranslucentBackground:(bool)arg1;
- (void)setVerticalButtonOffset:(double)arg1;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)togglePlayback:(id)arg1;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (id)toolbarIconAccessibilityLabel;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;
- (id)trailingToolbarViews;
- (id)trimController;
- (void)trimToolController:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimToolController:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2;
- (void)trimToolControllerDidChange:(id)arg1 state:(unsigned long long)arg2;
- (void)updateCinematicVideoControlsEnableState;
- (void)updateForIncomingAnimation;
- (void)updateToolbarButtonsAnimated:(bool)arg1;
- (void)updateViewConstraints;
- (bool)useTranslucentBackground;
- (double)verticalButtonOffset;
- (void)videoRenderingChanged;
- (void)viewDidLayoutSubviews;
- (bool)wantsScrubberKeyControl;
- (bool)wantsSecondaryToolbarVisible;
- (bool)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateLivePhotoButtonAnimated:(bool)arg1;
- (void)_updateMuteButtonAnimated:(bool)arg1;
- (void)_updateTrimControlAndToolbarButtons;
- (void)reloadToolbarButtons:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;

@end