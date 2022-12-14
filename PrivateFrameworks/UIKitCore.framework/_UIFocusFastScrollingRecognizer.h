/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver> {
    _UIFocusFastScrollingTouchSequence * _currentTouch;
    <_UIFocusFastScrollingRecognizerDelegate> * _delegate;
    bool  _enabled;
    _UIFocusEnginePanGestureRecognizer * _panGesture;
    bool  _persistFastScrollingPreviewThroughReset;
    UIScrollView * _previewingScrollView;
    NSTimer * _previewingTouchTimer;
    _UIRotaryGestureRecognizer * _rotaryGesture;
    unsigned long long  _spatialFocusUpdateCount;
    NSTimer * _swipeIntervalTimer;
    NSMapTable * _swipeSequences;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIFocusFastScrollingRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activatePreviewingScrollViewForEdgeGesture;
- (void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;
- (void)_activatePreviewingScrollViewForScrollingStyle:(long long)arg1 emphasisAnimation:(bool)arg2 overrideIndexDisplayMode:(bool)arg3;
- (bool)_attemptToImmediatelyRecognizeEdgeGesture;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector { double x1; double x2; })arg1;
- (bool)_canFastScrollWithEdgeSwipe;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1 withScrollingStyle:(long long)arg2;
- (void)_focusDidUpate:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;
- (bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2 withScrollingStyle:(long long)arg3;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (void)_startSwipeIntervalTimer;
- (void)_stopSwipeIntervalTimer;
- (void)_swipeIntervalElapsed:(id)arg1;
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;
- (bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;
- (void)_touchSequenceDidEnd:(id)arg1;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;
- (void)activateRotaryGesturePreviewingScrollViewWithEmphasisAnimation:(bool)arg1;
- (bool)attemptToImmediatelyRecognizeRotaryGesture;
- (bool)canImmediatelyRecognizeRotaryGesture;
- (void)deactivateRotaryGesturePreviewingScrollViewIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithPanGesture:(id)arg1;
- (id)initWithPanGesture:(id)arg1 rotaryGesture:(id)arg2;
- (bool)isEnabled;
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)pageButtonPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
