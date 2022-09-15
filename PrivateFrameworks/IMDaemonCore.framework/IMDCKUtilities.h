/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {
    FTDeviceSupport * _deviceSupport;
    bool  _didKeyRollPendingCheck;
    IMDefaults * _imDefaults;
    IMLockdownManager * _lockdownManager;
    IDSServerBag * _serverBag;
    IMDCKSyncState * _syncState;
    IMDSyncTelemetryReporter * _telemetryReporter;
    bool  _useDeprecatedApi;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceCharging, nonatomic, readonly) bool deviceCharging;
@property (getter=isDeviceOnWifi, nonatomic, readonly) bool deviceOnWifi;
@property (nonatomic, retain) FTDeviceSupport *deviceSupport;
@property (nonatomic) bool didKeyRollPendingCheck;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMDefaults *imDefaults;
@property (nonatomic, readonly) bool isInCloudKitDemoMode;
@property (nonatomic, readonly) bool isSyncingPaused;
@property (getter=isKeyRollPending, nonatomic, readonly) bool keyRollPending;
@property (nonatomic, retain) IMLockdownManager *lockdownManager;
@property (nonatomic, retain) IDSServerBag *serverBag;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IMDCKSyncState *syncState;
@property (nonatomic, retain) IMDSyncTelemetryReporter *telemetryReporter;
@property (nonatomic) bool useDeprecatedApi;

+ (id)_idsAccountController;
+ (void)addConditionChecks:(unsigned long long)arg1 toCriteria:(id)arg2;
+ (id)calculateAliasesForDefaults;
+ (void)calculateAndSaveAliasesToDefaults;
+ (id)im_AKSecurityLevelKey;
+ (id)logHandle;
+ (id)readAliasesFromDefaults;
+ (id)restoreFailuresDirectory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)PCSReportManateeStatus;
- (void)PCSReportManateeStatusAsync:(id /* block */)arg1 timeout:(double)arg2;
- (id)_accountManager;
- (bool)_accountNeedsRepairOverride;
- (id)_accountStore;
- (bool)_allowDestructiveMOCFeaturesBasedOnDSID;
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(bool)arg2;
- (id)_authenticationController;
- (bool)_checkEligibilityWithAccountInfo:(id)arg1;
- (bool)_checkIfEnabledByServerBagOrDefault:(id)arg1;
- (id)_createAccountError:(id)arg1;
- (bool)_deviceActive;
- (void)_fetchPrimaryAccountWithCompletion:(id /* block */)arg1;
- (id)_getKeepMessagesValue;
- (bool)_isInExitState;
- (bool)_isLogDumpAllowed;
- (bool)_isRunningInAutomation;
- (bool)_isSyncingPausedOverride;
- (long long)_mininimumServerBagClientValue;
- (bool)_mocFeatureEnabled;
- (id)_personIdFromAccount:(id)arg1;
- (id)_primaryiCloudAccount;
- (id)_primaryiCloudAccountAltDSID;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (bool)_serverAllowsCacheDelete;
- (bool)_serverAllowsRemovalFromBackUp;
- (bool)_serverAllowsSync;
- (void)_setEligibleToToggleMiCSwitch:(bool)arg1;
- (void)_setiCloudSettingsSwitchEnabled:(bool)arg1;
- (bool)_shouldDisplayPopUpForResettingKeepMessages;
- (bool)_shouldiCloudSwitchBeEnabled;
- (void)_showCKLogNotificationWithCompletion:(id /* block */)arg1;
- (id)_truthContainer;
- (id)_truthDatabase;
- (bool)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (id)backupController;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (bool)cacheDeleteEnabled;
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
- (void)checkiCloudQuota:(id /* block */)arg1;
- (id)ckStatisticCalculations;
- (bool)cloudKitSyncDownloadAssetsOnly;
- (bool)cloudKitSyncingEnabled;
- (id)deviceActiveString;
- (id)deviceConditions;
- (bool)deviceConditionsAllowPeriodicSync;
- (bool)deviceIsPhoneOrWatch;
- (id)deviceSupport;
- (bool)didKeyRollPendingCheck;
- (void)disableAllDevicesWithCompletion:(id /* block */)arg1;
- (void)downgradingFromHSA2AndDisablingMOC;
- (id)dsid;
- (void)eligibleForTruthZoneWithCompletion:(id /* block */)arg1;
- (bool)enableAttachmentMetricCollection;
- (void)enableMOCIfNeeded;
- (void)evalToggleiCloudSettingsSwitch;
- (id)exitManager;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
- (void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(id /* block */)arg1;
- (void)fetchCloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)fetchiCloudAccountPersonID:(id /* block */)arg1;
- (id)finalSyncStateFor:(long long)arg1;
- (id)findRootCauses:(id)arg1;
- (bool)iCloudAccountMatchesiMessageAccount;
- (id)imDefaults;
- (id)init;
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;
- (id)internalQueue;
- (bool)isCKPartialError:(id)arg1;
- (bool)isDeviceCharging;
- (bool)isDeviceOnWifi;
- (void)isFirstSyncWithActivity:(id)arg1 completion:(id /* block */)arg2;
- (bool)isInCloudKitDemoMode;
- (bool)isKeyRollPending;
- (bool)isLocalCachedSaltPresent;
- (bool)isSyncingPaused;
- (void)keyRollPendingStateDidChange;
- (id)lastDeviceBackUpDate;
- (id)lockdownManager;
- (void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(bool)arg2 didCompleteChatSync:(bool)arg3 didSucceedSyncingChats:(bool)arg4 didCompleteMessageSync:(bool)arg5 didSucceedSyncingMessages:(bool)arg6 didCompleteAttachmentSync:(bool)arg7 didSucceedSyncingAttachments:(bool)arg8 didCompleteRecoverableMessageSync:(bool)arg9 didSucceedSyncingRecoverableMessageSync:(bool)arg10 syncAttemptCount:(unsigned long long)arg11;
- (void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(bool)arg2 didStartSync:(bool)arg3 didFinishSync:(bool)arg4 didSucceedSyncing:(bool)arg5;
- (id)logCollectorAddress;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(bool)arg4 requirePreviousPrompt:(bool)arg5 willSendBlock:(id /* block */)arg6;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(bool)arg4 willSendBlock:(id /* block */)arg5;
- (bool)logDumpIsExpected;
- (bool)logDumpIsNecessaryAfterSync;
- (id)logHandle;
- (void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(bool)arg2 logDumpSucceeded:(bool)arg3 logDumpSendingCompleted:(bool)arg4 logDumpSendingSucceeded:(bool)arg5 reason:(id)arg6;
- (unsigned long long)messageDatabaseSize;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (long long)overrideNumberOfChatsToFetch;
- (long long)overrideNumberOfChatsToWrite;
- (void)postSyncStateToCloudKit:(id)arg1;
- (void)postSyncStateToRTC:(id)arg1 category:(long long)arg2 reportDictionary:(id)arg3;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(id /* block */)arg1;
- (bool)readServerBagBoolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (bool)removeFromBackUpAllowed;
- (void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(bool)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(bool)arg4 duration:(double)arg5;
- (void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 response:(long long)arg3 error:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3 sendToHandle:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;
- (void)reportZoneCreation:(id)arg1;
- (void)resetLastSyncDate;
- (bool)serverAllowsAnalyticDetailsSubmission;
- (bool)serverAllowsAnalyticSubmission;
- (bool)serverAllowsMetricSubmission;
- (id)serverBag;
- (void)setCloudKitSyncingEnabled:(bool)arg1;
- (void)setDeviceSupport:(id)arg1;
- (void)setDidKeyRollPendingCheck:(bool)arg1;
- (void)setImDefaults:(id)arg1;
- (void)setLockdownManager:(id)arg1;
- (void)setServerBag:(id)arg1;
- (void)setTelemetryReporter:(id)arg1;
- (void)setUseDeprecatedApi:(bool)arg1;
- (bool)shouldCollectDailyLogDump;
- (bool)shouldCollectDailyLogDumpForRestoreFailures;
- (bool)shouldForceArchivedMessagesSync;
- (bool)shouldKickOffWriteForSyncType:(long long)arg1;
- (bool)shouldLogDumpOnCloudKitError;
- (bool)shouldPresentTTROnCloudKitError;
- (bool)shouldRepairAccountWithAccountStatus:(long long)arg1 securityLevel:(unsigned long long)arg2;
- (bool)shouldReportToAnalytics;
- (bool)shouldReportToRTC;
- (bool)shouldUseDevContainer;
- (bool)shouldUseDevNickNameContainer;
- (bool)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;
- (id)simplifiedError:(id)arg1;
- (id)syncFailureMetricString:(id)arg1 isRecoverable:(bool)arg2 error:(id)arg3;
- (id)syncState;
- (void)syncStateWillUpdate:(id)arg1;
- (id)telemetryReporter;
- (bool)useDeprecatedApi;

@end