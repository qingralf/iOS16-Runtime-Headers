/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
 */

@interface CPUINowPlayingViewController : UIViewController <CPUIPlayModeControlViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    UIBarButtonItem * _activityIndicatorBarButtonItem;
    UIImage * _artworkImage;
    NSOperationQueue * _artworkOperationQueue;
    UIImageView * _artworkView;
    UIVisualEffectView * _artworkVisualEffectView;
    UIBarButtonItem * _backButton;
    UITapGestureRecognizer * _backPressRecognizer;
    NSString * _bundleIdentifier;
    <CPUINowPlayingViewControllerDataSource> * _dataSource;
    <CPUINowPlayingViewControllerDelegate> * _delegate;
    UILongPressGestureRecognizer * _fastForwardButtonLongPressRecognizer;
    NSString * _forwardTransportButtonImageIdentifier;
    long long  _heldAction;
    UITapGestureRecognizer * _knobPressRecognizer;
    UILongPressGestureRecognizer * _leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer * _leftNudgeLongPressRecognizer;
    UITapGestureRecognizer * _leftNudgePressRecognizer;
    NSArray * _nowPlayingSizeConstraints;
    CPUINowPlayingView * _nowPlayingView;
    NSString * _playPauseTransportButtonImageIdentifier;
    UIBarButtonItem * _playbackQueueBarButtonItem;
    NSString * _previousTransportButtonImageIdentifier;
    UILongPressGestureRecognizer * _rightNudgeLongPressRecognizer;
    UITapGestureRecognizer * _rightNudgePressRecognizer;
    UILabel * _rightTitleLabel;
    UIBarButtonItem * _rightTitleLabelBarButtonItem;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIBarButtonItem *activityIndicatorBarButtonItem;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, retain) NSOperationQueue *artworkOperationQueue;
@property (nonatomic, retain) UIImageView *artworkView;
@property (nonatomic, retain) UIVisualEffectView *artworkVisualEffectView;
@property (nonatomic, retain) UIBarButtonItem *backButton;
@property (nonatomic, readonly) UITapGestureRecognizer *backPressRecognizer;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) <CPUINowPlayingViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPUINowPlayingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer;
@property (nonatomic, retain) NSString *forwardTransportButtonImageIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITapGestureRecognizer *knobPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftButtonLongPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *leftNudgePressRecognizer;
@property (nonatomic, retain) NSArray *nowPlayingSizeConstraints;
@property (nonatomic, retain) CPUINowPlayingView *nowPlayingView;
@property (nonatomic, readonly) CPUIPlayModeControlView *playModeControlView;
@property (nonatomic, retain) NSString *playPauseTransportButtonImageIdentifier;
@property (nonatomic, retain) UIBarButtonItem *playbackQueueBarButtonItem;
@property (nonatomic, retain) NSString *previousTransportButtonImageIdentifier;
@property (nonatomic, retain) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *rightNudgePressRecognizer;
@property (nonatomic, retain) UILabel *rightTitleLabel;
@property (nonatomic, retain) UIBarButtonItem *rightTitleLabelBarButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPUITransportControlView *transportControlView;

- (void).cxx_destruct;
- (void)_adjustRightTitleLabelToFit;
- (void)_albumArtistButtonTapped:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_initializeTransportControls;
- (id)_installedFullBackgroundArtworkViewBelowView:(id)arg1;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_playPauseButtonTouchDown:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_recalculateLayout:(bool)arg1;
- (void)_reloadDataForcingLayout:(bool)arg1 updateControls:(bool)arg2;
- (void)_respondToHeldAction;
- (void)_rightNudgePress:(id)arg1;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_sendHeldAction;
- (bool)_showsButtonSelectionsForTouch;
- (id)_upNextBarButtonItem;
- (void)_updateArtworkIfNeeded:(id)arg1 placeholder:(id)arg2;
- (void)_updatePlayModesState;
- (void)_updatePlaybackRate;
- (void)_updateRepeatStateWithType:(long long)arg1;
- (void)_updateShuffleStateWithType:(long long)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (id)activityIndicator;
- (id)activityIndicatorBarButtonItem;
- (id)artworkImage;
- (id)artworkOperationQueue;
- (id)artworkView;
- (id)artworkVisualEffectView;
- (id)backButton;
- (id)backPressRecognizer;
- (id)bundleIdentifier;
- (id)dataSource;
- (id)delegate;
- (id)fastForwardButtonLongPressRecognizer;
- (id)forwardTransportButtonImageIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (id)knobPressRecognizer;
- (id)leftButtonLongPressRecognizer;
- (id)leftNudgeLongPressRecognizer;
- (id)leftNudgePressRecognizer;
- (id)nowPlayingSizeConstraints;
- (id)nowPlayingView;
- (id)playModeControlView;
- (void)playModeControlView:(id)arg1 didSelectButton:(id)arg2;
- (id)playPauseTransportButtonImageIdentifier;
- (id)playbackQueueBarButtonItem;
- (id)preferredFocusEnvironments;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)previousTransportButtonImageIdentifier;
- (void)reloadData;
- (id)rightNudgeLongPressRecognizer;
- (id)rightNudgePressRecognizer;
- (id)rightTitleLabel;
- (id)rightTitleLabelBarButtonItem;
- (void)setActivityIndicator:(id)arg1;
- (void)setActivityIndicatorBarButtonItem:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkOperationQueue:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setArtworkVisualEffectView:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFastForwardButtonLongPressRecognizer:(id)arg1;
- (void)setForwardTransportButtonImageIdentifier:(id)arg1;
- (void)setLeftButtonLongPressRecognizer:(id)arg1;
- (void)setLeftNudgeLongPressRecognizer:(id)arg1;
- (void)setLeftNudgePressRecognizer:(id)arg1;
- (void)setNowPlayingSizeConstraints:(id)arg1;
- (void)setNowPlayingView:(id)arg1;
- (void)setPlayPauseTransportButtonImageIdentifier:(id)arg1;
- (void)setPlaybackQueueBarButtonItem:(id)arg1;
- (void)setPreviousTransportButtonImageIdentifier:(id)arg1;
- (void)setRightNudgeLongPressRecognizer:(id)arg1;
- (void)setRightNudgePressRecognizer:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void)setRightTitleLabel:(id)arg1;
- (void)setRightTitleLabelBarButtonItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlView;
- (void)upNextButtonTapped:(id)arg1;
- (void)updatePlayControls;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
