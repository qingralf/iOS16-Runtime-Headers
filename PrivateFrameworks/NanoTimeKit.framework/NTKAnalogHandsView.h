/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKAnalogHandsView : UIView <NTKTimeView> {
    bool  _animatingToNewDate;
    NSTimer * _animationUpdateTimer;
    NSCalendar * _calendar;
    CLKUIColoringImageView * _colorTransitionSecondHandLargeCircleView;
    CLKUIColoringImageView * _colorTransitionSecondHandLowerView;
    CLKUIColoringImageView * _colorTransitionSecondHandSmallCircleView;
    CLKUIColoringImageView * _colorTransitionSecondHandUpperView;
    long long  _dataMode;
    <NTKAnalogHandsViewDelegate> * _delegate;
    CLKDevice * _device;
    UIView * _directionalShadowContainerView;
    NSNumber * _displayLinkToken;
    bool  _frozen;
    CALayer * _hourHandTransitionBodyLayer;
    CALayer * _hourHandTransitionStemLayer;
    NTKHandView * _hourHandView;
    NTKHandView * _hourHandViewAlt;
    NTKHandView * _hourHandView_clientSide;
    UIColor * _inlayColor;
    double  _minuteHandDotDiameter;
    CALayer * _minuteHandTransitionBodyLayer;
    CALayer * _minuteHandTransitionPegLayer;
    CALayer * _minuteHandTransitionStemLayer;
    NTKHandView * _minuteHandView;
    NTKHandView * _minuteHandViewAlt;
    NTKHandView * _minuteHandView_clientSide;
    NSDate * _overrideDate;
    double  _secondHandDotDiameter;
    NTKHandView * _secondHandView;
    NTKHandView * _secondHandViewAlt;
    NTKHandView * _secondHandView_clientSide;
    bool  _shadowCompositingEnabled;
    bool  _shouldRestoreSecondHandAfterScrubbing;
    bool  _showDebugClientSideHands;
    double  _timeOffset;
    bool  _timeScrubbing;
    NSTimeZone * _timeZone;
    bool  _useDirectionalShadows;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKAnalogHandsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKHandView *hourHandView;
@property (nonatomic, retain) NTKHandView *hourHandViewAlt;
@property (nonatomic, readonly) NTKHandView *hourHandView_clientSide;
@property (nonatomic, retain) UIColor *inlayColor;
@property (nonatomic, readonly) UIView *minuteHandDot;
@property (nonatomic) double minuteHandDotDiameter;
@property (nonatomic, retain) NTKHandView *minuteHandView;
@property (nonatomic, retain) NTKHandView *minuteHandViewAlt;
@property (nonatomic, readonly) NTKHandView *minuteHandView_clientSide;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, readonly) UIView *secondHandDot;
@property (nonatomic) double secondHandDotDiameter;
@property (nonatomic, retain) NTKHandView *secondHandView;
@property (nonatomic, retain) NTKHandView *secondHandViewAlt;
@property (nonatomic, readonly) NTKHandView *secondHandView_clientSide;
@property (nonatomic) bool shouldRestoreSecondHandAfterScrubbing;
@property (nonatomic) bool showDebugClientSideHands;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeScrubbing;
@property (nonatomic, retain) NSTimeZone *timeZone;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (double)hourHandAngleForDate:(id)arg1;
+ (double)minuteHandAngleForDate:(id)arg1;
+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_accessibilityInvalidateElements;
- (void)_addHourMinuteHandsTransitionLayers;
- (bool)_canRunTimeAnimation;
- (void)_deregisterFromDisplayLinkManager;
- (bool)_dontRepointDebugHands;
- (void)_enumerateHandViews:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateShadowViews:(id /* block */)arg1;
- (void)_handleDisplayLink;
- (void)_installAltViewsHour:(id)arg1 minute:(id)arg2 second:(id)arg3;
- (void)_removeColorTransitionViews;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_repointDebugHandsToCurrentTime;
- (void)_setAltHandsAlpha:(double)arg1;
- (void)_setHandsAlpha:(double)arg1;
- (void)_significantTimeChanged;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandColor:(id)arg1;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)calendar;
- (id)createHourHandView;
- (id)createMinuteHandView;
- (id)createSecondHandView;
- (long long)dataMode;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (void)didMoveToWindow;
- (id)displayTime;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)hourHandConfiguration;
- (id)hourHandView;
- (id)hourHandViewAlt;
- (id)hourHandView_clientSide;
- (id)initForDevice:(id)arg1;
- (id)inlayColor;
- (bool)isFrozen;
- (void)layoutHandViews;
- (void)layoutShadowViews;
- (void)layoutSubviews;
- (id)minuteHandConfiguration;
- (id)minuteHandDot;
- (double)minuteHandDotDiameter;
- (id)minuteHandView;
- (id)minuteHandViewAlt;
- (id)minuteHandView_clientSide;
- (id)overrideDate;
- (void)scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)secondHandConfiguration;
- (id)secondHandDot;
- (double)secondHandDotDiameter;
- (id)secondHandView;
- (id)secondHandViewAlt;
- (id)secondHandView_clientSide;
- (void)setDataMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHourHandView:(id)arg1;
- (void)setHourHandViewAlt:(id)arg1;
- (void)setInlayColor:(id)arg1;
- (void)setMinuteHandDotDiameter:(double)arg1;
- (void)setMinuteHandView:(id)arg1;
- (void)setMinuteHandViewAlt:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecondHandDotDiameter:(double)arg1;
- (void)setSecondHandView:(id)arg1;
- (void)setSecondHandViewAlt:(id)arg1;
- (void)setShouldRestoreSecondHandAfterScrubbing:(bool)arg1;
- (void)setShowDebugClientSideHands:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUseDirectionalShadows:(bool)arg1;
- (bool)shadowCompositingEnabled;
- (bool)shouldRestoreSecondHandAfterScrubbing;
- (bool)showDebugClientSideHands;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)timeScrubbing;
- (id)timeZone;
- (bool)useDirectionalShadows;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityServesAsFirstElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (bool)canBecomeFocused;
- (bool)isAccessibilityElement;

@end
