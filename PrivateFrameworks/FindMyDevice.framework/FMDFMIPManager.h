/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDFMIPManager : NSObject {
    NSURL * _managedLostModeFileURL;
    NSURL * _needsLocateAckLostModeFileURL;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSURL *managedLostModeFileURL;
@property (nonatomic, retain) NSURL *needsLocateAckLostModeFileURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkLostModeInSharedContainer;
- (void)_disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_forceFMWUpgradeAlertWithCompletion:(id /* block */)arg1;
- (void)_getAccessoriesWithFilter:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_isRunningAsMobileUser;
- (unsigned long long)_managedLostModeType;
- (unsigned long long)_needsAckLostModeType;
- (id)_postWipePrefPath;
- (bool)_quickFetchFMIPEnabledstate;
- (void)_stopAlarm;
- (void)_updateManagedLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)activationLockAuthInfoWithCompletion:(id /* block */)arg1;
- (void)activationLockInfoFromDeviceWithCompletion:(id /* block */)arg1;
- (void)activationLockInfoWithCompletion:(id /* block */)arg1;
- (void)activationLockVersionWithCompletion:(id /* block */)arg1;
- (void)addNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)audioAccessorySerialNumbersWithCompletion:(id /* block */)arg1;
- (void)clearData:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)clearMaskedAppleIDWithCompletion:(id /* block */)arg1;
- (void)clearOfflineFindingInfoWithCompletion:(id /* block */)arg1;
- (void)deviceActivationDidSucceed;
- (void)didChangeFMIPAccountInfo:(id)arg1;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (void)disableBiometricIDForLostModeWithCompletion:(id /* block */)arg1;
- (void)disableFMIPForAccount:(id)arg1 pairedDeviceWithUDID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2;
- (void)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)disableLostMode;
- (void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)enableActivationLockWithCompletion:(id /* block */)arg1;
- (id)enableFMIPInContext:(unsigned long long)arg1;
- (id)enableLostModeWithInfo:(id)arg1;
- (void)enableManagedLostModeWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAPNSTokenWithCompletion:(id /* block */)arg1;
- (void)fetchAccessoryConfigurations:(id /* block */)arg1;
- (void)fetchOfflineFindingInfoWithCompletion:(id /* block */)arg1;
- (id)fmipAccount;
- (void)fmipAccountWithCompletion:(id /* block */)arg1;
- (void)fmipStateWithCompletion:(id /* block */)arg1;
- (void)getAccessoriesWithCompletion:(id /* block */)arg1;
- (void)getConnectedAccessoriesDiscoveryIds:(id /* block */)arg1;
- (id)getManagedLostModeFileURL;
- (id)getNeedsLocateAckLostModeFileURL;
- (id)init;
- (void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (void)isActivationLockAllowedWithCompletion:(id /* block */)arg1;
- (void)isActivationLockEnabledWithCompletion:(id /* block */)arg1;
- (void)isActivationLockedWithCompletion:(id /* block */)arg1;
- (bool)isLostModeActive;
- (bool)isManagedLostModeActive;
- (bool)lockdownShouldDisableDevicePairing;
- (bool)lockdownShouldDisableDeviceRestore;
- (id)lostModeInfo;
- (bool)lostModeIsActive;
- (void)lowBatteryLocateEnabledWithCompletion:(id /* block */)arg1;
- (id)managedLostModeFileURL;
- (void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)needsLocateAckLostModeFileURL;
- (bool)needsLostModeExitAuth;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (void)pairingCheckWith:(id)arg1 completion:(id /* block */)arg2;
- (id)pathsToPreserveAcrossWipe;
- (void)playSoundWithMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)playSoundWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)registerDeviceForPairingLock:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAccessoryWithDiscoveryId:(id)arg1 completion:(id /* block */)arg2;
- (void)removeNotificationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)serialQueue;
- (void)setDailyLocateReportEnabled:(bool)arg1;
- (void)setLowBatteryLocateEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)setManagedLostModeFileURL:(id)arg1;
- (void)setNeedsLocateAckLostModeFileURL:(id)arg1;
- (void)setPhoneNumber:(id)arg1 toAccessoryWithDiscoveryId:(id)arg2 completion:(id /* block */)arg3;
- (void)setSerialQueue:(id)arg1;
- (void)showDailyLocateReport;
- (void)signatureHeadersWithData:(id)arg1 completion:(id /* block */)arg2;
- (void)soundStoppedForAccessoryIdentifier:(id)arg1;
- (void)startLocationMonitoring:(id /* block */)arg1;
- (void)startLocationMonitoringWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)startLocationMonitoringWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(id /* block */)arg5;
- (void)stopLocationMonitoring:(id /* block */)arg1;
- (void)stopLocationMonitoringWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)stopLocationMonitoringWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)stopSoundMessageWithCompletion:(id /* block */)arg1;
- (void)storeOfflineFindingInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMaskedAppleIDWith:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePairingLockInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)updatedConfigReceived:(id)arg1 completion:(id /* block */)arg2;
- (void)userDidAckManagedLostModeLocateWithCompletion:(id /* block */)arg1;
- (void)userNotifiedOfActivationLockForAllPairedDevices;
- (void)userNotifiedOfActivationLockForPairedDevices:(id)arg1;
- (void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end