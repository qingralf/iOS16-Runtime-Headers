/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate> {
    bool  _expandedForDirectManipulation;
    UIColor * _foregroundColor;
    bool  _hasPointer;
    UIView * _roundedFillView;
    long long  _style;
    unsigned long long  _type;
    <_UIScrollViewScrollIndicatorVisualStyle> * _visualStyle;
}

@property (getter=_visualStyle, nonatomic, readonly) <_UIScrollViewScrollIndicatorVisualStyle> *_visualStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *roundedFillView;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_ensureDefaultStyles;
+ (void)registerVisualStyle:(id)arg1 forIdiom:(long long)arg2;
+ (id)visualStyleForIdiom:(long long)arg1;
+ (id)visualStyleForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_layoutFillViewAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_offsetFillViewRectForExpandedState:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_visualStyle;
- (void)didMoveToWindow;
- (id)foregroundColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)roundedFillView;
- (void)setForegroundColor:(id)arg1;
- (void)setRoundedFillView:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityCanAppearInContextMenuPreview;
- (bool)_accessibilityOverridesInvisibility;
- (long long)_accessibilitySortPriority;
- (bool)_accessibilityUseAccessibilityFrameForHittest;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end