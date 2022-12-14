/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserEventHistoryMetadata : NSObject {
    long long  _aggregateStoreGenerationTime;
    long long  _aggregateTotalCount;
    double  _meanCountOfEvents;
    long long  _sessionsOnDiskSize;
    double  _standardDeviationOfEvents;
    long long  _totalEventsCount;
}

@property (nonatomic) long long aggregateStoreGenerationTime;
@property (nonatomic) long long aggregateTotalCount;
@property (nonatomic) double meanCountOfEvents;
@property (nonatomic) long long sessionsOnDiskSize;
@property (nonatomic) double standardDeviationOfEvents;
@property (nonatomic) long long totalEventsCount;

+ (id)emptyWithSessionsOnDiskSize:(long long)arg1;

- (long long)aggregateStoreGenerationTime;
- (long long)aggregateTotalCount;
- (id)description;
- (id)initWithAggregateStoreGenerationTime:(long long)arg1 aggregateTotalCount:(long long)arg2 meanCountOfEvents:(double)arg3 sessionsOnDiskSize:(long long)arg4 standardDeviationOfEvents:(double)arg5 totalEventsCount:(long long)arg6;
- (double)meanCountOfEvents;
- (long long)sessionsOnDiskSize;
- (void)setAggregateStoreGenerationTime:(long long)arg1;
- (void)setAggregateTotalCount:(long long)arg1;
- (void)setMeanCountOfEvents:(double)arg1;
- (void)setSessionsOnDiskSize:(long long)arg1;
- (void)setStandardDeviationOfEvents:(double)arg1;
- (void)setTotalEventsCount:(long long)arg1;
- (double)standardDeviationOfEvents;
- (long long)totalEventsCount;

@end
