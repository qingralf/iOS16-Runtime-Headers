/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeRecipientView : CNComposeRecipientTextView {
    UIView * _backgroundPlatterView;
    bool  _showsBackgroundPlatterView;
    <CKComposeRecipientViewDelegate> * layoutDelegate;
}

@property (nonatomic, retain) UIView *backgroundPlatterView;
@property (nonatomic) <CKComposeRecipientViewDelegate> *layoutDelegate;
@property (nonatomic) bool showsBackgroundPlatterView;

- (void).cxx_destruct;
- (void)_updateBackgroundPlatterViewIfNecessary;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (id)backgroundPlatterView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutDelegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (void)reset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setBackgroundPlatterView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setShowsBackgroundPlatterView:(bool)arg1;
- (bool)showsBackgroundPlatterView;

@end