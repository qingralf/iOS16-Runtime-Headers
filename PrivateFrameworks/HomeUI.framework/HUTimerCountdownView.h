/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTimerCountdownView : UIView {
    UIView * _circleBackgroundView;
    MTUITimerCountdownView * _countdownView;
    unsigned long long  _currentState;
    <HUTimerCountdownDelegate> * _delegate;
    UIButton * _pauseResumeButton;
}

@property (nonatomic, retain) UIView *circleBackgroundView;
@property (nonatomic, retain) MTUITimerCountdownView *countdownView;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic, retain) <HUTimerCountdownDelegate> *delegate;
@property (nonatomic, retain) UIButton *pauseResumeButton;

- (void).cxx_destruct;
- (id)circleBackgroundView;
- (id)countdownView;
- (unsigned long long)currentState;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTimer:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)pauseResumeButton;
- (void)setCircleBackgroundView:(id)arg1;
- (void)setCountdownView:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPauseResumeButton:(id)arg1;
- (void)toggle:(id)arg1;
- (void)updateToNewState:(unsigned long long)arg1;
- (void)updateToNewTime:(double)arg1;

@end