/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionServer : NSObject <NSXPCListenerDelegate, _ATXInspectionInterface> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addToDigestFeedbackHistogramForBundleId:(id)arg1 location:(id)arg2 feedback:(id)arg3 withReply:(id /* block */)arg4;
- (void)allHistogramsBySize:(id /* block */)arg1;
- (void)appAndActionHistoryClear:(id /* block */)arg1;
- (void)appHistoryActionWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)appHistoryAddAppIntentLaunch:(id)arg1 intent:(id)arg2 source:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id /* block */)arg5;
- (void)appHistoryAddNSUALaunch:(id)arg1 requiredString:(id)arg2 itemIdentifier:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryClearAppIntent:(id /* block */)arg1;
- (void)appHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(id /* block */)arg4;
- (void)appInstallHistoryClear:(id /* block */)arg1;
- (void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(id /* block */)arg3;
- (void)appInstallHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appInstallHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appIntentHistoryDonateINIntent:(id)arg1 intentType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appIntentHistoryMockIntentLaunch:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appLaunchDatesWithReply:(id /* block */)arg1;
- (void)appLaunchInformationWithReply:(id /* block */)arg1;
- (void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)blendedSuggestionsForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)buildAnchorModelTrainingDataset:(id /* block */)arg1;
- (void)categoriesWithShouldUseDefault:(bool)arg1 reply:(id /* block */)arg2;
- (void)categoryLaunchInformationWithReply:(id /* block */)arg1;
- (void)clearAllDataForStressTestWithReply:(id /* block */)arg1;
- (void)clearBlendingSuggestionsForClientModel:(long long)arg1 withReply:(id /* block */)arg2;
- (void)clearDigestFeedbackHistogramWithShouldResetBookmarks:(bool)arg1 reply:(id /* block */)arg2;
- (void)clearNotificationsWithReply:(id /* block */)arg1;
- (void)createAppPredictionLogs:(id /* block */)arg1;
- (void)donateSuggestion:(id)arg1 forClientModel:(long long)arg2 withReply:(id /* block */)arg3;
- (void)dumpNotificationJSONFromSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 inferMessages:(bool)arg4 reply:(id /* block */)arg5;
- (void)dumpPredictionTableForMMExpert:(id)arg1 reply:(id /* block */)arg2;
- (void)evaluateInfoSuggestionsWithCompletionHandler:(id /* block */)arg1;
- (void)feedbackClear:(id /* block */)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(id /* block */)arg3;
- (void)feedbackLaunchedWithConsumerSubType:(unsigned char)arg1 forBundleId:(id)arg2 rejected:(id)arg3 reply:(id /* block */)arg4;
- (void)fetchPosterDescriptorsWithReply:(id /* block */)arg1;
- (void)fetchSuggestionsForSourceId:(id)arg1 reply:(id /* block */)arg2;
- (void)forceMagicalMomentsAppPredictionForBundleId:(id)arg1 expert:(id)arg2 reply:(id /* block */)arg3;
- (void)forceNotificationAndSuggestionDbUpdate:(id /* block */)arg1;
- (void)generateDataForStressTestWithReply:(id /* block */)arg1;
- (void)generateSerializedAppGroupedNotificationDigestFromSource:(id)arg1 digestTimeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 inferMessages:(bool)arg5 reply:(id /* block */)arg6;
- (void)generateSerializedMissedNotificationBundleFromFileData:(id)arg1 modeString:(id)arg2 reply:(id /* block */)arg3;
- (void)generateSerializedMissedNotificationBundleFromSource:(id)arg1 modeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 inferMessages:(bool)arg5 reply:(id /* block */)arg6;
- (void)generateSerializedNotificationDigestFromFileData:(id)arg1 digestTimeString:(id)arg2 reply:(id /* block */)arg3;
- (void)generateSerializedNotificationDigestFromSource:(id)arg1 digestTimeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 inferMessages:(bool)arg5 reply:(id /* block */)arg6;
- (void)getActionLogs:(id /* block */)arg1;
- (void)getAppFeedbackData:(id /* block */)arg1;
- (void)getAppUsageDataFromStartDate:(id)arg1 reply:(id /* block */)arg2;
- (void)getCurrentLocationWithReply:(id /* block */)arg1;
- (void)getInfoPredictionsInString:(id /* block */)arg1;
- (void)getInfoSuggestionsInString:(id /* block */)arg1;
- (void)getNotificationLogs:(id /* block */)arg1;
- (void)getNotificationSettings:(id /* block */)arg1;
- (void)getNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)histogramsInMemory:(id /* block */)arg1;
- (void)histogramsInMemoryBySize:(id /* block */)arg1;
- (id)init;
- (void)inspectInferredActivitySessionStream:(id)arg1 fromTimestamp:(double)arg2 reply:(id /* block */)arg3;
- (void)inspectInferredActivityTransitionStream:(id)arg1 fromTimestamp:(double)arg2 reply:(id /* block */)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)nPlusOneStudyDryRunResultFilterByExtensionBundleId:(id)arg1 reply:(id /* block */)arg2;
- (void)performHomeScreenCoreAnalyticsDryRunWithCustomStartDate:(id)arg1 reply:(id /* block */)arg2;
- (void)predictAppsAndReturnInputsAndSubscores:(id /* block */)arg1;
- (void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 candidateActiontypes:(id)arg4 reply:(id /* block */)arg5;
- (void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)processAppDirectoryFeedbackWithReply:(id /* block */)arg1;
- (void)processHomeScreenFeedbackWithReply:(id /* block */)arg1;
- (void)processLockscreenFeedbackWithReply:(id /* block */)arg1;
- (void)processSpotlightActionFeedbackWithReply:(id /* block */)arg1;
- (void)processSpotlightAppFeedbackWithReply:(id /* block */)arg1;
- (void)promoteSuggestionsFromClientModel:(id)arg1 reply:(id /* block */)arg2;
- (void)rankAndReturnInfoPredictionsInString:(id /* block */)arg1;
- (void)refreshBlendingLayer:(id /* block */)arg1;
- (void)resetActionPredictions:(id /* block */)arg1;
- (void)resetNotificationsHistory:(id /* block */)arg1;
- (void)resetNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)retrainActionHistograms:(id /* block */)arg1;
- (void)retrainActionSlotDatabase:(id /* block */)arg1;
- (void)schedulePredictionsForAnchorModel:(id)arg1 anchorType:(id)arg2 reply:(id /* block */)arg3;
- (void)scheduledPredictionsForAnchorModelWithReply:(id /* block */)arg1;
- (void)setDigestFeedbackHistogramValueForBundleId:(id)arg1 location:(id)arg2 feedback:(id)arg3 value:(id)arg4 withReply:(id /* block */)arg5;
- (void)showDigestFeedbackHistogramForBundleId:(id)arg1 withReply:(id /* block */)arg2;
- (void)trainAnchorModel:(id /* block */)arg1;
- (void)trainMagicalMomentsAppPredictor:(id /* block */)arg1;
- (void)trainModeEntityModelsWithDeferTrainingWhenApplicable:(bool)arg1 reply:(id /* block */)arg2;
- (void)updateAppDirectoryCache:(id /* block */)arg1;
- (void)validPredictionsRightNowForAnchorModelWithReply:(id /* block */)arg1;
- (void)widgetBundleIdentifiersForAllInfoSuggestionsInString:(id /* block */)arg1;

@end