/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
 */

@interface PromotedContentUI.CarouselAdView : APPCPromotedContentView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void $__lazy_storage_$__adSize;
    void $__lazy_storage_$_advertiserLabel;
    void $__lazy_storage_$_advertiserView;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_headlineLabel;
    void dataRepresentation;
    void elements;
    void previousVelocity;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
