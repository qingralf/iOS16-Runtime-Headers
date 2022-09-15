/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKImageAnalysisButton : UIButton {
    UIView * __backgroundView;
    UIVisualEffectView * __backgroundVisualEffectView;
    CABasicAnimation * __highlightedGlyphAnimation;
    double  __highlightedGlyphScaleFactor;
    UIView * __selectedBackgroundColorView;
    UIView * __selectedBackgroundView;
    UIVisualEffectView * __selectedBackgroundVisualEffectView;
    double  _backgroundDiameter;
    UIColor * _cameraModeBackgroundColor;
    UIFont * _customSymbolFont;
    bool  _didManuallySetBackgroundDiameter;
    unsigned long long  _function;
    unsigned long long  _glyphConfiguration;
    double  _glyphRotation;
    unsigned long long  _mode;
    bool  _prefersDarkGlyphWhenSelected;
    bool  _supportsDynamicType;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, retain) UIVisualEffectView *_backgroundVisualEffectView;
@property (nonatomic, retain) CABasicAnimation *_highlightedGlyphAnimation;
@property (nonatomic) double _highlightedGlyphScaleFactor;
@property (nonatomic, retain) UIView *_selectedBackgroundColorView;
@property (nonatomic, readonly) UIView *_selectedBackgroundView;
@property (nonatomic, retain) UIVisualEffectView *_selectedBackgroundVisualEffectView;
@property (nonatomic) double backgroundDiameter;
@property (nonatomic, retain) UIColor *cameraModeBackgroundColor;
@property (nonatomic, retain) UIFont *customSymbolFont;
@property (nonatomic) bool didManuallySetBackgroundDiameter;
@property (nonatomic) unsigned long long function;
@property (nonatomic) unsigned long long glyphConfiguration;
@property (nonatomic) double glyphRotation;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool prefersDarkGlyphWhenSelected;
@property (nonatomic) bool supportsDynamicType;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_backgroundVisualEffectView;
- (void)_commonVKImageAnalysisButtonInitialization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_glyphTransformForRotation:(double)arg1 highlighted:(bool)arg2;
- (id)_highlightedGlyphAnimation;
- (double)_highlightedGlyphScaleFactor;
- (id)_selectedBackgroundColorView;
- (id)_selectedBackgroundView;
- (id)_selectedBackgroundVisualEffectView;
- (double)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (void)_updateBackgroundColors;
- (void)_updateForTraitCollection;
- (void)_updateGlyph;
- (double)backgroundDiameter;
- (id)cameraModeBackgroundColor;
- (id)customSymbolFont;
- (bool)didManuallySetBackgroundDiameter;
- (unsigned long long)function;
- (unsigned long long)glyphConfiguration;
- (double)glyphRotation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (unsigned long long)mode;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)prefersDarkGlyphWhenSelected;
- (void)setBackgroundDiameter:(double)arg1;
- (void)setCameraModeBackgroundColor:(id)arg1;
- (void)setCustomSymbolFont:(id)arg1;
- (void)setDidManuallySetBackgroundDiameter:(bool)arg1;
- (void)setFunction:(unsigned long long)arg1;
- (void)setGlyphConfiguration:(unsigned long long)arg1;
- (void)setGlyphRotation:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedGlyphScaleFactor:(double)arg1 animation:(id)arg2;
- (void)setMode:(unsigned long long)arg1;
- (void)setPrefersDarkGlyphWhenSelected:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSupportsDynamicType:(bool)arg1;
- (void)set_backgroundVisualEffectView:(id)arg1;
- (void)set_highlightedGlyphAnimation:(id)arg1;
- (void)set_highlightedGlyphScaleFactor:(double)arg1;
- (void)set_selectedBackgroundColorView:(id)arg1;
- (void)set_selectedBackgroundVisualEffectView:(id)arg1;
- (void)setupForFunction:(unsigned long long)arg1;
- (bool)supportsDynamicType;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/AccessibilityBundles/VisionKitCore.axbundle/VisionKitCore

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end