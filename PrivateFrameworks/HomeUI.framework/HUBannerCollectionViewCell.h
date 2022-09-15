/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUBannerCollectionViewCell : UICollectionViewCell <HUGridCellProtocol> {
    HUBannerView * _bannerView;
    bool  _cellContentsHidden;
}

@property (nonatomic, readonly) HUBannerView *bannerView;
@property (getter=areCellContentsHidden, nonatomic) bool cellContentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;
@property (getter=isPointerInteractionEnabled, nonatomic) bool pointerInteractionEnabled;
@property (nonatomic) double pointerRegionMargin;
@property (getter=isRearranging, nonatomic) bool rearranging;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (Class)bannerViewClass;
+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (bool)areCellContentsHidden;
- (id)bannerView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)layoutOptions;
- (void)prepareForReuse;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (long long)_accessibilitySortPriority;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end