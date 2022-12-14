/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject {
    <PSAppCellularUsageSpecifierDelegate> * _specifierDelegate;
    PSDataUsageStatisticsCache * _statisticsCache;
}

@property (nonatomic) <PSAppCellularUsageSpecifierDelegate> *specifierDelegate;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;

- (void).cxx_destruct;
- (id)getLogger;
- (id)initWithPolicySpecifierDelegate:(id)arg1 statisticsCache:(id)arg2;
- (void)setSpecifierDelegate:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (id)specifierDelegate;
- (id)specifiers;
- (id)statisticsCache;

@end
