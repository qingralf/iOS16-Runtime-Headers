/* Generated by RuntimeBrowser.
 */

@protocol _UIPointerInteractionDriverSink <NSObject>

@required

- (void)driver:(id <_UIPointerInteractionDriver>)arg1 didIssueUpdate:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; long long x4; bool x5; })arg2;
- (void)driver:(id <_UIPointerInteractionDriver>)arg1 willAttachHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg2 toView:(UIView *)arg3;
- (void)driverDidExit:(id <_UIPointerInteractionDriver>)arg1;

@end