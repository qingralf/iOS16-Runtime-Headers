/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManager : NSObject {
    NSObject<MBManagerDelegate> * _delegate;
}

@property NSObject<MBManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_init;
- (bool)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6;
- (bool)airTrafficShouldCreateAppPlaceholdersWithError:(id*)arg1;
- (bool)allowiTunesBackup;
- (bool)archiveLogsTo:(id)arg1 error:(id*)arg2;
- (id)backgroundRestoreCellularAccessWithError:(id*)arg1;
- (id)backgroundRestoreInfo;
- (id)backupDeviceUDID;
- (id)backupDeviceUUID;
- (id)backupList;
- (unsigned long long)backupOnCellularSupportWithAccount:(id)arg1 error:(id*)arg2;
- (id)backupState;
- (void)cancel;
- (bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (bool)cancelDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2;
- (void)cancelRestore;
- (bool)clearAllPendingFollowUpsWithError:(id*)arg1;
- (void)clearRestoreSession;
- (bool)countCameraRollQuota;
- (bool)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)dateOfLastBackup;
- (id)dateOfLastBackupWithError:(id*)arg1;
- (id)dateOfNextScheduledBackup;
- (id)dateOfNextScheduledBackupWithError:(id*)arg1;
- (id)delegate;
- (bool)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (bool)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5;
- (id)disabledDomainInfos;
- (bool)discountCameraRollQuota;
- (bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (bool)exitMegaBackupMode:(id*)arg1;
- (bool)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6;
- (void)fetchAppBundleIDsForSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchBackgroundRestoreCellularAccessWithCompletion:(id /* block */)arg1;
- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)arg1;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)arg1;
- (id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (void)finishRestore;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(bool)arg1 error:(id*)arg2;
- (id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)inheritSnapshot:(id)arg1 fromDevice:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2 eventQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 personaIdentifier:(id)arg3;
- (void)insufficientFreeSpaceToRestore;
- (bool)isBackupEnabled;
- (bool)isBackupEnabledForDomainName:(id)arg1;
- (bool)isBackupOnCellularAllowedWithAccount:(id)arg1 error:(id*)arg2;
- (bool)isBackupOnCellularEnabledWithError:(id*)arg1;
- (bool)isInitialMegaBackupCompleted:(id*)arg1;
- (bool)isLocalBackupPasswordSetWithError:(id*)arg1;
- (bool)isManualBackupOnCellularAllowedWithAccount:(id)arg1 error:(id*)arg2;
- (id)journalForBackupUUID:(id)arg1 error:(id*)arg2;
- (id)journalLastModifiedForBackupUUID:(id)arg1 error:(id*)arg2;
- (bool)logPrebuddyFlowTelemetry:(long long)arg1 error:(id*)arg2;
- (bool)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3;
- (unsigned long long)nextBackupSize;
- (id)nextBackupSizeInfo;
- (id)personalPersonaIdentifier;
- (bool)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)postFollowUpForBackgroundRestoreProgress:(id)arg1 error:(id*)arg2;
- (bool)postFollowUpForDrySpellWithDuration:(double)arg1 firstBackup:(bool)arg2 error:(id*)arg3;
- (bool)postFollowUpForRestoreFailedWithDomainNames:(id)arg1 error:(id*)arg2;
- (bool)postFollowUpForRestoreFinishedWithError:(id*)arg1;
- (bool)postFollowUpForRestoreTimeoutWithError:(id*)arg1;
- (bool)prepareForBackgroundRestoreWithError:(id*)arg1;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (void)rebootDevice;
- (bool)recordRestoreFailure:(id)arg1 error:(id*)arg2;
- (bool)removeDomainName:(id)arg1 error:(id*)arg2;
- (bool)requestMegaBackupExpirationDate:(id)arg1 error:(id*)arg2;
- (id)reservedBackupSizeListWithError:(id*)arg1;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 error:(id*)arg3;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreBookWithPath:(id)arg1 error:(id*)arg2;
- (bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)restoreFileExistsWithPath:(id)arg1;
- (void)restoreFileWithPath:(id)arg1;
- (bool)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 error:(id*)arg4;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5;
- (bool)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5 progress:(id /* block */)arg6;
- (bool)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFilesWithPaths:(id)arg1 error:(id*)arg2;
- (id)restoreInfo;
- (bool)restorePreviousSettingsEnabledForMegaBackup:(id*)arg1;
- (id)restoreState;
- (id)restoreStateWithError:(id*)arg1;
- (bool)restoreSupportsBatching;
- (bool)resumeDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2;
- (void)saveBackgroundRestoreCellularAccess:(id)arg1 completion:(id /* block */)arg2;
- (void)saveBackupDomainsEnabledForMegaBackup:(id)arg1;
- (void)saveBackupEnabledForMegaBackup;
- (bool)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2;
- (void)saveSyncSettingsEnabledForMegaBackup:(id)arg1;
- (void)setAllowiTunesBackup:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1 forDomainName:(id)arg2;
- (bool)setBackupOnCellularEnabled:(bool)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setEntryPointForMegaBackupTelemetry:(long long)arg1 error:(id*)arg2;
- (bool)setMegaBackupTurnOnAllAppsSyncTelemetry:(bool)arg1 error:(id*)arg2;
- (bool)setMegaBackupTurnOniCloudBackupTelemetry:(bool)arg1 error:(id*)arg2;
- (bool)setPrebuddyUIDeltaTelemetry:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (void)setRestoreQualityOfService:(long long)arg1;
- (void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2;
- (void)setSupportsiTunes:(bool)arg1;
- (bool)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (void)startBackup;
- (bool)startBackupWithError:(id*)arg1;
- (bool)startBackupWithOptions:(id)arg1 error:(id*)arg2;
- (void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)startDeviceTransferWithTaskType:(long long)arg1 sessionInfo:(id)arg2 error:(id*)arg3;
- (void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)arg1;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)arg1;
- (void)startPreflightWithCompletionHandler:(id /* block */)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (bool)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)startRestoreForSnapshot:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (bool)startScanForBundleIDs:(id)arg1 error:(id*)arg2;
- (bool)startScanWithError:(id*)arg1;
- (void)syncBackupEnabled;
- (bool)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)unsetLocalBackupPasswordWithError:(id*)arg1;
- (bool)updateMegaBackupExpirationDate:(id)arg1 error:(id*)arg2;
- (bool)wasBackupEnabledForMegaBackup:(id*)arg1;

@end