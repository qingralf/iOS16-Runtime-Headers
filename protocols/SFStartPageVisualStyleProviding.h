/* Generated by RuntimeBrowser.
 */

@protocol SFStartPageVisualStyleProviding <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewContentInsetsWithNavigationBarPosition:(long long)arg1;
- (double)defaultRowSpacing;
- (long long)numberOfColumnsForSectionItemType:(long long)arg1 sectionWidth:(double)arg2 traitCollection:(UITraitCollection *)arg3;
- (UITraitCollection *)overrideTraitCollectionFromProposedTraits:(NSArray *)arg1 isShowingWallpaper:(bool)arg2;
- (double)rowSpacingForSectionItemType:(long long)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInsetsWithViewLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)sectionHeaderBottomGap;
- (UIFont *)sectionHeaderLargeTitleFont;
- (double)siteIconSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1;

@end