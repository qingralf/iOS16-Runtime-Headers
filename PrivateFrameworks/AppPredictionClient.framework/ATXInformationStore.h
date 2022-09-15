/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXInformationStore : NSObject <_PASDatabaseMigrationProtocol> {
    NSString * _cachedSuggestionsPath;
    NSString * _databasePath;
    _PASSqliteDatabase * _db;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_configureDatabase;
- (id)_dateIntervalFromDismissStatement:(id)arg1;
- (bool)_handleCorruptionIfNeeded;
- (bool)_insertTimelineEntries:(id)arg1 forWidget:(id)arg2 storageLimit:(unsigned long long)arg3;
- (bool)_migrateDatabaseIfNeeded;
- (bool)_openDatabase;
- (id)_openSqliteDatabaseAtPath:(id)arg1;
- (bool)addAbuseControlOutcomeForSuggestion:(id)arg1 forTimestamp:(long long)arg2 outcome:(long long)arg3;
- (bool)addAbuseControlOutcomes:(id)arg1;
- (bool)addEngagementRecordForWidget:(id)arg1 date:(id)arg2 engagementType:(long long)arg3;
- (bool)addStackConfigStatistics:(id)arg1;
- (bool)appendDismissRecord:(id)arg1;
- (bool)atomicallyDeleteInfoSuggestions:(id)arg1 insertInfoSuggestions:(id)arg2;
- (bool)clearOldAbuseControlOutcomeData;
- (bool)clearOutdatedSuggestedWidgetEntries;
- (bool)clearOutdatedWidgetEngagements;
- (bool)clearOutdatedWidgetReloadEntries;
- (bool)clearWidgetRemovalHistoryOlderThan:(id)arg1;
- (void)close;
- (id)criterionOfInfoSuggestionWithIdentifier:(id)arg1;
- (id)databaseHandle;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithExtensionBundleId:(id)arg1;
- (id)dateIntervalsOfUserRemovalOfSuggestedWidgetWithIntent:(id)arg1;
- (void)dealloc;
- (bool)deleteAllInfoSuggestionsWithSourceIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deleteAllSuggestionsForSourceId:(id)arg1 excludingSuggestionId:(id)arg2;
- (bool)deleteExpiredProactiveStackRotations;
- (id)deleteExpiredSuggestions;
- (bool)deleteInfoSuggestion:(id)arg1;
- (bool)didMostRecentReloadFailForExtension:(id)arg1 kind:(id)arg2 intent:(id)arg3 cutoffDate:(id)arg4;
- (bool)didSuggestionReachDurationLimit:(id)arg1;
- (id)distinctScoresForWidget:(id)arg1 kind:(id)arg2;
- (id)earliestFutureSuggestionChangeDate;
- (id)engagementTimestampsForExtensionBundleId:(id)arg1 kind:(id)arg2 intent:(id)arg3 engagementType:(long long)arg4;
- (id)fetchAbuseControlOutcomesForSuggestion:(id)arg1 sinceDate:(id)arg2;
- (id)fetchDistinctScoreCountForWidgets;
- (id)fetchDistinctWidgetsIgnoringIntentSinceDate:(id)arg1;
- (id)fetchStackConfigStatisticsForWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4;
- (id)fetchTimelineEntriesForWidget:(id)arg1 sinceDate:(id)arg2;
- (id)fetchWidgetEngagementRecords;
- (id)fetchWidgetTapEngagementCountSinceStartDate:(id)arg1;
- (id)fetchWidgetTapEngagementsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)firstAppearDateOfSuggestedWidgetWithUniqueId:(id)arg1;
- (id)firstEngagementOfWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 sinceTimestamp:(id)arg4;
- (id)firstTimeAtWhichSuggestionPassedTimelineFilters:(id)arg1;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 cachedSuggestionsPath:(id)arg2;
- (bool)insertOrIgnoreProactiveStackRotationRecord:(id)arg1;
- (bool)insertTimelineEntries:(id)arg1 forWidget:(id)arg2;
- (id)latestInfoSuggestionRelevantNowForSourceId:(id)arg1;
- (id)latestUpdateDateForSourceId:(id)arg1;
- (id)migrations;
- (long long)mostRecentAbuseControlOutcomeForSuggestionId:(id)arg1;
- (id)mostRecentEngagementOfWidget:(id)arg1;
- (id)mostRecentEngagementOfWidget:(id)arg1 kind:(id)arg2 ofType:(long long)arg3;
- (id)mostRecentEngagementOfWidget:(id)arg1 ofType:(long long)arg2;
- (id)mostRecentRotationRecordForSuggestionIdentifier:(id)arg1;
- (id)mostRecentRotationRecordForWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 considerStalenessRotation:(bool)arg4 filterByClientModelId:(id)arg5;
- (id)mostRecentTimelineEntryWithScoreForWidget:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4;
- (id)mostRecentTimelineUpdateDateOfWidget:(id)arg1 kind:(id)arg2;
- (id)nextImportantDateAmongTimelineInducedProactiveStackRotationRecords;
- (unsigned long long)numberOfInfoSuggestionsForAppBundleIdentifier:(id)arg1;
- (unsigned long long)numberOfInfoSuggestionsForSourceId:(id)arg1;
- (unsigned long long)numberOfSuggestedWidgetsInPastDay;
- (unsigned long long)numberOfWidgetReloadForSuggestionInPastDay;
- (id)proactiveRotationsForWidgetInThePastDay:(id)arg1 kind:(id)arg2 intent:(id)arg3 filterByClientModelId:(id)arg4;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (id)readAllDismissRecords;
- (id)readAllInfoSuggestions;
- (id)readAllInfoSuggestionsWithSourceIdentifier:(id)arg1;
- (id)readCachedSuggestions;
- (id)readCurrentlyRelevantSuggestions;
- (id)recentRelevantTimelineEntriesOrderedByDescendingScoreForWidget:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4;
- (bool)recordSuggestedWidgetUniqueIdIfNotExist:(id)arg1;
- (bool)recordSuggestionPassedTimelineFiltersForTheFirstTime:(id)arg1;
- (bool)recordUserRemovalOfSuggestedWidget:(id)arg1 kind:(id)arg2 intent:(id)arg3 atDate:(id)arg4 duration:(double)arg5;
- (bool)recordWidgetReloadForSuggestion:(id)arg1 date:(id)arg2 readyForDisplay:(bool)arg3;
- (bool)rotationExistsForSuggestionWithId:(id)arg1 considerStalenessRotation:(bool)arg2;
- (id)upcomingDateThatTimelineScoreChangesToOrFromZeroForWidget:(id)arg1 kind:(id)arg2 familyMask:(unsigned long long)arg3 intent:(id)arg4;
- (bool)updateEndDateForInfoSuggestions:(id)arg1;
- (bool)updateMostRecentSignificantDwellOfWidget:(id)arg1 date:(id)arg2;
- (bool)updateMostRecentTapOfWidget:(id)arg1 date:(id)arg2;
- (id)widgetSuggestionRemovalRecordsForDiagnostics;
- (bool)writeCacheWithNewSuggestions:(id)arg1;
- (bool)writeInfoSuggestions:(id)arg1;

@end