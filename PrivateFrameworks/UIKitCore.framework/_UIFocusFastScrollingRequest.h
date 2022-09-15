/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingRequest : NSObject {
    unsigned long long  _allowedHeadings;
    NSArray * _arrowButtonGestures;
    id /* block */  _didBeginCallback;
    id /* block */  _didEndCallback;
    unsigned long long  _heading;
    bool  _indexBarAnimatesEmphasisOnDisplay;
    _UIFocusEngineJoystickGestureRecognizer * _joystickGesture;
    NSArray * _pageButtonGestures;
    UIPanGestureRecognizer * _panGesture;
    _UIRotaryGestureRecognizer * _rotaryGesture;
    UIScrollView * _scrollView;
    long long  _scrollingType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic) unsigned long long allowedHeadings;
@property (nonatomic, retain) NSArray *arrowButtonGestures;
@property (nonatomic, copy) id /* block */ didBeginCallback;
@property (nonatomic, copy) id /* block */ didEndCallback;
@property (nonatomic) unsigned long long heading;
@property (nonatomic) bool indexBarAnimatesEmphasisOnDisplay;
@property (nonatomic, retain) _UIFocusEngineJoystickGestureRecognizer *joystickGesture;
@property (nonatomic, retain) NSArray *pageButtonGestures;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic, retain) _UIRotaryGestureRecognizer *rotaryGesture;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) long long scrollingType;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (unsigned long long)allowedHeadings;
- (id)arrowButtonGestures;
- (id /* block */)didBeginCallback;
- (id /* block */)didEndCallback;
- (unsigned long long)heading;
- (bool)indexBarAnimatesEmphasisOnDisplay;
- (id)init;
- (id)joystickGesture;
- (id)pageButtonGestures;
- (id)panGesture;
- (id)rotaryGesture;
- (id)scrollView;
- (long long)scrollingType;
- (void)setAllowedHeadings:(unsigned long long)arg1;
- (void)setArrowButtonGestures:(id)arg1;
- (void)setDidBeginCallback:(id /* block */)arg1;
- (void)setDidEndCallback:(id /* block */)arg1;
- (void)setHeading:(unsigned long long)arg1;
- (void)setIndexBarAnimatesEmphasisOnDisplay:(bool)arg1;
- (void)setJoystickGesture:(id)arg1;
- (void)setPageButtonGestures:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setRotaryGesture:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollingType:(long long)arg1;
- (void)setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })velocity;

@end