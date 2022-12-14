/* Generated by RuntimeBrowser.
 */

@protocol TabThumbnailCollectionViewDelegate <TabCollectionViewDelegate>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveSafeAreaInsetsForTabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1;
- (UIView *)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 borrowContentViewForItem:(id <TabCollectionItem>)arg2 withTopBackdropView:(id*)arg3 ofHeight:(double)arg4;
- (void)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (bool)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 cloudTab:(WBSCloudTab *)arg2 matchesSearchText:(NSString *)arg3;
- (bool)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 item:(id <TabCollectionItem>)arg2 matchesSearchText:(NSString *)arg3;
- (void)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 relinquishBorrowedContentView:(UIView *)arg2 forItem:(id <TabCollectionItem>)arg3;
- (UIImage *)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 snapshotForItem:(id <TabCollectionItem>)arg2;
- (bool)tabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1 validSnapshotExistsForItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(UIView<TabThumbnailCollectionView> *)arg1 reason:(NSString *)arg2;
- (void)tabCollectionViewDidDismiss:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewDidPresent:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewEndIgnoringUserInteraction:(UIView<TabThumbnailCollectionView> *)arg1 reason:(NSString *)arg2;
- (double)tabCollectionViewItemHeaderHeight:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewWillDismiss:(UIView<TabThumbnailCollectionView> *)arg1;
- (void)tabCollectionViewWillPresent:(UIView<TabThumbnailCollectionView> *)arg1;
- (NSUndoManager *)undoManagerForTabCollectionView:(UIView<TabThumbnailCollectionView> *)arg1;

@optional

- (void)tabCollectionViewDidCancelDismissal:(UIView<TabThumbnailCollectionView> *)arg1;

@end
