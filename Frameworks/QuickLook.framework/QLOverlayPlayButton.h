/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLOverlayPlayButton : UIView {
    SEL  _action;
    _UIBackdropView * _backdropView;
    UIButton * _button;
    id  _target;
}

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (void).cxx_destruct;
- (void)_playButtonActivate:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/AccessibilityBundles/QuickLook.axbundle/QuickLook

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_playButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
