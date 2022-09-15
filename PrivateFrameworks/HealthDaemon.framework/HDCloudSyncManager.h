/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDAssertionObserver, HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDAssertionManager * _assertionManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inProgressDownloadDirectoryLock;
    NSString * _inProgressDownloadDirectoryPath;
    long long  _inProgressSyncCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_lastDataUploadRequestCompletionDate;
    NSDate * _lock_lastDataUploadRequestStartDate;
    NSDate * _lock_lastSuccessfulPullDate;
    NSDate * _lock_lastSuccessfulPushDate;
    long long  _lock_uploadRequestStatus;
    HKObserverSet * _observers;
    HDCloudSyncOwnerIdentifierManager * _ownerIdentifierManager;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDCloudSyncSharedSummaryManager * _sharedSummaryManager;
    bool  _supportsRebase;
    id /* block */  _unitTest_assertionInvalidatedHandler;
}

@property (nonatomic, readonly) HDAssertionManager *assertionManager;
@property (readonly) long long bytesPerChangeRecordAssetThreshold;
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastSuccessfulPullDate;
@property (nonatomic, readonly) NSDate *lastSuccessfulPushDate;
@property (nonatomic, readonly) HDCloudSyncOwnerIdentifierManager *ownerIdentifierManager;
@property (readonly) HDAssertion *preparedDatabaseAccessibilityAssertion;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDCloudSyncSharedSummaryManager *sharedSummaryManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRebase;
@property (nonatomic, copy) id /* block */ unitTest_assertionInvalidatedHandler;

+ (void)_containerIdentifiersWithEncryptionSupportEnabled:(bool)arg1 accountManateeEnabled:(bool)arg2 internalSettingManateeEnabled:(bool)arg3 resultHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_containerWithIdentifier:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (void)_scheduleResetReceivedCloudSyncAnchorsAndRebaseForHFDRecovery;
- (void)acceptShare:(id)arg1 completion:(id /* block */)arg2;
- (void)accountDeviceToDeviceEncryptionAvailabilityStatusWithCompletion:(id /* block */)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)assertionManager;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)assetDownloadStagingManagerWithAssertion:(id)arg1;
- (long long)bytesPerChangeRecordAssetThreshold;
- (long long)bytesPerChangeRecordAssetThresholdHardLimit;
- (bool)canPerformCloudSyncWithError:(id*)arg1;
- (void)cloudSyncRepositoriesForClient:(id)arg1 completion:(id /* block */)arg2;
- (void)configureForShareSetupMetadata:(id)arg1 acceptedShares:(id)arg2 completion:(id /* block */)arg3;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)didCompleteSuccessfulPullOfUpdateWithDate:(id)arg1;
- (void)didCompleteSuccessfulPullWithDate:(id)arg1;
- (void)didCompleteSuccessfulPushWithDate:(id)arg1;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)arg1;
- (void)fetchCloudKitAccountInfoWithCompletion:(id /* block */)arg1;
- (id)fetchDescriptionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchServerPreferredPushEnvironmentWithCompletion:(id /* block */)arg1;
- (id)fetchShareParticipantsForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSyncStatusWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1;
- (id)lastPushForwardProgressDate;
- (id)lastSuccessfulPullDate;
- (id)lastSuccessfulPushDate;
- (id)leaveSharesWithCompletion:(id /* block */)arg1;
- (id)lookupParticipantWithIdentityLookUpInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)ownerIdentifierManager;
- (bool)persistRestoreCompletionDate:(id)arg1 withError:(id*)arg2;
- (void)prepareForPeriodicSync;
- (id)prepareForSharingWithCompletion:(id /* block */)arg1;
- (id)preparedDatabaseAccessibilityAssertion;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (id)queue;
- (id)removeAllParticipantsForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (id)removeParticipants:(id)arg1 fromSharesWithCompletion:(id /* block */)arg2;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDataUploadWithCompletion:(id /* block */)arg1;
- (id)resetWithContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)setShareOwnerParticipant:(id)arg1 error:(id*)arg2;
- (void)setUnitTest_assertionInvalidatedHandler:(id /* block */)arg1;
- (id)setupSharingToAccountWithIdentityLookupInfo:(id)arg1 requireExistingRelationship:(bool)arg2 requireZoneDeviceMode:(id)arg3 completion:(id /* block */)arg4;
- (id)shareOwnerParticipantWithError:(id*)arg1;
- (id)sharedSummaryManager;
- (void)subscribeToDataAvailableNotificationsWithCompletion:(id /* block */)arg1;
- (void)subscribeToDataUploadRequestsWithCompletion:(id /* block */)arg1;
- (bool)supportsRebase;
- (id)syncMedicalIDDataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5;
- (id)syncWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)unitTest_assertionInvalidatedHandler;
- (void)unitTest_setSupportsRebase:(bool)arg1;
- (void)updateErrorRequiringUserAction:(id)arg1;

@end