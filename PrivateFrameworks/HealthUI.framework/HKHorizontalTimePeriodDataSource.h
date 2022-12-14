/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource {
    HKSampleType * _sampleType;
    id /* block */  _userInfoCreationBlock;
    NSArray * _valueOrder;
}

@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;
@property (nonatomic, retain) NSArray *valueOrder;

- (void).cxx_destruct;
- (id)_chartPointsWithDateIntervalsByValue:(id)arg1 sourceTimeZone:(id)arg2;
- (id)_codableQueryDataWithSamples:(id)arg1;
- (id)_dateIntervalsByValueWithCodableQueryData:(id)arg1;
- (id)_organizeSamplesByValueAndDateInterval:(id)arg1;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(bool)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)queryDescription;
- (id)sampleType;
- (void)setSampleType:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (void)setValueOrder:(id)arg1;
- (bool)supportsChartQueryDataGeneration;
- (id /* block */)userInfoCreationBlock;
- (id)valueOrder;

@end
