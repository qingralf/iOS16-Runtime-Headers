/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIFocusableTextView : TVFocusableTextView <VUILabelBaselineProtocol> {
    VUILabel * _computationLabel;
    VUITextLayout * _textLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, retain) VUILabel *computationLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUITextLayout *textLayout;
@property (nonatomic, retain) VUITextLayout *titleTextLayout;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;

- (void).cxx_destruct;
- (void)_updateTextColor;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)computationLabel;
- (void)setComputationLabel:(id)arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTitleTextLayout:(id)arg1;
- (id)textLayout;
- (id)titleTextLayout;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)vui_baselineOffsetFromBottom;

// Image: /System/Library/AccessibilityBundles/VideosUIFramework.axbundle/VideosUIFramework

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsMoreLabelVisible;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;

@end
