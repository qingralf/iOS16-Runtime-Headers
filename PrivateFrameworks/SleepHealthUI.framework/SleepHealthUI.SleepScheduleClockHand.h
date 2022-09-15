/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
 */

@interface SleepHealthUI.SleepScheduleClockHand : UIControl {
    void background;
    void configuration;
    void image;
    void symbol;
}

@property (nonatomic) bool highlighted;

// Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI

- (void).cxx_destruct;
- (bool)accessibilityHandIsBedtime;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/SleepHealthUI.axbundle/SleepHealthUI

+ (Class)safeCategoryBaseClass;

- (id)_axEditCell;
- (bool)_axIsValidSleepDurationIncrement:(bool)arg1 clock:(id)arg2 isAdjustingBedtime:(bool)arg3;
- (id)_axLastSpokenMessage;
- (void)_axSetLastSpokenMessage:(id)arg1;
- (void)_axSpeakClockAlertIfNeeded;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)adjustClockHandIncrement:(bool)arg1;
- (id)decrementComponents:(id)arg1;
- (id)incrementComponents:(id)arg1;
- (bool)isAccessibilityElement;

@end