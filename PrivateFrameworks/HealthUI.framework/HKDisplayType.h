/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayType : NSObject <NSCopying> {
    bool  __wheelchairUser;
    NSAttributedString * _attributedSummaryAttribution;
    long long  _categoryIdentifier;
    NSString * _cautionaryTextKey;
    NSDictionary * _chartingPredicatesByTimeScope;
    HKDisplayTypeChartingRules * _chartingRules;
    bool  _chartsRelativeData;
    HKValueRange * _defaultAxisRangeOverride;
    NSPredicate * _defaultChartingPredicate;
    UIImage * _detailImage;
    NSString * _detailImageName;
    bool  _disallowsSourceReordering;
    NSString * _displayNameFitnessJrKey;
    NSString * _displayNameKey;
    long long  _displayTypeIdentifier;
    NSString * _embeddedDisplayNameKey;
    bool  _excludeFromDataTypeSearch;
    NSString * _healthKitLocalizationTableNameOverride;
    bool  _isCriticalForAutoscale;
    NSString * _keywordsNameKey;
    NSString * _labelDisplayNameKey;
    NSString * _listIconImageNameOverride;
    UIImage * _listIconOverride;
    HKObjectType * _objectType;
    NSDictionary * _portraitPresentationOptionOverrides;
    unsigned long long  _portraitPresentationOptions;
    long long  _preferredCalendarDayAlignment;
    double  _scalarValue;
    NSArray * _secondaryCategoryIdentifiers;
    NSString * _shortenedDisplayNameKey;
    bool  _shouldDisplayUnitStringOnYAxis;
    bool  _shouldUseSingleSecondaryValue;
    bool  _showAllDataHierarchically;
    bool  _showAppDataHierarchically;
    unsigned long long  _statisticsMergeStrategy;
    bool  _summaryAttributionForPrimaryProfileOnly;
    bool  _summaryAttributionHasLink;
    NSString * _summaryFitnessJrKey;
    NSString * _summaryForEnhancedFeatureNameKey;
    NSString * _summaryNameKey;
    NSString * _summaryPairedWatchNameKey;
    NSString * _titleEmbeddedDisplayNameKey;
    NSString * _unitChangeCautionaryTextKey;
    NSDictionary * _unitNameKeyOverrides;
    bool  _useSecondsWhenDisplayingDuration;
}

@property (getter=_isWheelchairUser, setter=_setWheelchairUser:) bool _wheelchairUser;
@property (nonatomic, readonly) bool allowsManualEntry;
@property (nonatomic, readonly) bool anyPortraitChartDefinition;
@property (nonatomic, readonly) NSAttributedString *attributedSummaryAttribution;
@property (nonatomic, readonly) bool canBecomeFavorite;
@property (nonatomic, readonly) long long categoryIdentifier;
@property (nonatomic, readonly) NSString *cautionaryText;
@property (nonatomic, readonly) HKDisplayTypeChartingRules *chartingRules;
@property (nonatomic, readonly) bool chartsRelativeData;
@property (nonatomic, retain) HKValueRange *defaultAxisRangeOverride;
@property (nonatomic, readonly) UIImage *detailImage;
@property (nonatomic, readonly) bool disallowsSourceReordering;
@property (nonatomic, readonly) HKDisplayCategory *displayCategory;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displayNameForFitnessJr;
@property (nonatomic, readonly, copy) NSString *displayNameKey;
@property (nonatomic, readonly) UIImage *displayTypeIcon;
@property (nonatomic, readonly) long long displayTypeIdentifier;
@property (nonatomic, readonly) NSString *embeddedDisplayName;
@property (nonatomic, readonly) bool excludeFromDataTypeSearch;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) bool isActivitySummary;
@property (nonatomic, readonly) bool isCharacteristic;
@property (nonatomic) bool isCriticalForAutoscale;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isElectrocardiogram;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) NSString *labelDisplayName;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) NSString *listIconImageName;
@property (nonatomic, readonly) NSString *localizationTableNameOverride;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) long long preferredCalendarDayAlignment;
@property (nonatomic, readonly) HKSampleType *recordSampleType;
@property (nonatomic, readonly) unsigned long long roundingMode;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) double scalarValue;
@property (nonatomic, readonly) NSArray *secondaryCategoryIdentifiers;
@property (nonatomic, readonly) NSArray *secondaryDisplayCategories;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic, readonly) NSString *shortenedDisplayName;
@property (nonatomic) bool shouldDisplayUnitStringOnYAxis;
@property (nonatomic, readonly) bool shouldUseSingleSecondaryValue;
@property (nonatomic, readonly) bool showAllDataHierarchically;
@property (nonatomic, readonly) bool showAppDataHierarchically;
@property (nonatomic, readonly) unsigned long long statisticsMergeStrategy;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) bool summaryAttributionForPrimaryProfileOnly;
@property (nonatomic, readonly) bool summaryAttributionHasLink;
@property (nonatomic, readonly) NSString *summaryForEnhancedFeature;
@property (nonatomic, readonly) NSString *summaryForFitnessJr;
@property (nonatomic, readonly) NSString *summaryForPairedWatch;
@property (nonatomic, readonly) bool supportsAssociatedSamples;
@property (nonatomic, readonly) NSString *titleEmbeddedDisplayName;
@property (nonatomic, readonly) NSString *unitChangeCautionaryText;
@property (nonatomic, readonly) UIImage *unitIcon;
@property (nonatomic, readonly) NSDictionary *unitNameKeyOverrides;
@property (nonatomic, readonly) bool unitPreferencesRequireChangeConfirmation;
@property (nonatomic, readonly) bool useSecondsWhenDisplayingDuration;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_enumeratedValueLabelsWithDisplayTypeIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_aFibBurdenDataSourceWithHealthStore:(id)arg1 quantityType:(id)arg2 dataSourceType:(long long)arg3 unitController:(id)arg4;
- (void)_applyChartingProperties:(id)arg1;
- (void)_applyScalarValue:(id)arg1;
- (void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg1;
- (void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (void)_assignAFibBurdenAxisForSeries:(id)arg1 standardAxisConfiguration:(id)arg2 externalAxisConfigurationOverrides:(id)arg3;
- (id)_audioLevelDataSourceForTypeIdentfier:(id)arg1 withHealthStore:(id)arg2 attenuatesExposureData:(bool)arg3 unitController:(id)arg4;
- (id)_audioLevelDataSourceForTypeIdentifier:(id)arg1 withHealthStore:(id)arg2 unitController:(id)arg3;
- (id)_bloodPressureDataSourceWithHealthStore:(id)arg1;
- (id /* block */)_bloodPressureUserInfoBlock;
- (id)_countDataSourceWithHealthStore:(id)arg1;
- (id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 unitController:(id)arg3 healthStore:(id)arg4;
- (id)_dataSourceForTimeScope:(long long)arg1 dataCacheController:(id)arg2;
- (id)_dataSourceForWorkoutsWithTimeScope:(long long)arg1 healthStore:(id)arg2;
- (id)_generateAFibBurdenLineSeriesWithColor:(id)arg1;
- (id)_generateBarSeriesWithFillStyle:(id)arg1;
- (id)_generateBloodPressureSeriesWithColor:(id)arg1;
- (id)_generateGraphSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 standardAxisConfiguration:(id)arg4 externalAxisConfigurationOverrides:(id)arg5 chartSizeClass:(long long)arg6;
- (id)_generateHandwashingBarSeriesWithDisplayCategory:(id)arg1;
- (id)_generateInsulinBarSeriesWithDisplayCategory;
- (id)_generateJulianIndexedSevenDayQuantitySeriesWithColor:(id)arg1;
- (id)_generateLevelCategorySeriesWithColor:(id)arg1 numericAxisConfigurationOverrides:(id)arg2;
- (id)_generateMinMaxSeriesWithColor:(id)arg1 opacity:(double)arg2 unselectedPointStyle:(long long)arg3 selectedPointStyle:(long long)arg4;
- (id)_generateRelativeLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2 valueAxisAnnotationFormatter:(id)arg3 chartSizeClass:(long long)arg4;
- (id)_generateSingleLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2 numericAxisConfigurationOverrides:(id)arg3;
- (id)_generateStackedSeriesWithColor:(id)arg1 numericAxisConfigurationOverrides:(id)arg2;
- (id)_handwashingDataSourceWithHealthStore:(id)arg1 timeScope:(long long)arg2;
- (id)_heartRateHistogramDataSourceWithHealthStore:(id)arg1 unitController:(id)arg2;
- (id)_insulinDataSourceWithHealthStore:(id)arg1;
- (bool)_isActivitySummary;
- (bool)_isNikeFuel;
- (bool)_isWheelchairUser;
- (id)_levelCategoryValuesDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayIdentifier:(long long)arg4;
- (id)_localizedStringWithKey:(id)arg1;
- (id /* block */)_minMaxUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2;
- (id)_oxygenSaturationHistogramDataSourceWithHealthStore:(id)arg1 unitController:(id)arg2;
- (id /* block */)_preprocessingHandlerForUnderwaterDepth:(id)arg1;
- (id)_rawLocalizedStringForKey:(id)arg1;
- (void)_setWheelchairUser:(bool)arg1;
- (id)_singleCenteredLineDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3 displayTypeIdentifier:(long long)arg4;
- (id /* block */)_singleValueUserInfoBlockWithUnitController:(id)arg1 displayType:(id)arg2 statisticsOption:(unsigned long long)arg3;
- (id)_sleepingWristTemperatureDataSourceForTimeScope:(long long)arg1 unitController:(id)arg2 healthStore:(id)arg3;
- (id)_stackedDataSourceForCategoryType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3;
- (id)_statFormatterItemOptionsForQuantityType:(id)arg1 timeScope:(long long)arg2;
- (bool)_supportsDayTimeScope;
- (bool)_supportsFiveYearTimeScope;
- (bool)_supportsHourTimeScope;
- (bool)_supportsMonthTimeScope;
- (bool)_supportsSixMonthTimeScope;
- (bool)_supportsWeekTimeScope;
- (bool)_supportsYearTimeScope;
- (id)_timePeriodDataSourceForSampleType:(id)arg1 timeScope:(long long)arg2 healthStore:(id)arg3;
- (id)_timePeriodDisplayPrefix;
- (id)_walkingMetricHistogramDataSourceForWalkingTypeIdentifier:(id)arg1 withHealthStore:(id)arg2 unitController:(id)arg3;
- (double)adjustedDoubleForClientDouble:(double)arg1;
- (double)adjustedDoubleForDaemonDouble:(double)arg1;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (bool)allowsManualEntry;
- (bool)anyPortraitChartDefinition;
- (id)attributedSummaryAttribution;
- (id)bloodGlucoseHistogramDataSourceWithHealthStore:(id)arg1 unitController:(id)arg2;
- (bool)canBecomeFavorite;
- (id)cardioFitnessDataSourceWithUnitController:(id)arg1 healthStore:(id)arg2;
- (long long)categoryIdentifier;
- (id)cautionaryText;
- (id)chartingPredicateForTimeScope:(long long)arg1;
- (id)chartingRules;
- (bool)chartsRelativeData;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (bool)contextItemShouldDisplayEventCountForDistributionStyle:(long long)arg1;
- (bool)contextItemShouldUseTightSpacingBetweenValueAndUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAxisRangeOverride;
- (id)defaultDataRange;
- (id)defaultValuePredicate;
- (id)description;
- (id)detailImage;
- (bool)disallowsSourceReordering;
- (id)displayCategory;
- (id)displayName;
- (id)displayNameForFitnessJr;
- (id)displayNameKey;
- (id)displayTypeIcon;
- (long long)displayTypeIdentifier;
- (id)embeddedDisplayName;
- (bool)excludeFromDataTypeSearch;
- (id)generateDistributionSeriesWithColor:(id)arg1 numberFormatter:(id)arg2 hasMinMaxOverlay:(bool)arg3;
- (id)generateDistributionSeriesWithColor:(id)arg1 numberFormatter:(id)arg2 lineWidth:(double)arg3 hasMinMaxOverlay:(bool)arg4;
- (id)generateLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2;
- (id)generateLineSeriesWithColor:(id)arg1 timeScope:(long long)arg2 valueAxisAnnotationFormatter:(id)arg3;
- (id)generateScatterPlotSeriesWithColor:(id)arg1;
- (unsigned long long)hash;
- (bool)hidden;
- (id)hk_axisScalingRuleForChartSizeClass:(long long)arg1 unitController:(id)arg2;
- (unsigned long long)hk_chartCalendarUnitForTimeScope:(long long)arg1;
- (id)hk_customSeriesPointIntervalComponentsForTimeScope:(long long)arg1;
- (id)hk_dashboardChartBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (id)hk_defaultChartAxisBoundStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (id)hk_dimensionForChartAxisWithUnitController:(id)arg1;
- (id)hk_enumeratedValueLabels;
- (id)hk_interactiveChartAxisStringFromValue:(id)arg1 defaultNumberFormatter:(id)arg2 unitController:(id)arg3;
- (unsigned long long)hk_interactiveChartOptions;
- (bool)hk_interactiveChartsDataSourceDependsOnTimeScope;
- (id)hk_interactiveChartsDataSourceForTimeScope:(long long)arg1 healthStore:(id)arg2 unitController:(id)arg3;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (bool)hk_isSupportedTimeScope:(long long)arg1;
- (id)hk_numberFormatterForUnit:(id)arg1;
- (id)hk_numberFormatterForUnit:(id)arg1 formattingContext:(long long)arg2;
- (long long)hk_stackedChartSectionsCountForTimeScope:(long long)arg1;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5 numericAxisConfigurationOverrides:(id)arg6;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 displayCategory:(id)arg2 unitController:(id)arg3 dataCacheController:(id)arg4 displayCategoryController:(id)arg5 numericAxisConfigurationOverrides:(id)arg6 chartSizeClass:(long long)arg7;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 graphSeriesDataSource:(id)arg2 displayCategory:(id)arg3 unitController:(id)arg4 dataCacheController:(id)arg5 displayCategoryController:(id)arg6;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 graphSeriesDataSource:(id)arg2 displayCategory:(id)arg3 unitController:(id)arg4 dataCacheController:(id)arg5 displayCategoryController:(id)arg6 numericAxisConfigurationOverrides:(id)arg7;
- (id)hk_standardSeriesForTimeScope:(long long)arg1 graphSeriesDataSource:(id)arg2 displayCategory:(id)arg3 unitController:(id)arg4 dataCacheController:(id)arg5 displayCategoryController:(id)arg6 numericAxisConfigurationOverrides:(id)arg7 chartSizeClass:(long long)arg8;
- (id /* block */)hk_startOfDayTransform;
- (bool)hk_supportsMinMaxOverlayForChartSizeClass:(long long)arg1;
- (id)hk_valueFormatterForUnit:(id)arg1;
- (id)hk_valueFormatterForUnit:(id)arg1 formattingContext:(long long)arg2;
- (id)hk_valueOrderForStackedCharts;
- (id)initFromDictionary:(id)arg1;
- (bool)isActivitySummary;
- (bool)isCharacteristic;
- (bool)isCriticalForAutoscale;
- (bool)isDocument;
- (bool)isElectrocardiogram;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)labelDisplayName;
- (id)listIcon;
- (id)listIconImageName;
- (id)listIconOverride;
- (id)localizationTableNameOverride;
- (id)objectType;
- (long long)preferredCalendarDayAlignment;
- (unsigned long long)presentationOptionsForTimeScope:(long long)arg1;
- (id)recordSampleType;
- (id)respiratoryRateHistogramDataSourceWithHealthStore:(id)arg1 unitController:(id)arg2;
- (unsigned long long)roundingMode;
- (id)sampleType;
- (double)scalarValue;
- (id)secondaryCategoryIdentifiers;
- (id)secondaryDisplayCategories;
- (void)setDefaultAxisRangeOverride:(id)arg1;
- (void)setIsCriticalForAutoscale:(bool)arg1;
- (void)setShouldDisplayUnitStringOnYAxis:(bool)arg1;
- (id)shareIcon;
- (id)shortenedDisplayName;
- (bool)shouldDisplayUnitStringOnYAxis;
- (bool)shouldUseSingleSecondaryValue;
- (bool)showAllDataHierarchically;
- (bool)showAppDataHierarchically;
- (unsigned long long)statisticsMergeStrategy;
- (id)summary;
- (bool)summaryAttributionForPrimaryProfileOnly;
- (bool)summaryAttributionHasLink;
- (id)summaryForEnhancedFeature;
- (id)summaryForFitnessJr;
- (id)summaryForPairedWatch;
- (bool)supportsAssociatedSamples;
- (id)titleEmbeddedDisplayName;
- (id)unattenuatedAudioLevelDataSourceForTypeIdentifier:(id)arg1 withHealthStore:(id)arg2 unitController:(id)arg3;
- (id)unitChangeCautionaryText;
- (id)unitDisplayNameKeyOverrideForUnit:(id)arg1 nameContext:(long long)arg2;
- (id)unitIcon;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;
- (id)unitNameKeyOverrides;
- (bool)unitPreferencesRequireChangeConfirmation;
- (bool)useSecondsWhenDisplayingDuration;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

- (Class)_wd_addDataViewControllerClass;
- (id)wd_addDataViewControllerWithHealthStore:(id)arg1 healthToolBox:(id)arg2 initialStartDate:(id)arg3;
- (id)wd_addDataViewControllerWithHealthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4;
- (id)wd_defaultValueForAddDataViewController;
- (id)wd_outOfRangeAlertDisplayName;
- (id)wd_valueOrderForAddDataViewController;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (long long)_heartRoomDisplayTypeContext:(long long)arg1;
- (Class)_wd_listViewControllerDataProviderClass:(bool)arg1;
- (id)wd_dataListViewControllerWithProfile:(id)arg1;
- (id)wd_dataListViewControllerWithProfile:(id)arg1 unitController:(id)arg2;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 isHierarchical:(bool)arg3;

@end
