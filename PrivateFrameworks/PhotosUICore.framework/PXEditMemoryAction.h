/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEditMemoryAction : PXPhotosAction {
    PHMemory * _memory;
    PHAsset * _redoKeyAsset;
    NSData * _redoPhotosGraphData;
    long long  _redoStoryColorGradeKind;
    <NSFastEnumeration> * _redoUserCuratedAssets;
    PHAsset * _undoKeyAsset;
    NSData * _undoPhotosGraphData;
    long long  _undoStoryColorGradeKind;
    <NSFastEnumeration> * _undoUserCuratedAssets;
}

@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) PHAsset *redoKeyAsset;
@property (nonatomic, readonly) NSData *redoPhotosGraphData;
@property (nonatomic, readonly) long long redoStoryColorGradeKind;
@property (nonatomic, readonly) <NSFastEnumeration> *redoUserCuratedAssets;
@property (nonatomic, readonly) PHAsset *undoKeyAsset;
@property (nonatomic, readonly) NSData *undoPhotosGraphData;
@property (nonatomic, readonly) long long undoStoryColorGradeKind;
@property (nonatomic, readonly) <NSFastEnumeration> *undoUserCuratedAssets;

- (void).cxx_destruct;
- (void)_changePhotosGraphData:(id)arg1 storyColorGradeKind:(long long)arg2 keyAsset:(id)arg3 userCuratedAssets:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithMemory:(id)arg1 photosGraphData:(id)arg2 storyColorGradeKind:(long long)arg3 keyAsset:(id)arg4 userCuratedAssets:(id)arg5;
- (id)memory;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoKeyAsset;
- (id)redoPhotosGraphData;
- (long long)redoStoryColorGradeKind;
- (id)redoUserCuratedAssets;
- (id)undoKeyAsset;
- (id)undoPhotosGraphData;
- (long long)undoStoryColorGradeKind;
- (id)undoUserCuratedAssets;

@end