/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUSessionNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver, MRUNowPlayingTransportControlsViewDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding> {
    long long  _activeLayoutMode;
    NSString * _associatedAppBundleIdentifier;
    MRUNowPlayingController * _controller;
    <BSInvalidatable> * _hardwareVolumeControlAssertion;
    MSVTimer * _inactiveTransitionTimer;
    long long  _maximumLayoutMode;
    MPMediaControls * _mediaControls;
    long long  _preferredLayoutMode;
    bool  _wasPlayingDuringLastPreferredLayoutUpdate;
    MRUWaveformController * _waveformController;
    MRUWaveformViewController * _waveformViewController;
}

@property (nonatomic) long long activeLayoutMode;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) bool canRequestAlertingAssertion;
@property (nonatomic, readonly) long long contentRole;
@property (nonatomic, retain) MRUNowPlayingController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (nonatomic, retain) <BSInvalidatable> *hardwareVolumeControlAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSVTimer *inactiveTransitionTimer;
@property (nonatomic, readonly, copy) UIColor *keyColor;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (nonatomic, readonly) long long maximumLayoutMode;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (nonatomic, readonly) long long minimumLayoutMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredCustomAspectRatio;
@property (nonatomic, readonly) long long preferredCustomLayout;
@property (nonatomic, readonly) double preferredHeightForBottomSafeArea;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) unsigned long long presentationBehaviors;
@property (nonatomic, readonly) bool preventsAutomaticDismissal;
@property (nonatomic, readonly) bool preventsInteractiveDismissal;
@property (nonatomic, readonly) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBUISystemApertureElement> *systemApertureElement;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (nonatomic, retain) MRUSessionNowPlayingView *view;
@property (nonatomic, retain) MRUSessionNowPlayingView *viewIfLoaded;
@property (nonatomic) bool wasPlayingDuringLastPreferredLayoutUpdate;
@property (nonatomic, retain) MRUWaveformController *waveformController;
@property (nonatomic, retain) MRUWaveformViewController *waveformViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)activeLayoutMode;
- (id)associatedAppBundleIdentifier;
- (long long)contentRole;
- (id)controller;
- (void)didSelectArtworkView:(id)arg1;
- (void)didSelectLabelView:(id)arg1;
- (id)elementIdentifier;
- (id)hardwareVolumeControlAssertion;
- (id)inactiveTransitionTimer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExpanded;
- (bool)isOnScreen;
- (id)leadingView;
- (void)loadView;
- (long long)maximumLayoutMode;
- (id)mediaControls;
- (id)minimalView;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeBundleID:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTimeControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTransportControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 tvRemoteController:(id)arg2 didChangeShowTVRemote:(bool)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (double)preferredHeightForBottomSafeArea;
- (long long)preferredLayoutMode;
- (void)setActiveLayoutMode:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setHardwareVolumeControlAssertion:(id)arg1;
- (void)setInactiveTransitionTimer:(id)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setWasPlayingDuringLastPreferredLayoutUpdate:(bool)arg1;
- (void)setWaveformController:(id)arg1;
- (void)setWaveformViewController:(id)arg1;
- (unsigned long long)statusBarStyleOverridesToSuppress;
- (id)systemApertureElementViewController;
- (id)trailingView;
- (void)transportControlsView:(id)arg1 didSelectRoutingButton:(id)arg2;
- (void)transportControlsView:(id)arg1 didSelectTVRemoteButton:(id)arg2;
- (void)updateArtwork;
- (void)updateBundleID;
- (void)updateEverything;
- (void)updateLayout;
- (void)updateLayoutModesPreferringImmediateTransition:(bool)arg1 deferInCustomLayout:(bool)arg2 reason:(id)arg3;
- (void)updateNowPlayingInfo;
- (void)updateRouteLabel;
- (void)updateRoutingButton;
- (void)updateTimeControls;
- (void)updateTransportControls;
- (void)updateVolumeControls;
- (void)updateWaveformVisibility;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wasPlayingDuringLastPreferredLayoutUpdate;
- (id)waveformController;
- (id)waveformViewController;

@end