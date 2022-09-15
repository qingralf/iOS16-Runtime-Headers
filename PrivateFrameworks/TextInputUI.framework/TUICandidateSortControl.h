/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUICandidateSortControl : UIControl {
    UISegmentedControl * _segmentedControl;
    <TUICandidateViewStyle> * _style;
    NSArray * _titles;
}

@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;
@property (nonatomic, copy) NSArray *titles;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

- (void).cxx_destruct;
- (void)commonInit;
- (void)handleValueChanged;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)segmentedControl;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })segmentedControlFrame;
- (double)segmentedControlWidth;
- (long long)selectedIndex;
- (void)setSegmentedControl:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setStyle:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)style;
- (id)titles;

// Image: /System/Library/AccessibilityBundles/TextInputUI.axbundle/TextInputUI

+ (Class)safeCategoryBaseClass;

- (void)layoutSubviews;

@end