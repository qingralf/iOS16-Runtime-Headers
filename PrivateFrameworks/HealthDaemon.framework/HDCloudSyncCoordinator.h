/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncCoordinator : NSObject <APSConnectionDelegate, HDCloudSyncManagerTaskQueueDelegate, HDDatabaseJournalMergeObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDXPCGatedActivity * _accountChangeGatedSyncActivity;
    NSMutableArray * _activeSyncCompletions;
    NSProgress * _activeSyncProgress;
    APSConnection * _apsConnection;
    HDDaemon * _daemon;
    NSString * _latestSyncEndLog;
    NSString * _latestSyncStartLog;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ACAccountStore * _lock_accountStore;
    bool  _lock_cloudSyncEnabled;
    bool  _lock_cloudSyncSupportEnabled;
    bool  _lock_cloudSyncSupportValueLoaded;
    bool  _lock_hasComputedCloudSyncEnabled;
    bool  _lock_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate * _lock_lastSuccessfulPullDate;
    NSDate * _lock_lastSuccessfulPushDate;
    double  _lock_lastTinkerDataDownloadTriggerTime;
    double  _lock_lastTinkerDataUploadTriggerTime;
    double  _lock_nextAvailableOperationStartTime;
    bool  _lock_requiresTinkerDownload;
    bool  _lock_requiresTinkerUpload;
    bool  _lock_syncInProgress;
    NSObject<OS_dispatch_source> * _periodicActivityCriteriaUpdateSource;
    HDPeriodicActivity * _primaryPeriodicActivity;
    NSMutableArray * _progressCompletionBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _secondaryPeriodicActivity;
    HDXPCGatedActivity * _sharedSummaryPullActivity;
    HDXPCGatedActivity * _sharedSummaryPushActivity;
    HDXPCGatedActivity * _subscriptionBasedSyncActivity;
    HDCloudSyncManagerTaskQueue * _syncTaskQueue;
    HDProfile * _unitTest_primaryProfileOverride;
    HDPeriodicActivity * _userRequestedBackupActivity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)arg1;

- (void).cxx_destruct;
- (bool)_unitTest_shouldSyncProfile:(id)arg1;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)arg1;
- (id)addCloudSyncProgressCompletion:(id /* block */)arg1;
- (void)addManagerTask:(id)arg1;
- (bool)canPerformCloudSyncWithError:(id*)arg1;
- (void)cloudSyncSupportStatusDidChange;
- (long long)compareTask:(id)arg1 withTask:(id)arg2 queue:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)currentSyncProgress;
- (void)daemonReady:(id)arg1;
- (void)databaseJournalMergeDidCompleteForProfile:(id)arg1;
- (void)dealloc;
- (void)delayNextCloudKitOperation:(double)arg1;
- (id)diagnosticDescription;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)arg1;
- (void)disableSyncLocallyWithCompletion:(id /* block */)arg1;
- (void)enableSyncLocallyWithCompletion:(id /* block */)arg1;
- (id)fetchCloudDescriptionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSyncStatusWithCompletion:(id /* block */)arg1;
- (id)initWithDaemon:(id)arg1;
- (bool)isDeviceInManateeUnavailableCFUState;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (double)nextCloudKitOperationDelay;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (id)queue;
- (id)resetAllProfilesWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)resetSubscriptionSyncBackoff;
- (void)scheduleSharedSummaryPushWithMaximumDelay:(double)arg1;
- (id)syncAllProfilesWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerSubscription:(id)arg1;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)arg1;
- (id)unitTest_periodicActivity;
- (void)unitTest_setPeriodicActivity:(id)arg1;
- (void)unitTest_setPrimaryProfileOverride:(id)arg1;

@end
