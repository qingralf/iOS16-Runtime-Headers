/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIMaintenanceTask : TRIBaseTask <TRIMetricsProviding, TRITask> {
    NSObject<OS_dispatch_queue> * _channelCleanupQueue;
    _PASLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) int taskType;

+ (id)parseFromData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)task;

- (void).cxx_destruct;
- (id)_asPersistedTask;
- (bool)_cleanupLocalTempStorageWithPaths:(id)arg1;
- (bool)_cleanupTreatmentWithTreatmentId:(id)arg1 paths:(id)arg2;
- (bool)_cleanupUnusedContentWithContext:(id)arg1 nextTasks:(id)arg2;
- (void)_handleExpiredExperimentsWithExperimentDatabase:(id)arg1 nextTasks:(id)arg2;
- (void)_handleOrphanedNamespacesWithNamespaceDatabase:(id)arg1 nextTasks:(id)arg2;
- (void)_reportStorageUsageUsingContext:(id)arg1;
- (id)_roundNumber:(id)arg1;
- (void)_synchronizePushService:(id)arg1 usingRolloutDatabase:(id)arg2 experimentDatabase:(id)arg3;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)serialize;
- (int)taskType;
- (id)trialSystemTelemetry;

@end