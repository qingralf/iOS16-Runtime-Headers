/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

@interface HACCSlider : UIControl <HACCContentModule> {
    NSNumberFormatter * _numberFormatter;
    unsigned long long  _numberOfSteps;
    HUIStepSlider * _slider;
    UILabel * _statusLabel;
    long long  _style;
    UIView * _subtitleContainer;
    UILabel * _subtitleLabel;
    UIVisualEffectView * _titleContainer;
    UILabel * _titleLabel;
    double  _value;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long module;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic, retain) HUIStepSlider *slider;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic) long long style;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andModule:(unsigned long long)arg2;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (unsigned long long)module;
- (id)numberFormatter;
- (unsigned long long)numberOfSteps;
- (void)setDelegate:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setNumberOfSteps:(unsigned long long)arg1;
- (void)setSlider:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 andNotify:(bool)arg2;
- (bool)shouldShowMinMaxImages;
- (id)slider;
- (void)sliderDidChange:(id)arg1;
- (id)statusLabel;
- (long long)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateValue;
- (void)updateValueString;
- (double)value;

@end
