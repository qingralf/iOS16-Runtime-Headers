/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIFetchFactorPackSetTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    TRITaskCapabilityModifier * _capabilityModifier;
    TRIRolloutDeployment * _deployment;
    NSString<TRIFactorPackSetId> * _factorPackSetId;
    NSDictionary * _factorRecordsByAssetId;
    _PASLock * _guardedDownloadableRecord;
    TRIRolloutTaskSupport * _support;
    <TRITaskAttributing> * _taskAttribution;
    int  retryCount;
    bool  wasDeferred;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, readonly) TRIRolloutDeployment *deployment;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;
@property bool wasDeferred;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskWithFactorPackSetId:(id)arg1 taskAttribution:(id)arg2 rolloutDeployment:(id)arg3 capabilityModifier:(id)arg4;

- (void).cxx_destruct;
- (id)_aliasesInFactorPack:(id)arg1 context:(id)arg2;
- (id)_asPersistedTask;
- (bool)_downloadAndSaveCKAssetsWithMetadata:(id)arg1 artifactProvider:(id)arg2 options:(id)arg3 downloadNotificationKey:(id)arg4 context:(id)arg5 assetsDownloadSize:(unsigned long long*)arg6 errorResult:(id*)arg7 fetchError:(id*)arg8;
- (bool)_downloadAndSaveMAAssets:(id)arg1 options:(id)arg2 downloadNotificationKey:(id)arg3 context:(id)arg4 assetsDownloadSize:(unsigned long long*)arg5 errorResult:(id*)arg6 fetchError:(id*)arg7;
- (id)_downloadSetArtifactWithProvider:(id)arg1 downloadOptions:(id)arg2 downloadNotificationKey:(id)arg3 downloadSize:(unsigned long long*)arg4 errorResult:(id*)arg5 setArtifactFetchError:(id*)arg6;
- (void)_logDirectoryTreeDeltaResult:(id)arg1 patchedAssetsCount:(unsigned long long)arg2 totalCandidateAssetsCount:(unsigned long long)arg3 diffableAssetsDownloadSize:(unsigned long long)arg4 client:(id)arg5;
- (void)_logOnDemandFactor:(id)arg1 metricName:(id)arg2 namespaceName:(id)arg3 client:(id)arg4 error:(id)arg5;
- (void)_removeDownloadableRecord:(id)arg1;
- (id)_requiredAssetsForFactorPackSet:(id)arg1 context:(id)arg2;
- (bool)_saveFactorPackSet:(id)arg1 requiredAssetMap:(id)arg2 context:(id)arg3;
- (id)_subscribedOnDemandFactorsForAssets:(id)arg1 factorPackSet:(id)arg2 context:(id)arg3;
- (id)_uniqueUninstalledAssets:(id)arg1;
- (id)deployment;
- (id)description;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFactorPackSetId:(id)arg1 taskAttribution:(id)arg2 rolloutDeployment:(id)arg3 capabilityModifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (unsigned long long)requiredCapabilities;
- (int)retryCount;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (id)tags;
- (int)taskType;
- (id)trialSystemTelemetry;
- (bool)wasDeferred;

@end