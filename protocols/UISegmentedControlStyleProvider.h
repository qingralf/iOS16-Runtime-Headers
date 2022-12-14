/* Generated by RuntimeBrowser.
 */

@protocol UISegmentedControlStyleProvider <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentInsetsForControlSize:(int)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)animateSlidingSelectionByDefault;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForControlSize:(int)arg1 position:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)cornerRadiusForControlSize:(int)arg1;
- (UIView *)createBackdropView;
- (UIView<UISegmentBezelView> *)createSegmentBezelView;
- (UIColor *)defaultBackgroundTintColor;
- (double)defaultContentPaddingWidth;
- (double)defaultHeightForControlSize:(int)arg1;
- (double)defaultInterSegmentSpacing;
- (double)defaultTextContentPaddingWidth;
- (double)dividerWidthForControlSize:(int)arg1;
- (UIColor *)fontColorForSegment:(UIView<UISegmentProtocol> *)arg1 enabled:(bool)arg2 selected:(bool)arg3 state:(unsigned long long)arg4;
- (UIFont *)fontForControlSize:(int)arg1 selected:(bool)arg2;
- (bool)hasTransparentBackgroundByDefault;
- (bool)limitInternalLayoutAndInteractionToDefaultHeight;
- (double)mostlyInsideMargin;
- (double)segmentHidingFinalScaleFactor;
- (double)segmentSelectionScaleFactor;
- (UIVibrancyEffect *)selectedSegmentDefaultVibrancyEffect;
- (double)selectionIndicatorInsetForControlSize:(int)arg1;
- (bool)supportsAXPopover;
- (bool)supportsDynamicTypeByDefault;
- (bool)useGeneratedImages;
- (bool)useSelectionIndicatorStyling;
- (bool)useTVStyleFocusSelection;

@optional

- (void)updateSegmentedControl:(UISegmentedControl *)arg1 fromTraitCollection:(UITraitCollection *)arg2;

@end
