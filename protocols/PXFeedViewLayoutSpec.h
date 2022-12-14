/* Generated by RuntimeBrowser.
 */

@protocol PXFeedViewLayoutSpec

@required

- (struct CGSize { double x1; double x2; })gadgetSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)isFullScreen;
- (double)itemCornerRadius;
- (NSShadow *)itemShadow;
- (PXLayoutGenerator *)layoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)numberOfColumns;
- (double)overlayFeedPeekDistance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })placeholderMargins;
- (long long)rootLayoutOrientation;
- (struct { long long x1; long long x2; bool x3; double x4; double x5; double x6; bool x7; })scrollBehavior;
- (void)setIsFullScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (UIColor *)subtitleColor;
- (UIFont *)subtitleFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })subtitleInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })viewOutsets;
- (bool)wantsFirstItemFullscreen;
- (bool)wantsItemHoverEvents;
- (bool)wantsSafeAreaInsets;
- (bool)wantsScrollIndicators;

@end
