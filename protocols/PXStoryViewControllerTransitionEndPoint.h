/* Generated by RuntimeBrowser.
 */

@protocol PXStoryViewControllerTransitionEndPoint <NSObject>

@required

- (<PXStoryItemPlacementController> *)itemPlacementControllerForItemReference:(id)arg1;

@optional

- (bool)allowsTransition:(PXStoryViewControllerTransition *)arg1 withEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg2;
- (id)detailItemReferenceForTransitionWithSummaryEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg1;
- (void)didEndTransition:(PXStoryViewControllerTransition *)arg1 withEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg2 finished:(bool)arg3;
- (id)summaryItemReferenceForTransitionWithSummaryEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg1;
- (void)willBeginTransition:(PXStoryViewControllerTransition *)arg1 withEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg2 anchorItemReference:(id)arg3;
- (void)willDismissWithoutTransitionToEndPoint:(id <PXStoryViewControllerTransitionEndPoint>)arg1;

@end