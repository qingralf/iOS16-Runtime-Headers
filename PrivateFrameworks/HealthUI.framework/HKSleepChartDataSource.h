/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource {
    NSString * _cacheIdentifier;
    NSCalendar * _calendar;
    NSString * _queryIdentifier;
    unsigned long long  _queryOptions;
}

@property (nonatomic, readonly) NSString *cacheIdentifier;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSString *queryIdentifier;
@property (nonatomic, readonly) unsigned long long queryOptions;

- (void).cxx_destruct;
- (id /* block */)_mappingFunctionForComparisonChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForStagesChartWithContext:(id)arg1;
- (id /* block */)_mappingFunctionForStagesDurationChartWithContext:(id)arg1;
- (id)cacheIdentifier;
- (id)calendar;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id)initWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 queryOptions:(unsigned long long)arg3 cacheIdentifier:(id)arg4 queryIdentifier:(id)arg5 calendar:(id)arg6;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)queryDescription;
- (id)queryIdentifier;
- (unsigned long long)queryOptions;
- (bool)supportsChartQueryDataGeneration;

@end
