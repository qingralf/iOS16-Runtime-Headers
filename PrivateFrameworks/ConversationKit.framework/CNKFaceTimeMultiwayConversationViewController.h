/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <AVCEffectsDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKAudioRoutingDelegate, CNKCallDetailsDeferredPresentationManager, CNKFaceTimeCameraViewControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CNKFaceTimePiPSourceProviding> {
    void $__lazy_storage_$_flashView;
    void $__lazy_storage_$_insulatingView;
    void _cachedDidExpandActiveVideoCallFromBanner;
    void avcEffects;
    void bannerPresentationManager;
    void cachedGridViewSize;
    void cachedMediaPipSafeAreaFrame;
    void cachedPresentationSize;
    void callDetailsCoordinator;
    void captionsPausedState;
    void conversationController;
    void defaults;
    void delegate;
    void deviceOrientation;
    void didExpandIncomingCallBanner;
    void didNotifyMutedCaller;
    void effectsCaptureInfo;
    void effectsEnabled;
    void effectsLayoutController;
    void features;
    void frontBoardInterfaceOrientation;
    void hasInitializedMomentsViews;
    void hasParticipantVideo;
    void hideOneToOneLivePhotoAlertViewTimer;
    void iOSDelegate;
    void inCallControlsDismissTimer;
    void isCaptioningEnabled;
    void isDisplayedInBanner;
    void isFullScreen;
    void isOnScreen;
    void lastUpdatedMostActiveParticipantViewForPiP;
    void layoutStyle;
    void linkShareCoordinator;
    void mediaPipFrameInWindowScene;
    void mediaPipInfo;
    void mostActiveParticipantsController;
    void mutedBannerViewController;
    void needsConnectionAnimation;
    void needsUpdatePresentationContexts;
    void pipState;
    void pipZoomControl;
    void shouldShowZoomControls;
    void stoppedSendingVideoDueToOffscreen;
    void supportedDeviceOrientations;
    void tonePlayer;
    void viewContent;
}

@property (nonatomic, readonly) UIImage *audioRouteGlyphForDevice;
@property (nonatomic) CNKBannerPresentationManager *bannerPresentationManager;
@property (nonatomic, readonly) TUCall *call;
@property (nonatomic, readonly) double captionsTranscriptWidth;
@property (nonatomic) <CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool didExpandIncomingCallBanner;
@property (nonatomic) bool effectsEnabled;
@property (nonatomic) long long frontBoardInterfaceOrientation;
@property (nonatomic, readonly) long long fullScreenFocusedParticipantOrientation;
@property (nonatomic) bool hasParticipantVideo;
@property (nonatomic) <CNKFaceTimeMultiwayViewControllerIOSDelegate> *iOSDelegate;
@property (nonatomic, retain) NSTimer *inCallControlsDismissTimer;
@property (nonatomic) bool isCaptioningEnabled;
@property (nonatomic) bool isDisplayedInBanner;
@property (nonatomic) bool isFullScreen;
@property (nonatomic) bool isOnScreen;
@property (nonatomic, readonly) bool isOneToOneModeEnabled;
@property (nonatomic, readonly) bool isPipped;
@property (nonatomic, readonly) bool isPresentingEffectsBrowser;
@property (nonatomic, readonly) bool isReadyToShowCallDetails;
@property (nonatomic, readonly) bool isShownAboveCoverSheet;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mediaPipFrameInWindowScene;
@property (nonatomic) long long pipState;
@property (nonatomic, readonly) UIViewController *pipViewController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredPIPContentAspectRatio;
@property (nonatomic, readonly) bool shouldDisconnectOnDismissal;
@property (nonatomic, readonly) bool shouldShowTranscriptDrawer;
@property (nonatomic) long long supportedDeviceOrientations;
@property (nonatomic, readonly) bool wantsApplicationDismissalStyle;
@property (nonatomic, readonly) bool wantsPIPRotationForLocalPreview;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)accessibilityConstraintController;
- (id)audioRouteGlyphFor:(id)arg1;
- (id)audioRouteGlyphFor:(id)arg1 buttonStyle:(long long)arg2;
- (id)audioRouteGlyphForDevice;
- (id)audioRouteMenu;
- (id)bannerPresentationManager;
- (id)call;
- (void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)cameraViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (double)captionsTranscriptWidth;
- (void)dealloc;
- (id)delegate;
- (long long)deviceOrientation;
- (void)didCaptureVideoFrame:(id)arg1;
- (void)didCreateCollectionViewForInCallControlsViewController:(id)arg1;
- (bool)didExpandIncomingCallBanner;
- (void)didSelectApp:(id)arg1;
- (void)didSelectEffect:(id)arg1;
- (void)didTapChangeLayoutButton;
- (void)didTapDeskViewButton;
- (void)didTapOneToOneShutterButton;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (bool)effectsEnabled;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRestoreAnimation;
- (long long)frontBoardInterfaceOrientation;
- (long long)fullScreenFocusedParticipantOrientation;
- (bool)hasParticipantVideo;
- (void)hideEffectsBrowser;
- (id)iOSDelegate;
- (id)inCallControlsDismissTimer;
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2 from:(id)arg3;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 bannerPresentationManager:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCaptioningEnabled;
- (bool)isCaptioningEnabled:(id)arg1;
- (bool)isDisplayedInBanner;
- (bool)isFullScreen;
- (bool)isOnScreen;
- (bool)isOneToOneModeEnabled;
- (bool)isPipped;
- (bool)isPresentingEffectsBrowser;
- (bool)isReadyToShowCallDetails;
- (bool)isShownAboveCoverSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaPipFrameInWindowScene;
- (void)muteVideo;
- (void)openMessagesConversation;
- (void)pipDidRotate;
- (long long)pipState;
- (id)pipViewController;
- (struct CGSize { double x1; double x2; })preferredPIPContentAspectRatio;
- (struct CGSize { double x1; double x2; })preferredPiPContentAspectRatio;
- (void)resetEffectsState;
- (bool)restoreViewControllerHierarchyWhenExitingPiP;
- (void)serverDidTimeout:(id)arg1;
- (void)setBannerPresentationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidExpandIncomingCallBanner:(bool)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)setFrontBoardInterfaceOrientation:(long long)arg1;
- (void)setHasParticipantVideo:(bool)arg1;
- (void)setIOSDelegate:(id)arg1;
- (void)setInCallControlsDismissTimer:(id)arg1;
- (void)setIsCaptioningEnabled:(bool)arg1;
- (void)setIsDisplayedInBanner:(bool)arg1;
- (void)setIsFullScreen:(bool)arg1;
- (void)setIsOnScreen:(bool)arg1;
- (void)setMediaPipFrameInWindowScene:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPipState:(long long)arg1;
- (void)setSupportedDeviceOrientations:(long long)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (bool)shouldDisconnectOnDismissal;
- (bool)shouldShowTranscriptDrawer;
- (void)showSidebar;
- (long long)supportedDeviceOrientations;
- (void)toggleAudioMute;
- (void)toggleCinematicFraming;
- (void)toggleLocalOrientation;
- (void)toggleVideoMuteWithShouldPauseIfStopped:(bool)arg1;
- (void)updateVideoState;
- (void)updateViewConstraints;
- (id)viewControllerForPiP;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsApplicationDismissalStyle;
- (bool)wantsPIPRotationForLocalPreview;
- (void)willMoveToParentViewController:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ConversationKit.axbundle/ConversationKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityExpandControls;
- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_axGetDidExpandControls;
- (long long)_axGetExpectedExpandedState;
- (id)_axParticipantShutters;
- (void)_axSetDidExpandControls:(bool)arg1;
- (void)_axSetExpectedExpandedState:(long long)arg1;
- (bool)accessibilityPerformEscape;
- (bool)axShouldDisableAutoHidingControls;
- (void)setControlsState:(long long)arg1 animated:(bool)arg2;
- (void)setDeviceOrientation:(long long)arg1;

@end
