/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentMessagesMultiActionView : UIView {
    id /* block */  _actionHandler;
    bool  _enabled;
    UIActivityIndicatorView * _leadingActivityIndicator;
    UIView * _leadingActivityIndicatorBackground;
    PKPeerPaymentMessagesMultiActionViewButton * _leadingButton;
    UIActivityIndicatorView * _trailingActivityIndicator;
    UIView * _trailingActivityIndicatorBackground;
    PKPeerPaymentMessagesMultiActionViewButton * _trailingButton;
    bool  _usesFlexibleButtonWidth;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long leadingAction;
@property (nonatomic) unsigned long long trailingAction;
@property (nonatomic) bool usesFlexibleButtonWidth;

+ (struct CGSize { double x1; double x2; })referenceSize;

- (void).cxx_destruct;
- (id)_axIdentifierForAction:(unsigned long long)arg1;
- (id)_button;
- (void)_handleActionButton:(id)arg1;
- (id)_titleForAction:(unsigned long long)arg1;
- (id /* block */)actionHandler;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (unsigned long long)leadingAction;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setActivityIndicatorVisible:(bool)arg1 forAction:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setLeadingAction:(unsigned long long)arg1;
- (void)setTrailingAction:(unsigned long long)arg1;
- (void)setUsesFlexibleButtonWidth:(bool)arg1;
- (unsigned long long)trailingAction;
- (bool)usesFlexibleButtonWidth;

@end
