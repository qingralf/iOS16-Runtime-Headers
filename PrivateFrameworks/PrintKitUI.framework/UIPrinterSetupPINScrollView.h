/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKitUI.framework/PrintKitUI
 */

@interface UIPrinterSetupPINScrollView : UIScrollView {
    UIView * _contentView;
    double  _visibleHeight;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double visibleHeight;

- (void).cxx_destruct;
- (bool)_scrollsToMakeFirstResponderVisible;
- (id)contentView;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setContentView:(id)arg1;
- (void)setVisibleHeight:(double)arg1;
- (double)visibleHeight;

@end