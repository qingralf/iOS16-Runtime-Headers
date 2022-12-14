/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor
 */

@interface ICAuthorHighlightsUpdater : NSObject {
    void $__lazy_storage_$_grouper;
    void animatesScheduledUpdate;
    void authorHighlightsController;
    void filter;
    void focusedRange;
    void highlightedValue;
    void states;
    void updateTimer;
    void updatesVisibleRangesOnly;
}

@property (nonatomic, readonly) ICAuthorHighlightsController *authorHighlightsController;
@property (nonatomic, retain) TTTextEditFilter *filter;
@property (nonatomic, retain) NSValue *focusedRangeValue;
@property (nonatomic, readonly) NSValue *highlightedRangeValue;
@property (nonatomic) double highlightedValue;
@property (nonatomic) bool updatesVisibleRangesOnly;

- (void).cxx_destruct;
- (id)authorHighlightsController;
- (id)filter;
- (void)flashHighlightsForFilter:(id)arg1;
- (void)flashHighlightsForRanges:(id)arg1 inTextStorage:(id)arg2;
- (id)focusedRangeValue;
- (id)highlightedRangeValue;
- (double)highlightedValue;
- (id)init;
- (id)initWithAuthorHighlightsController:(id)arg1;
- (void)scheduleUpdateAnimated:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFocusedRangeValue:(id)arg1;
- (void)setHighlightedValue:(double)arg1;
- (void)setUpdatesVisibleRangesOnly:(bool)arg1;
- (void)updateAnimated:(bool)arg1;
- (bool)updatesVisibleRangesOnly;

@end
