/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointsWithSystolicResults:(id)arg1 diastolicResults:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 sourceTimeZone:(id)arg5;
- (id)_earliestDateForSystolicResults:(id)arg1 diastolicResults:(id)arg2;
- (id)_latestDateForSystolicResults:(id)arg1 diastolicResults:(id)arg2;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)queryDescription;
- (unsigned long long)queryStatisticsOption;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;

@end