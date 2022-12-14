/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate> {
    UIView * _bottomBorderView;
    UILabel * _label;
    bool  _leftToRight;
    long long  _maximumCharacterCount;
    UILabel * _placeholderLabel;
    UITextView * _textView;
    UIView * _topBorderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool leftToRight;
@property (nonatomic) long long maximumCharacterCount;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)newTextView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (bool)leftToRight;
- (long long)maximumCharacterCount;
- (id)placeholder;
- (void)setLabel:(id)arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setMaximumCharacterCount:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
