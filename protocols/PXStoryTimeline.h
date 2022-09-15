/* Generated by RuntimeBrowser.
 */

@protocol PXStoryTimeline <NSObject>

@required

- (<PXStoryClip> *)clipWithIdentifier:(long long)arg1;
- (<PXStoryClip> *)clipWithResourceKind:(long long)arg1 afterClipIdentifier:(long long)arg2;
- (bool)containsAllSegmentsWithIdentifiers:(NSIndexSet *)arg1;
- (bool)containsSegmentWithIdentifier:(long long)arg1;
- (long long)dataSourceIdentifier;
- (NSString *)diagnosticDescription;
- (void)enumerateClipsInTimeRange:(void *)arg1 rect:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 12: struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*, struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; }*, bool*, void*
- (void)enumerateSegmentsInTimeRange:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 10: struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*, struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; }*, bool*, void*
- (long long)firstSegmentIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIdentifier:(long long)arg1;
- (long long)identifierForSegmentAtIndex:(long long)arg1;
- (long long)identifierForSegmentWithOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromEndOfSegmentWithIdentifier:(long long)arg2 timeIntoSegment:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 resourceKind:(long long)arg3;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)arg1 inTimeline:(id <PXStoryTimeline>)arg2;
- (NSIndexSet *)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)arg1 inTimeline:(id <PXStoryTimeline>)arg2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 resourceKind:(long long)arg3;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (NSIndexSet *)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; })infoForSegmentWithIdentifier:(long long)arg1;
- (long long)lastSegmentIdentifier;
- (long long)numberOfClipsWithResourceKind:(long long)arg1;
- (long long)numberOfSegments;
- (NSString *)objectiveCCode;
- (struct CGSize { double x1; double x2; })originalSize;
- (NSIndexSet *)segmentIdentifiersInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })size;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForSegmentWithIdentifier:(long long)arg1;

@end