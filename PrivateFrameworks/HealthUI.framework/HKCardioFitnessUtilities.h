/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCardioFitnessUtilities : NSObject

+ (id)_localizationKeyForCardioFitnessLevel:(long long)arg1 keyVariant:(id)arg2;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)cardioFitnessDataForBiologicalSex:(long long)arg1 age:(long long)arg2;
+ (id)cardioFitnessDataForLevel:(long long)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessDataForLevel:(long long)arg1 date:(id)arg2 healthStore:(id)arg3;
+ (id)cardioFitnessDataForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (id)cardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)arg1 applicationItems:(id)arg2 preferredOverlay:(long long)arg3 analyticsDelegate:(id)arg4 trendModel:(id)arg5;
+ (bool)cardioFitnessLevelChartShouldDisplayLowerBound:(long long)arg1;
+ (bool)cardioFitnessLevelChartShouldDisplayUpperBound:(long long)arg1;
+ (id)cardioFitnessLevelDataForChartData:(id)arg1;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg1 healthStore:(id)arg2;
+ (long long)cardioFitnessLevelForVO2Max:(double)arg1 biologicalSex:(long long)arg2 age:(long long)arg3;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)arg1 inHealthStore:(id)arg2;
+ (id)cardioFitnessLookupPropertiesForChartData:(id)arg1;
+ (id)effectiveChartPointDateWithStatisticsInterval:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)arg1;
+ (id)localizationKeyForCardioFitnessLevel:(long long)arg1;
+ (id)localizedStringForCardioFitnessDescription:(long long)arg1 age:(long long)arg2;
+ (id)localizedStringForCardioFitnessLevel:(long long)arg1;
+ (id)localizedStringForCardioFitnessLevelName:(long long)arg1;
+ (id)localizedStringForCardioFitnessTitle:(long long)arg1;
+ (id)vo2MaxInteractiveChartViewControllerWithDisplayDate:(id)arg1 applicationItems:(id)arg2 trendModel:(id)arg3;

@end
