/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate> {
    <CloudTabTableDelegate> * _delegate;
    WBSCloudTabDevice * _device;
    NSArray * _displayedTabs;
    WBSCloudTab * _focusedTab;
    CloudTabHeaderView * _headerView;
    unsigned long long  _indexOfFocusedTab;
    ViewReuseManager * _itemViewReuseManager;
    id /* block */  _layoutAnimator;
    double  _offsetAboveFocusedTab;
    double  _offsetBelowFocusedTab;
    long long  _style;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _trackedItemViewRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, readonly) double contentMinimumY;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CloudTabTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedTabs;
@property (nonatomic, retain) WBSCloudTab *focusedTab;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ layoutAnimator;
@property (nonatomic) double offsetAboveFocusedTab;
@property (nonatomic) double offsetBelowFocusedTab;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (void).cxx_destruct;
- (void)_didSelectItemView:(id)arg1;
- (void)_layoutItemView:(id)arg1 representingItemAtIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForItemAtIndex:(unsigned long long)arg1;
- (bool)_shouldShowSeparatorForItemViewAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleItemRange;
- (void)cloudTabItemViewDeleteButtonWasTapped:(id)arg1;
- (void)cloudTabItemViewDidFinishEditing:(id)arg1;
- (void)cloudTabItemViewDidStartEditing:(id)arg1;
- (void)cloudTabItemViewHighlightStateDidChange:(id)arg1;
- (double)contentMinimumY;
- (id)delegate;
- (id)displayedTabs;
- (id)focusedTab;
- (id)initWithDevice:(id)arg1 style:(long long)arg2;
- (id /* block */)layoutAnimator;
- (void)layoutSubviews;
- (double)offsetAboveFocusedTab;
- (double)offsetBelowFocusedTab;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForTab:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusedTab:(id)arg1;
- (void)setLayoutAnimator:(id /* block */)arg1;
- (void)setOffsetAboveFocusedTab:(double)arg1;
- (void)setOffsetBelowFocusedTab:(double)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)updateDisplayedTabs;
- (void)viewReuseManager:(id)arg1 prepareView:(id)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3;
- (void)viewReuseManager:(id)arg1 willRecycleView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

// Image: /System/Library/AccessibilityBundles/MobileSafariUI.axbundle/MobileSafariUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityScrollingEnabled;

@end
