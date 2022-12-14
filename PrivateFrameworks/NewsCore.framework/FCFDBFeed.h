/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFDBFeed : NSManagedObject

@property (nonatomic, retain) NSString *feedID;
@property (nonatomic) NSNumber *lookupID;
@property (nonatomic, retain) NSDate *refreshDate;
@property (nonatomic) unsigned long long refreshedToOrder;
@property (nonatomic, retain) NSOrderedSet *segments;

- (void)_visitContiguousSegmentsInRange:(id)arg1 withBlock:(id /* block */)arg2;
- (void)awakeFromFetch;
- (id)contiguousRangeInRange:(id)arg1;
- (id)contiguousSegmentsInFeedRange:(id)arg1;
- (void)enumerateGapsWithBlock:(id /* block */)arg1;
- (id)firstSegmentFollowingCursor:(id)arg1;
- (void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(bool)arg8;
- (void)insertSegment:(id)arg1;
- (id)lastSegmentPrecedingCursor:(id)arg1;
- (id)prune;
- (void)willAccessFeedRange:(id)arg1;
- (void)willTurnIntoFault;

@end
