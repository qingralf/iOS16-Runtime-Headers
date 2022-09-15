/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDropShadowView : UIView {
    _UIGrabber * __bottomGrabber;
    <UIDropShadowViewDelegate> * __delegate;
    double  __grabberAlpha;
    long long  __grabberEdge;
    double  __grabberSpacing;
    bool  __hasGrabber;
    _UIGrabber * __topGrabber;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentTouchInsets;
    UIView * _contentView;
    NSArray * _cornerClippingDescendants;
    struct UIRectCornerRadii { 
        double topLeft; 
        double bottomLeft; 
        double bottomRight; 
        double topRight; 
    }  _environmentMatchingCornerRadii;
    UIView * _firstCornerClippingDescendant;
    long long  _independentCorners;
    _UIRoundedRectShadowView * _magicShadowView;
    bool  _masksTopCornersOnly;
    UIView * _overlayView;
    bool  _supportsShadow;
}

@property (nonatomic, readonly) _UIGrabber *_bottomGrabber;
@property (nonatomic) <UIDropShadowViewDelegate> *_delegate;
@property (setter=_setGrabberAlpha:, nonatomic) double _grabberAlpha;
@property (setter=_setGrabberEdge:, nonatomic) long long _grabberEdge;
@property (setter=_setGrabberSpacing:, nonatomic) double _grabberSpacing;
@property (nonatomic, readonly) bool _hasCreatedGrabbers;
@property (setter=_setHasGrabber:, nonatomic) bool _hasGrabber;
@property (nonatomic, readonly) _UIGrabber *_topGrabber;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentTouchInsets;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) NSArray *cornerClippingDescendants;
@property (nonatomic, readonly) UIView *deepestClippingView;
@property (nonatomic) struct UIRectCornerRadii { double x1; double x2; double x3; double x4; } environmentMatchingCornerRadii;
@property (nonatomic, readonly) UIView *firstCornerClippingDescendant;
@property (nonatomic, readonly) long long independentCorners;
@property (nonatomic, readonly) _UIRoundedRectShadowView *magicShadowView;
@property (nonatomic) bool masksTopCornersOnly;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, readonly) bool supportsShadow;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_bottomGrabber;
- (id)_delegate;
- (double)_grabberAlpha;
- (long long)_grabberEdge;
- (void)_grabberPrimaryAction;
- (double)_grabberSpacing;
- (bool)_hasCreatedGrabbers;
- (bool)_hasGrabber;
- (bool)_isGrabber:(id)arg1;
- (void)_layoutGrabbers;
- (void)_setGrabberAlpha:(double)arg1;
- (void)_setGrabberEdge:(long long)arg1;
- (void)_setGrabberSpacing:(double)arg1;
- (void)_setHasGrabber:(bool)arg1;
- (id)_topGrabber;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsScrollAncestor;
- (id)_axSheetPresentationController;
- (bool)accessibilityScrollDownPage;
- (bool)accessibilityScrollDownPageSupported;
- (bool)accessibilityScrollToVisibleWithChild:(id)arg1;
- (bool)accessibilityScrollUpPage;
- (bool)accessibilityScrollUpPageSupported;

// Image: /usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentTouchInsets;
- (id)contentView;
- (id)cornerClippingDescendants;
- (id)deepestClippingView;
- (void)didFinishRotation;
- (void)didMoveToWindow;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })environmentMatchingCornerRadii;
- (id)firstCornerClippingDescendant;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)independentCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 independentCorners:(long long)arg2 supportsShadow:(bool)arg3 stylesSheetsAsCards:(bool)arg4;
- (void)layoutSubviews;
- (id)magicShadowView;
- (bool)masksTopCornersOnly;
- (id)overlayView;
- (void)setContentTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentView:(id)arg1;
- (void)setEnvironmentMatchingCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagicShadowAlpha:(double)arg1;
- (void)setMasksTopCornersOnly:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)set_delegate:(id)arg1;
- (bool)supportsShadow;
- (void)updateCornerClippingViews;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end