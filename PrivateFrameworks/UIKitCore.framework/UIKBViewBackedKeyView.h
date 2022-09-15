/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBViewBackedKeyView : UIKBKeyView {
    UIKBBackdropView * _backdropView;
    UIView<UIKBKeyViewContentView> * _contentView;
    UIView * _touchForwardingView;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, retain) UIView<UIKBKeyViewContentView> *contentView;
@property (nonatomic) UIView *touchForwardingView;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /usr/lib/libMainThreadChecker.dylib

- (id)backdropView;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)renderFlagsForTraits:(id)arg1;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setBackdropView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setTouchForwardingView:(id)arg1;
- (id)touchForwardingView;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end