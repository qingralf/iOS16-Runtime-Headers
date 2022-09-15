/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

@interface SUCoreMSU : NSObject {
    NSObject<OS_os_transaction> * _applyUpdateTransaction;
    MSUUpdateBrainAssetLoader * _brainLoader;
    NSObject<OS_os_transaction> * _cancelPrepareTransaction;
    bool  _cancelingPrepare;
    NSObject<OS_dispatch_queue> * _clientDelegateCallbackQueue;
    NSString * _descriptionName;
    NSObject<OS_os_transaction> * _loadBrainTransaction;
    NSObject<OS_dispatch_queue> * _msuControlQueue;
    id  _msuDelegate;
    long long  _msuHandle;
    NSObject<OS_dispatch_queue> * _msuOperationQueue;
    float  _nextProgressThreshold;
    bool  _performingOperation;
    NSObject<OS_os_transaction> * _preflightDownloadSUTransaction;
    NSObject<OS_os_transaction> * _preflightFDRRecoveryTransaction;
    NSObject<OS_os_transaction> * _preflightPersonalizeTransaction;
    NSObject<OS_os_transaction> * _preflightPrerequisiteCheckTransaction;
    NSObject<OS_os_transaction> * _preflightWakeupTransaction;
    bool  _prepareProgressFinal;
    NSObject<OS_os_transaction> * _prepareUpdateTransaction;
    NSObject<OS_os_transaction> * _removePreparedTransaction;
    bool  _removingPrepared;
    NSObject<OS_os_transaction> * _resumeUpdateTransaction;
    SUCoreRollbackDescriptor * _rollbackDescriptor;
    NSObject<OS_os_transaction> * _rollbackUpdateTransaction;
    NSObject<OS_os_transaction> * _suspendUpdateTransaction;
    SUCoreDescriptor * _updateDescriptor;
    NSString * _updateUUID;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *applyUpdateTransaction;
@property (nonatomic, retain) MSUUpdateBrainAssetLoader *brainLoader;
@property (nonatomic, retain) NSObject<OS_os_transaction> *cancelPrepareTransaction;
@property (nonatomic) bool cancelingPrepare;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (nonatomic, retain) NSString *descriptionName;
@property (nonatomic, retain) NSObject<OS_os_transaction> *loadBrainTransaction;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *msuControlQueue;
@property (nonatomic, readonly) id msuDelegate;
@property (nonatomic) long long msuHandle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *msuOperationQueue;
@property (nonatomic) float nextProgressThreshold;
@property (nonatomic) bool performingOperation;
@property (nonatomic, retain) NSObject<OS_os_transaction> *preflightDownloadSUTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *preflightFDRRecoveryTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *preflightPersonalizeTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *preflightPrerequisiteCheckTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *preflightWakeupTransaction;
@property (nonatomic) bool prepareProgressFinal;
@property (nonatomic, retain) NSObject<OS_os_transaction> *prepareUpdateTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *removePreparedTransaction;
@property (nonatomic) bool removingPrepared;
@property (nonatomic, retain) NSObject<OS_os_transaction> *resumeUpdateTransaction;
@property (nonatomic, retain) SUCoreRollbackDescriptor *rollbackDescriptor;
@property (nonatomic, retain) NSObject<OS_os_transaction> *rollbackUpdateTransaction;
@property (nonatomic, retain) NSObject<OS_os_transaction> *suspendUpdateTransaction;
@property (nonatomic, retain) SUCoreDescriptor *updateDescriptor;
@property (nonatomic, retain) NSString *updateUUID;

+ (id)commitStash:(id)arg1;

- (void).cxx_destruct;
- (void)_addRemoteServerAccessControlToMSUOptions:(id)arg1 usingPolicy:(id)arg2;
- (void)_addUpdateMetricsEventFieldsToMSUOptions:(id)arg1 usingPolicy:(id)arg2 descriptor:(id)arg3;
- (void)_addUpdateMetricsEventFieldsToMSURollbackOptions:(id)arg1 usingPolicy:(id)arg2 rollbackDescriptor:(id)arg3;
- (id)_newMSUOptionsUsingPolicy:(id)arg1 descriptor:(id)arg2 baseOptions:(id)arg3;
- (id)_newMSURollbackOptionsUsingPolicy:(id)arg1 rollbackDescriptor:(id)arg2 baseOptions:(id)arg3 additionalOptions:(id)arg4;
- (id)_newPreflightOptionsUsingPolicy:(id)arg1 subPolicyClass:(Class)arg2 descriptor:(id)arg3 baseOptions:(id)arg4 additionalOptions:(id)arg5;
- (id)_newPrepareOptionsUsingPolicy:(id)arg1 descriptor:(id)arg2;
- (id)_newRollbackPrepareOptionsUsingPolicy:(id)arg1 rollbackDescriptor:(id)arg2;
- (void)_operationApplyUpdate:(id)arg1;
- (void)_operationLoadBrain:(id)arg1;
- (void)_operationPreflightFDRRecovery:(id)arg1;
- (void)_operationPreflightPersonalize:(id)arg1;
- (void)_operationPreflightPrerequisiteCheck:(id)arg1;
- (void)_operationPreflightSUDownload:(id)arg1;
- (void)_operationPreflightWakeup:(id)arg1;
- (void)_operationPrepareUpdate:(id)arg1;
- (void)_operationResumeUpdate:(id)arg1;
- (void)_operationRollbackUpdateApply:(id)arg1;
- (void)_operationRollbackUpdatePrepare:(id)arg1;
- (void)_operationRollbackUpdateResume:(id)arg1;
- (void)_operationRollbackUpdateSuspend:(id)arg1;
- (void)_operationSuspendUpdate;
- (void)_removePrepared;
- (void)_reportAnomaly:(id)arg1;
- (void)_reportApplied;
- (void)_reportApplyFailed:(id)arg1;
- (void)_reportBrainLoadFailed:(id)arg1;
- (void)_reportBrainLoadProgress:(id)arg1;
- (void)_reportBrainLoadStalled:(id)arg1;
- (void)_reportBrainLoaded:(id)arg1;
- (void)_reportFDRRecoveryPreflightFailed:(id)arg1;
- (void)_reportFDRRecoveryPreflighted;
- (void)_reportPersonalizePreflightFailed:(id)arg1;
- (void)_reportPersonalizePreflighted;
- (void)_reportPrepareFailed:(id)arg1;
- (void)_reportPrepareProgress:(id)arg1;
- (void)_reportPrepared:(id)arg1;
- (void)_reportPrerequisiteCheckPreflightFailed:(id)arg1;
- (void)_reportPrerequisiteCheckPreflighted;
- (void)_reportRemoveFailed:(id)arg1;
- (void)_reportRemoved;
- (void)_reportResumeFailed:(id)arg1;
- (void)_reportResumed;
- (void)_reportRollbackApplyFailed:(id)arg1;
- (void)_reportRollbackApplySuccess;
- (void)_reportRollbackFailed:(id)arg1;
- (void)_reportRollbackPrepareSuccess;
- (void)_reportRollbackResumeSuccess;
- (void)_reportRollbackSuspendSuccess;
- (void)_reportSUDownloadPreflightFailed:(id)arg1;
- (void)_reportSUDownloadPreflighted;
- (void)_reportSuspendFailed:(id)arg1;
- (void)_reportSuspended;
- (void)_reportWakeupPreflightFailed:(id)arg1;
- (void)_reportWakeupPreflighted;
- (void)_trackMSUAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3;
- (void)_trackMSUAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 underlying:(id)arg4;
- (void)_trackMSUBegin:(id)arg1;
- (void)_trackMSUEnd:(id)arg1;
- (void)_trackMSUEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
- (void)_trackMSUOptions:(id)arg1 optionsName:(id)arg2 withMSUOptions:(id)arg3;
- (void)applyUpdate:(id)arg1;
- (id)applyUpdateTransaction;
- (void)assignDescriptor:(id)arg1 updateUUID:(id)arg2;
- (void)assignRollbackDescriptor:(id)arg1 updateUUID:(id)arg2;
- (id)brainLoader;
- (void)cancelPrepare;
- (id)cancelPrepareTransaction;
- (bool)cancelingPrepare;
- (id)clientDelegateCallbackQueue;
- (id)description;
- (id)descriptionName;
- (id)doNotPatchList;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 withCallbackQueue:(id)arg2;
- (void)loadBrain:(id)arg1;
- (void)loadBrainProgress:(id)arg1 error:(id)arg2;
- (id)loadBrainTransaction;
- (id)msuControlQueue;
- (id)msuDelegate;
- (long long)msuHandle;
- (id)msuOperationQueue;
- (float)nextProgressThreshold;
- (bool)performingOperation;
- (void)preflightDownloadSU:(id)arg1;
- (id)preflightDownloadSUTransaction;
- (void)preflightFDRRecovery:(id)arg1;
- (id)preflightFDRRecoveryTransaction;
- (void)preflightPersonalize:(id)arg1;
- (id)preflightPersonalizeTransaction;
- (void)preflightPrerequisiteCheck:(id)arg1;
- (id)preflightPrerequisiteCheckTransaction;
- (void)preflightWakeup:(id)arg1;
- (id)preflightWakeupTransaction;
- (int)prepareProgress:(struct __CFDictionary { }*)arg1;
- (bool)prepareProgressFinal;
- (void)prepareUpdate:(id)arg1;
- (id)prepareUpdateTransaction;
- (void)removePrepared;
- (id)removePreparedTransaction;
- (bool)removingPrepared;
- (void)resumeUpdate;
- (void)resumeUpdate:(id)arg1;
- (id)resumeUpdateTransaction;
- (id)rollbackDescriptor;
- (void)rollbackUpdateApply:(id)arg1;
- (void)rollbackUpdatePrepare:(id)arg1;
- (void)rollbackUpdateResume:(id)arg1;
- (void)rollbackUpdateSuspend:(id)arg1;
- (id)rollbackUpdateTransaction;
- (void)setApplyUpdateTransaction:(id)arg1;
- (void)setBrainLoader:(id)arg1;
- (void)setCancelPrepareTransaction:(id)arg1;
- (void)setCancelingPrepare:(bool)arg1;
- (void)setDescriptionName:(id)arg1;
- (void)setLoadBrainTransaction:(id)arg1;
- (void)setMsuHandle:(long long)arg1;
- (void)setNextProgressThreshold:(float)arg1;
- (void)setPerformingOperation:(bool)arg1;
- (void)setPreflightDownloadSUTransaction:(id)arg1;
- (void)setPreflightFDRRecoveryTransaction:(id)arg1;
- (void)setPreflightPersonalizeTransaction:(id)arg1;
- (void)setPreflightPrerequisiteCheckTransaction:(id)arg1;
- (void)setPreflightWakeupTransaction:(id)arg1;
- (void)setPrepareProgressFinal:(bool)arg1;
- (void)setPrepareUpdateTransaction:(id)arg1;
- (void)setRemovePreparedTransaction:(id)arg1;
- (void)setRemovingPrepared:(bool)arg1;
- (void)setResumeUpdateTransaction:(id)arg1;
- (void)setRollbackDescriptor:(id)arg1;
- (void)setRollbackUpdateTransaction:(id)arg1;
- (void)setSuspendUpdateTransaction:(id)arg1;
- (void)setUpdateDescriptor:(id)arg1;
- (void)setUpdateUUID:(id)arg1;
- (void)suspendUpdate;
- (id)suspendUpdateTransaction;
- (id)updateDescriptor;
- (void)updatePrepareOptions:(id)arg1 withPolicy:(id)arg2;
- (id)updateUUID;

@end