/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIVariantSelectorView : UIView {
    NSMutableArray * _arrangedVariantCells;
    UIView * _backdropView;
    TUIDrawingView * _backgroundMaskView;
    UIKBTree * _backingTree;
    UILayoutGuide * _baseKeyLayoutGuide;
    bool  _baseKeyOnRight;
    TUIDrawingView * _borderView;
    UIView * _deepShadowView;
    UIView * _keyShadowView;
    long long  _layoutStyle;
    bool  _needsPopup;
    UIKBRenderTraits * _renderTraits;
    unsigned long long  _selectedVariant;
    UIView * _touchesForwardingView;
    UILayoutGuide * _variantLayoutGuide;
    UIView * _variantView;
}

@property (nonatomic, retain) NSMutableArray *arrangedVariantCells;
@property (nonatomic, readonly) UIKBTree *associatedTree;
@property (nonatomic, retain) UIView *backdropView;
@property (nonatomic, retain) TUIDrawingView *backgroundMaskView;
@property (nonatomic, retain) UIKBTree *backingTree;
@property (nonatomic, readonly) UILayoutGuide *baseKeyLayoutGuide;
@property (nonatomic) bool baseKeyOnRight;
@property (nonatomic, retain) TUIDrawingView *borderView;
@property (nonatomic, retain) UIView *deepShadowView;
@property (nonatomic, retain) UIView *keyShadowView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) bool needsPopup;
@property (nonatomic, retain) UIKBRenderTraits *renderTraits;
@property (nonatomic, readonly) unsigned long long selectedVariant;
@property (nonatomic) UIView *touchesForwardingView;
@property (nonatomic, retain) UILayoutGuide *variantLayoutGuide;
@property (nonatomic, retain) UIView *variantView;

- (void).cxx_destruct;
- (void)addVariantsForKey:(id)arg1 toView:(id)arg2;
- (id)arrangedVariantCells;
- (id)associatedTree;
- (id)backdropView;
- (id)backgroundMaskView;
- (id)backingTree;
- (id)baseKeyLayoutGuide;
- (bool)baseKeyOnRight;
- (id)borderView;
- (id)constraintsToMatchInnerView:(id)arg1 toOuterView:(id)arg2 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)constraintsToMatchView:(id)arg1 toLayoutGuide:(id)arg2 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)deepShadowView;
- (void)finishVariantSelection;
- (bool)highlightCellAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned long long)indexOfHighlightedVariant;
- (id)initWithKey:(id)arg1 renderTraits:(id)arg2;
- (id)keyShadowView;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (bool)needsPopup;
- (id)paddleBezierPath;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popupConstructor;
- (id)renderTraits;
- (unsigned long long)selectedVariant;
- (void)setArrangedVariantCells:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBackgroundMaskView:(id)arg1;
- (void)setBackingTree:(id)arg1;
- (void)setBaseKeyOnRight:(bool)arg1;
- (void)setBorderView:(id)arg1;
- (void)setDeepShadowView:(id)arg1;
- (void)setInitialHighlight;
- (void)setKeyShadowView:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setNeedsPopup:(bool)arg1;
- (void)setRenderTraits:(id)arg1;
- (void)setTouchesForwardingView:(id)arg1;
- (void)setVariantLayoutGuide:(id)arg1;
- (void)setVariantView:(id)arg1;
- (id)touchesForwardingView;
- (void)unhighlightAllViews;
- (void)updateConstraints;
- (void)updateRenderTraits:(id)arg1 forState:(int)arg2;
- (void)updateSelectorForTouch:(id)arg1 event:(id)arg2;
- (void)updateVariantsIfNeededForKey:(id)arg1;
- (id)variantCellAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)variantLayoutGuide;
- (id)variantView;

@end