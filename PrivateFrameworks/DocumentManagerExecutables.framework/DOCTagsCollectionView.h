/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
 */

@interface DOCTagsCollectionView : UIView <DOCTagsCollectionItemContentViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    UIView<DOCTagsCollectionCellMenuTarget> * _calloutMenuTarget;
    id  _calloutMenuTargetIdentity;
    UIGestureRecognizer * _cellLongPressGestureRecognizer;
    UICollectionView * _collectionView;
    <DOCTagsCollectionViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastIntrinsicContentSize;
    bool  _showsAddTagButton;
    NSDictionary * _sizingCells;
    NSArray * _tags;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCTagsCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsAddTagButton;
@property (nonatomic, readonly) NSDictionary *sizingCells;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tags;

- (void).cxx_destruct;
- (id)_cellMenuTargetForIndexPath:(id)arg1;
- (id)_cellMenuTargetForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_clearCalloutMenuTarget;
- (void)_commonInit;
- (id)_layout;
- (void)_reloadCalloutMenuTarget;
- (void)_setCalloutMenuTarget:(id)arg1;
- (void)_setupCalloutMenuGestureHandling;
- (bool)_supportsTagsCollectionContextMenu;
- (void)_updateForContentCategorySize;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(id /* block */)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)longPressGestureRecognizerHandler:(id)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setShowsAddTagButton:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setupCells:(id)arg1 registerClasses:(bool)arg2;
- (bool)showsAddTagButton;
- (id)sizingCells;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tags;
- (void)tagsCollectionItem:(id)arg1 didDeleteTag:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
