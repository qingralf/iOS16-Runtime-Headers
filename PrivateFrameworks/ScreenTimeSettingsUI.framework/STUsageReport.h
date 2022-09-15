/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
 */

@interface STUsageReport : NSObject <NSSecureCoding> {
    double  _activePickupDateIntervals;
    NSArray * _appAndWebUsages;
    NSDictionary * _appUsageByStartOfDateInterval;
    NSArray * _appUsages;
    NSDictionary * _applicationUsageByStartOfDateIntervalByTrustIdentifier;
    NSDictionary * _applicationUsageByTrustIdentifier;
    NSDictionary * _categoryUsageByStartOfDateInterval;
    NSDictionary * _categoryUsageByStartOfDateIntervalByTrustIdentifier;
    NSDictionary * _categoryUsageByTrustIdentifier;
    NSArray * _categoryUsages;
    NSCache * _dataSetByUsageIdentifier;
    NSArray * _dateIntervals;
    NSString * _displayName;
    NSDate * _firstPickup;
    NSDate * _lastUpdatedDate;
    unsigned long long  _maxPickupDateIntervalIndex;
    unsigned long long  _maxPickups;
    NSDateInterval * _maxPickupsDateInterval;
    double  _maxScreenTime;
    double  _notificationDeltaFromHistoricalAverage;
    double  _notificationRate;
    NSArray * _notifications;
    NSDictionary * _notificationsByStartOfDateInterval;
    NSDictionary * _notificationsByStartOfDateIntervalByTrustIdentifier;
    NSDictionary * _notificationsByTrustIdentifier;
    double  _pickupDeltaFromHistoricalAverage;
    double  _pickupFrequency;
    double  _pickupRate;
    NSArray * _pickups;
    NSDictionary * _pickupsByStartOfDateInterval;
    NSDictionary * _pickupsByStartOfDateIntervalByTrustIdentifier;
    NSDictionary * _pickupsByTrustIdentifier;
    NSDateInterval * _reportDateInterval;
    NSDictionary * _screenTimeByStartOfDateInterval;
    double  _screenTimeDeltaFromHistoricalAverage;
    double  _totalAppUsage;
    double  _totalCategoryUsage;
    unsigned long long  _totalNotifications;
    unsigned long long  _totalPickups;
    double  _totalScreenTime;
    double  _totalWebUsage;
    unsigned long long  _type;
    NSDictionary * _webUsageByStartOfDateInterval;
    NSDictionary * _webUsageByStartOfDateIntervalByTrustIdentifier;
    NSDictionary * _webUsageByTrustIdentifier;
    NSArray * _webUsages;
}

@property (nonatomic, readonly) double activePickupDateIntervals;
@property (nonatomic, readonly, copy) NSArray *appAndWebUsages;
@property (nonatomic, readonly, copy) NSDictionary *appUsageByStartOfDateInterval;
@property (nonatomic, readonly, copy) NSArray *appUsages;
@property (nonatomic, readonly, copy) NSDictionary *applicationUsageByStartOfDateIntervalByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *applicationUsageByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *categoryUsageByStartOfDateInterval;
@property (nonatomic, readonly, copy) NSDictionary *categoryUsageByStartOfDateIntervalByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *categoryUsageByTrustIdentifier;
@property (nonatomic, readonly) STUsageReportGraphDataSet *categoryUsageDataSet;
@property (nonatomic, readonly, copy) NSArray *categoryUsages;
@property (nonatomic, retain) NSCache *dataSetByUsageIdentifier;
@property (nonatomic, readonly, copy) NSArray *dateIntervals;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSDate *firstPickup;
@property (nonatomic, readonly, copy) NSDate *lastUpdatedDate;
@property (nonatomic, readonly) unsigned long long maxPickupDateIntervalIndex;
@property (nonatomic, readonly) unsigned long long maxPickups;
@property (nonatomic, readonly, copy) NSDateInterval *maxPickupsDateInterval;
@property (nonatomic, readonly) double maxScreenTime;
@property (readonly) double notificationDeltaFromHistoricalAverage;
@property (nonatomic, readonly) double notificationRate;
@property (nonatomic, readonly, copy) NSArray *notifications;
@property (nonatomic, readonly, copy) NSDictionary *notificationsByStartOfDateInterval;
@property (nonatomic, readonly, copy) NSDictionary *notificationsByStartOfDateIntervalByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *notificationsByTrustIdentifier;
@property (nonatomic, readonly) STUsageReportGraphDataSet *notificationsDataSet;
@property (readonly) double pickupDeltaFromHistoricalAverage;
@property (nonatomic, readonly) double pickupFrequency;
@property (nonatomic, readonly) double pickupRate;
@property (nonatomic, readonly, copy) NSArray *pickups;
@property (nonatomic, readonly, copy) NSDictionary *pickupsByStartOfDateInterval;
@property (nonatomic, readonly, copy) NSDictionary *pickupsByStartOfDateIntervalByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *pickupsByTrustIdentifier;
@property (nonatomic, readonly) STUsageReportGraphDataSet *pickupsDataSet;
@property (nonatomic, readonly, copy) NSDateInterval *reportDateInterval;
@property (nonatomic, readonly, copy) NSDictionary *screenTimeByStartOfDateInterval;
@property (nonatomic, readonly) STUsageReportGraphDataSet *screenTimeDataSet;
@property (nonatomic, readonly) double screenTimeDeltaFromHistoricalAverage;
@property (nonatomic, readonly) double totalAppUsage;
@property (nonatomic, readonly) double totalCategoryUsage;
@property (nonatomic, readonly) unsigned long long totalNotifications;
@property (nonatomic, readonly) unsigned long long totalPickups;
@property (nonatomic, readonly) double totalScreenTime;
@property (nonatomic, readonly) double totalWebUsage;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSDictionary *webUsageByStartOfDateInterval;
@property (nonatomic, readonly, copy) NSDictionary *webUsageByStartOfDateIntervalByTrustIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *webUsageByTrustIdentifier;
@property (nonatomic, readonly, copy) NSArray *webUsages;

// Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dataSetForItemType:(unsigned long long)arg1 trustIdentifier:(id)arg2 includeIndicatorImageName:(bool)arg3 useDarkColors:(bool)arg4;
- (double)activePickupDateIntervals;
- (id)appAndWebUsageDataSetWithDarkColors:(bool)arg1;
- (id)appAndWebUsages;
- (id)appUsageByStartOfDateInterval;
- (id)appUsages;
- (id)applicationUsageByStartOfDateIntervalByTrustIdentifier;
- (id)applicationUsageByTrustIdentifier;
- (id)categoryUsageByStartOfDateInterval;
- (id)categoryUsageByStartOfDateIntervalByTrustIdentifier;
- (id)categoryUsageByTrustIdentifier;
- (id)categoryUsageDataSet;
- (id)categoryUsages;
- (id)dataSetByUsageIdentifier;
- (id)dataSetWithUsageItem:(id)arg1;
- (id)dateIntervals;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstPickup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReportType:(unsigned long long)arg1 startDate:(id)arg2 lastUpdatedDate:(id)arg3 firstPickup:(id)arg4 usageItems:(id)arg5;
- (id)lastUpdatedDate;
- (unsigned long long)maxPickupDateIntervalIndex;
- (unsigned long long)maxPickups;
- (id)maxPickupsDateInterval;
- (double)maxScreenTime;
- (double)notificationDeltaFromHistoricalAverage;
- (double)notificationRate;
- (id)notifications;
- (id)notificationsByStartOfDateInterval;
- (id)notificationsByStartOfDateIntervalByTrustIdentifier;
- (id)notificationsByTrustIdentifier;
- (id)notificationsDataSet;
- (double)pickupDeltaFromHistoricalAverage;
- (double)pickupFrequency;
- (double)pickupRate;
- (id)pickups;
- (id)pickupsByStartOfDateInterval;
- (id)pickupsByStartOfDateIntervalByTrustIdentifier;
- (id)pickupsByTrustIdentifier;
- (id)pickupsDataSet;
- (id)reportDateInterval;
- (id)screenTimeByStartOfDateInterval;
- (double)screenTimeDeltaFromHistoricalAverage;
- (void)setDataSetByUsageIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)topUsageItemsWithMaxCount:(unsigned long long)arg1 type:(unsigned long long)arg2 includeAggregateItem:(bool)arg3 nonAggregateItems:(id*)arg4 darkColors:(bool)arg5;
- (double)totalAppUsage;
- (double)totalCategoryUsage;
- (unsigned long long)totalNotifications;
- (unsigned long long)totalPickups;
- (double)totalScreenTime;
- (double)totalWebUsage;
- (unsigned long long)type;
- (id)webUsageByStartOfDateInterval;
- (id)webUsageByStartOfDateIntervalByTrustIdentifier;
- (id)webUsageByTrustIdentifier;
- (id)webUsages;

// Image: /System/Library/AccessibilityBundles/ScreenTimeSettingsUI.axbundle/ScreenTimeSettingsUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityStringForDate:(id)arg1 timePeriod:(unsigned long long)arg2;
- (unsigned long long)_axTimePeriodForDescription;
- (id)_countedDataSetForItemType:(unsigned long long)arg1 trustIdentifier:(id)arg2 includeIndicatorImageName:(bool)arg3;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 trustIdentifier:(id)arg2;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 useDarkColors:(bool)arg2;
- (id)screenTimeDataSet;

@end