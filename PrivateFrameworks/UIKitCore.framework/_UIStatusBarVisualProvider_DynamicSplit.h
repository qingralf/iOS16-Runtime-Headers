/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_DynamicSplit : _UIStatusBarVisualProvider_Split {
    NSLayoutConstraint * _cutoutCenterConstraint;
    NSLayoutConstraint * _cutoutWidthConstraint;
    NSLayoutConstraint * _leadingCenterYConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *cutoutCenterConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cutoutWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingCenterYConstraint;

+ (double)baseFontSize;
+ (double)expandedFontSize;
+ (double)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (bool)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cutoutOffset:(double*)arg2 cutoutWidth:(double*)arg3;
- (id)_orderedDisplayItemPlacements;
- (bool)_updateSystemNavigationWithData:(id)arg1 avoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAnimationSettings:(id)arg2 interactively:(bool)arg3;
- (double)bottomLeadingTopOffset;
- (id)cutoutCenterConstraint;
- (double)cutoutEdgeInset;
- (id)cutoutWidthConstraint;
- (void)dataUpdated:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (double)effectiveTargetDisplayWidth;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (double)expandedIconScale;
- (double)itemSpacing;
- (id)leadingCenterYConstraint;
- (unsigned long long)leadingNumberOfItemsForWidth:(double)arg1;
- (double)minimumBottomLeadingWidth;
- (double)normalIconScale;
- (id)normalRoundFont;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)sensorAreaCenterOffsetFromTrailing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorAreaRect;
- (struct CGSize { double x1; double x2; })sensorAreaSize;
- (void)setCutoutCenterConstraint:(id)arg1;
- (void)setCutoutWidthConstraint:(id)arg1;
- (void)setLeadingCenterYConstraint:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (double)topLeadingCenterOffset;
- (unsigned long long)trailingNumberOfItemsForWidth:(double)arg1 includingPrivacyIndicator:(bool)arg2;
- (id)willUpdateWithData:(id)arg1;

@end
