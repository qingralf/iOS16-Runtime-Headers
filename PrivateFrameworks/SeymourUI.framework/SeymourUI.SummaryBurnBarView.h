/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
 */

@interface SeymourUI.SummaryBurnBarView : UIView {
    void burnBarSummary;
    void headerLabelStack;
    void stringBuilder;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

// Image: /System/Library/AccessibilityBundles/SeymourUI.axbundle/SeymourUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (long long)_positionForPersonalScore:(float)arg1 low:(float)arg2 lowMiddle:(float)arg3 highMiddle:(float)arg4 high:(float)arg5;
- (bool)isAccessibilityElement;
- (void)updateBurnBarAccessibility:(id)arg1 personalScore:(float)arg2 low:(float)arg3 lowMiddle:(float)arg4 highMiddle:(float)arg5 high:(float)arg6;

@end