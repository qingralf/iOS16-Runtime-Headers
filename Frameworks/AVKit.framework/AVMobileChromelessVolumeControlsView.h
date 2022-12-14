/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVMobileChromelessVolumeControlsView : AVView <AVMobileChromelessSliderDelegate, AVMobileVolumeChromlesButtonControlDelegate, AVShadowCasting> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _buttonShadowPathRect;
    <AVMobileChromelessVolumeControlsViewDelegate> * _delegate;
    bool  _drawsShadow;
    bool  _emphasized;
    UIViewPropertyAnimator * _emphasizedAnimator;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _mute;
    bool  _prefersVolumeSliderIncluded;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sliderShadowPathRect;
    double  _volume;
    AVMobileVolumeChromelessButtonControl * _volumeButton;
    UIView * _volumeControls;
    AVMobileChromelessSlider * _volumeSlider;
    bool  _volumeSliderHidesWithAlphaChange;
}

@property (readonly, copy) NSString *debugDescription;
@property <AVMobileChromelessVolumeControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsShadow;
@property (getter=isEmphasized, nonatomic) bool emphasized;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTracking;
@property (getter=isMuted, nonatomic) bool mute;
@property (nonatomic) bool prefersVolumeSliderIncluded;
@property (readonly) Class superclass;
@property (nonatomic) double volume;
@property (nonatomic) bool volumeSliderHidesWithAlphaChange;

- (void).cxx_destruct;
- (void)_handleVolumeControlButtonTap;
- (void)_layoutVolumeControlView;
- (void)_updateVolumeButtonIconState;
- (void)_updateVolumeSliderEmphasizedScale;
- (void)_volumeSliderValueDidChange;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)drawsShadow;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEmphasized;
- (bool)isMuted;
- (bool)isTracking;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)prefersVolumeSliderIncluded;
- (void)setDelegate:(id)arg1;
- (void)setDrawsShadow:(bool)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setPrefersVolumeSliderIncluded:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)setVolumeSliderHidesWithAlphaChange:(bool)arg1;
- (void)sliderDidBeginTracking:(id)arg1;
- (void)sliderDidEndTracking:(id)arg1;
- (double)volume;
- (void)volumeControlButtonDidBeginPanning;
- (void)volumeControlButtonDidEndPanning;
- (void)volumeControlButtonPanningDidContinueWithXDelta:(double)arg1;
- (bool)volumeSliderHidesWithAlphaChange;

@end
