/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkThicknessPicker : UIControl {
    NSArray * _cachedSortedWeights;
    NSArray * _thicknessButtons;
    PKToolConfiguration * _toolConfiguration;
    double  _weight;
}

@property (nonatomic, retain) NSArray *thicknessButtons;
@property (nonatomic, retain) PKToolConfiguration *toolConfiguration;
@property (nonatomic) double weight;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (struct CGSize { double x1; double x2; })sizeWithButtonCount:(unsigned long long)arg1 buttonSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForButtonAtIndex:(long long)arg1;
- (id)_makeThicknessButtons;
- (long long)_nearestButtonIndexForWeight:(double)arg1;
- (double)_nearestButtonWeightForWeight:(double)arg1;
- (id)_sortedWeights;
- (double)_weightForButtonIndex:(long long)arg1;
- (double)buttonSpacing;
- (void)buttonTapped:(id)arg1;
- (id)initWithToolConfiguration:(id)arg1;
- (void)setThicknessButtons:(id)arg1;
- (void)setToolConfiguration:(id)arg1;
- (void)setWeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thicknessButtons;
- (id)toolConfiguration;
- (double)weight;

// Image: /System/Library/AccessibilityBundles/PencilKit.axbundle/PencilKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)layoutSubviews;

@end