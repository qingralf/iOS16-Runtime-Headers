/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAOnDiskGraphWorker : PHAWorker <PLPhotoAnalysisGraphServiceOnDiskProtocol>

+ (long long)applicationDataFolderIdentifier;
+ (bool)persistsState;
+ (short)workerType;

- (void)cooldown;
- (id)graphCurrentlyUnavailableError;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestOnDiskSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)reset;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)warmupWithProgressBlock:(id /* block */)arg1;

@end
