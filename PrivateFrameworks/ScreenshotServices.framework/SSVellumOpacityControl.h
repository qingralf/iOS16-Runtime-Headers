/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSVellumOpacityControl : UIControl {
    UIImageView * _leadingImageView;
    UISlider * _slider;
    UIImageView * _trailingImageView;
}

@property (nonatomic) double value;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

+ (double)preferredWidth;

- (void).cxx_destruct;
- (id)_leftImageView;
- (id)_rightImageView;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setValue:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (double)value;

// Image: /System/Library/AccessibilityBundles/ScreenshotServicesFramework.axbundle/ScreenshotServicesFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end