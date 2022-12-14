/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthArticlesUI.framework/HealthArticlesUI
 */

@interface HealthArticlesUI.LinkedTextView : HealthArticlesUI.ParagraphView <UITextViewDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  linkContent;
    void linkedText;
    void paragraphText;
}

// Image: /System/Library/PrivateFrameworks/HealthArticlesUI.framework/HealthArticlesUI

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

// Image: /System/Library/AccessibilityBundles/HealthArticlesUI.axbundle/HealthArticlesUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityLinkedTextView;
- (bool)accessibilityActivate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;

@end
