/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMovieItemViewController : QLMediaItemViewController <AVEditBehaviorDelegate, AVPictureInPictureControllerDelegate, AVPlayerViewControllerDelegatePrivate> {
    PHPlaceholderView * _airPlayPlaceholderView;
    bool  _assetCanBeRotated;
    NSNumber * _assetIsHDR;
    NSLayoutConstraint * _bottomScrubberConstraint;
    AVEditBehavior * _editBehavior;
    QLMovieEdits * _edits;
    QLMovieEdits * _editsSinceLastSave;
    PXUIAssetBadgeView * _hdrBadgeView;
    bool  _isEditing;
    bool  _isObservingPlayerExternalPlaybackActive;
    bool  _isSavingEditsBeforeDismissing;
    QLOverlayPlayButton * _playButton;
    UIView * _playerViewContainer;
    AVPlayerViewController * _playerViewController;
    UIScrollView * _playerViewControllerScrollView;
    bool  _previewIsVisisble;
    QLVideoScrubberView * _scrubber;
    UIView * _scrubberContainer;
    UIScrollView * _scrubberContainerScrollView;
    double  _scrubberVerticalOffset;
}

@property (nonatomic, readonly) PHPlaceholderView *airPlayPlaceholderView;
@property (nonatomic) bool assetCanBeRotated;
@property (nonatomic, retain) NSNumber *assetIsHDR;
@property (retain) NSLayoutConstraint *bottomScrubberConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVEditBehavior *editBehavior;
@property (nonatomic, retain) QLMovieEdits *edits;
@property (nonatomic, retain) QLMovieEdits *editsSinceLastSave;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXUIAssetBadgeView *hdrBadgeView;
@property (nonatomic) bool isEditing;
@property (nonatomic) bool isSavingEditsBeforeDismissing;
@property (retain) QLOverlayPlayButton *playButton;
@property (nonatomic, retain) UIView *playerViewContainer;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic) UIScrollView *playerViewControllerScrollView;
@property (retain) QLVideoScrubberView *scrubber;
@property (retain) UIView *scrubberContainer;
@property (retain) UIScrollView *scrubberContainerScrollView;
@property (nonatomic) double scrubberVerticalOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHDRBadgeViewToHierarchyIfNeeded:(id)arg1;
- (void)_displayHDRBadgeView:(id)arg1;
- (void)_enterEditMode;
- (bool)_enterEditModeIfPossible;
- (void)_exitEditMode:(bool)arg1;
- (void)_hideHDRBadgeViewAfterDelayIfNeeded:(double)arg1;
- (void)_hideHDRBadgeViewIfVisible;
- (bool)_isInteractingWithAnalysis;
- (id)_metadataItemTitle;
- (void)_resetTrimmingValues;
- (void)_rotateIfPossible;
- (void)_rotateMovieRight;
- (void)_rotateRightButtonTapped;
- (void)_saveMovieIfEdited:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_saveMovieIfEditedWithEditedCopy:(id)arg1 shouldDismissAfterSaving:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_setupEditBehavior;
- (void)_setupScrubberPlaceholderThumbnail;
- (void)_showFailedToSaveChangesAlertWithError:(id)arg1;
- (void)_showHDRBadgeView:(id)arg1;
- (void)_showHDRBadgeViewIfNeeded;
- (void)_updateEditMode;
- (void)_updateEditsTrimmingValuesWithTrimStartTime:(double)arg1 trimEndTime:(double)arg2;
- (void)_updateHDRBadgeViewVisibilityForFullscreenMode:(bool)arg1;
- (void)_updateHDRBadgeViewVisibilityWithNewPlayingStatus:(long long)arg1;
- (void)_updateInterfaceAfterExitingEditMode;
- (void)_updatePlaceHolderView;
- (void)_updatePlayButtonVisibility;
- (bool)_videoIsPlaying;
- (id)accessoryView;
- (void)addScrubberIfNeededWithDeferral;
- (id)airPlayPlaceholderView;
- (bool)assetCanBeRotated;
- (id)assetIsHDR;
- (id)bottomScrubberConstraint;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (bool)canToggleFullScreen;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (id)editBehavior;
- (id)editBehaviorAlertActionsForDoneButtonTap:(id)arg1;
- (void)editBehaviorDidCancel:(id)arg1;
- (void)editButtonTapped;
- (id)editProgressIndicatorMessage;
- (id)edits;
- (id)editsSinceLastSave;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;
- (id)hdrBadgeView;
- (id)init;
- (bool)isEditing;
- (bool)isSavingEditsBeforeDismissing;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parallaxView;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)play;
- (id)playButton;
- (id)playerViewContainer;
- (id)playerViewController;
- (id)playerViewControllerScrollView;
- (void)playerViewControllerWillPerformAnalysisCalloutAction:(id)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (id)registeredKeyCommands;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)arg1;
- (id)scrollView;
- (id)scrollViewInView:(id)arg1;
- (id)scrubber;
- (id)scrubberContainer;
- (id)scrubberContainerScrollView;
- (double)scrubberVerticalOffset;
- (void)setAssetCanBeRotated:(bool)arg1;
- (void)setAssetIsHDR:(id)arg1;
- (void)setBottomScrubberConstraint:(id)arg1;
- (void)setEditBehavior:(id)arg1;
- (void)setEdits:(id)arg1;
- (void)setEditsSinceLastSave:(id)arg1;
- (void)setHdrBadgeView:(id)arg1;
- (void)setIsEditing:(bool)arg1;
- (void)setIsSavingEditsBeforeDismissing:(bool)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setPlayerViewContainer:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPlayerViewControllerScrollView:(id)arg1;
- (void)setScrubber:(id)arg1;
- (void)setScrubberContainer:(id)arg1;
- (void)setScrubberContainerScrollView:(id)arg1;
- (void)setScrubberVerticalOffset:(double)arg1;
- (id)setupPlayerViewWithPlayer:(id)arg1;
- (bool)shouldAllowEditingContents;
- (bool)shouldDisplayPlayButtonInNavigationBar;
- (bool)shouldHandleRegisteringForCommandCenterHandlers;
- (id)timeLabelScrollView;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (id)transitioningView;
- (void)updateInterfaceAfterSavingEdits;
- (void)updateInterfaceForSavingEdits;

@end
