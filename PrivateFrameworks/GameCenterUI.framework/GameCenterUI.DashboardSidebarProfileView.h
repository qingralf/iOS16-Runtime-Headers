/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GameCenterUI.DashboardSidebarProfileView : JetUI.CustomLayoutView {
    void badgeView;
    void currentTouch;
    void focusedBackground;
    void isHighlighted;
    void isSelected;
    void onSelected;
    void photoView;
    void selectedBackground;
    void selectionFollowsFocus;
    void style;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
