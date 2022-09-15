/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityUIServices.framework/ActivityUIServices
 */

@interface ACUISGestureRecognizer : UIGestureRecognizer {
    NSSet * _observedControlClasses;
}

@property (nonatomic, copy) NSSet *observedControlClasses;

- (void).cxx_destruct;
- (bool)_shouldRecognizeTouches:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)observedControlClasses;
- (void)setObservedControlClasses:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end