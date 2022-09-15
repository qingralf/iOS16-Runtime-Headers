/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
 */

@interface SUSUISoftwareUpdateManager : NSObject <SUNetworkObserver, SUSUISoftwareUpdateClientManagerDelegate> {
    SUManagerClient * _SUManager;
    NSString * _actionString;
    bool  _allowCellularOverride;
    SUDescriptor * _alternateUpdate;
    NSError * _alternateUpdateError;
    NSString * _alternateUpdateErrorDescription;
    bool  _anyScanInProgress;
    bool  _autoInstallArmedAndReady;
    bool  _autoUpdateScheduled;
    float  _batteryLevel;
    NSArray * _betaPrograms;
    bool  _bypassTermsAndConditions;
    bool  _clearingSpaceForDownload;
    bool  _clientIsBuddy;
    bool  _connectedToPowerSource;
    SDDevice * _currentSeedingDevice;
    <SUSUISoftwareUpdateManagerDelegate> * _delegate;
    SUDownload * _download;
    SUMutableDownloadMetadata * _downloadMetadata;
    SUDescriptor * _hiddenAlternateUpdate;
    SUDescriptor * _hiddenPreferredUpdate;
    bool  _hidingAlternateUpdate;
    bool  _hidingPreferredUpdate;
    UIViewController * _hostController;
    SUInstallPolicy * _installPolicy;
    bool  _isDelayingUpdates;
    bool  _isDeviceBetaEnrolled;
    bool  _manuallyStartedScan;
    int  _networkType;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    bool  _preferredDeletedForAlternate;
    SUDescriptor * _preferredUpdate;
    NSError * _preferredUpdateError;
    NSString * _preferredUpdateErrorDescription;
    double  _previousTimeRemaining;
    NSString * _progressString;
    bool  _readyToDownloadAlternate;
    bool  _readyToDownloadPreferred;
    bool  _readyToResume;
    bool  _runningInitialScan;
    RUIStyle * _serverFlowStyle;
    int  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    SUSUISoftwareUpdateClientManager * _suClient;
    bool  _suPathsRestricted;
    SUDescriptor * _update;
    SUSUIUpdateAgreementManager * _updateAgreementManager;
}

@property (nonatomic, readonly) SUManagerClient *SUManager;
@property (nonatomic, retain) NSString *actionString;
@property (nonatomic) bool allowCellularOverride;
@property (nonatomic, retain) SUDescriptor *alternateUpdate;
@property (nonatomic, readonly) NSError *alternateUpdateError;
@property (nonatomic, retain) NSString *alternateUpdateErrorDescription;
@property (nonatomic) bool autoInstallArmedAndReady;
@property (nonatomic, retain) NSArray *betaPrograms;
@property (nonatomic) bool bypassTermsAndConditions;
@property (nonatomic, readonly) bool clearingSpaceForDownload;
@property (nonatomic) bool clientIsBuddy;
@property (nonatomic, retain) SDDevice *currentSeedingDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUSUISoftwareUpdateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SUDownload *download;
@property (nonatomic, retain) SUMutableDownloadMetadata *downloadMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUDescriptor *hiddenAlternateUpdate;
@property (nonatomic, retain) SUDescriptor *hiddenPreferredUpdate;
@property (nonatomic, readonly) bool hidingAlternateUpdate;
@property (nonatomic, readonly) bool hidingPreferredUpdate;
@property (nonatomic) UIViewController *hostController;
@property (nonatomic, retain) SUInstallPolicy *installPolicy;
@property (nonatomic) bool isDelayingUpdates;
@property (nonatomic) bool isDeviceBetaEnrolled;
@property (nonatomic, readonly) bool preferredDeletedForAlternate;
@property (nonatomic, retain) SUDescriptor *preferredUpdate;
@property (nonatomic, readonly) NSError *preferredUpdateError;
@property (nonatomic, retain) NSString *preferredUpdateErrorDescription;
@property (nonatomic, readonly) NSString *prettyUpdateName;
@property (nonatomic, retain) NSString *progressString;
@property (nonatomic, retain) RUIStyle *serverFlowStyle;
@property (nonatomic) int state;
@property (nonatomic) bool suPathsRestricted;
@property (readonly) Class superclass;
@property (nonatomic, retain) SUDescriptor *update;

- (void).cxx_destruct;
- (id)SUManager;
- (bool)_SUDownloadPhaseIsQueued:(id)arg1;
- (void)_alertForDownloadConstraintsWithCompletion:(id /* block */)arg1;
- (void)_batteryLevelChanged:(id)arg1;
- (void)_batteryStateChanged:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)_notifyScanFailed:(id)arg1;
- (void)_reallyDownloadAndInstall:(unsigned long long)arg1 update:(id)arg2 AcceptingCellularFees:(int)arg3 completion:(id /* block */)arg4;
- (void)_reallyResumeDownloadAcceptingCellularFees:(int)arg1;
- (void)_setState:(int)arg1 preferredUpdateError:(id)arg2 alternateUpdateError:(id)arg3;
- (void)_updateDownloadProgressWithDownload:(id)arg1 stateFromDownload:(int*)arg2;
- (id)actionString;
- (bool)allowCellularOverride;
- (id)alternateUpdate;
- (id)alternateUpdateError;
- (id)alternateUpdateErrorDescription;
- (bool)autoInstallArmedAndReady;
- (bool)automaticDownloadEnabled:(bool*)arg1;
- (bool)automaticInstallSystemDataFilesStatusEnabled:(bool*)arg1;
- (bool)automaticUpdateEnabled:(bool*)arg1;
- (bool)automaticUpdatePreviousUserSpecifiedStatus:(bool*)arg1;
- (bool)automaticUpdateScheduled;
- (id)betaPrograms;
- (bool)bypassTermsAndConditions;
- (bool)canCancelAutoInstall;
- (void)cancelAutoInstall;
- (void)cancelOrPurgeIfNecessary:(id /* block */)arg1;
- (void)checkAndSetReadyToInstall;
- (void)checkAutoInstall;
- (void)clearPastScanResults;
- (bool)clearingSpaceForDownload;
- (bool)clientIsBuddy;
- (id)currentSeedingDevice;
- (void)dealloc;
- (id)delegate;
- (id)download;
- (void)downloadAlternateHidePreferred;
- (id)downloadMetadata;
- (id)eligibleRollback;
- (void)enrollInBetaUpdates;
- (bool)errorsAreEqual:(id)arg1 error2:(id)arg2 oldDescription:(id)arg3;
- (void)handleDownloadError:(id)arg1;
- (void)handleScanError:(id)arg1;
- (id)hiddenAlternateUpdate;
- (id)hiddenPreferredUpdate;
- (void)hideAlternateUpdate;
- (void)hidePreferredUpdate;
- (bool)hidingAlternateUpdate;
- (bool)hidingPreferredUpdate;
- (id)hostController;
- (id)humanReadableDescriptionForError:(id)arg1 enableButton:(bool*)arg2;
- (id)humanReadableDescriptionForError:(id)arg1 enableButton:(bool*)arg2 showAsButtonFooter:(bool*)arg3;
- (unsigned long long)ignorableConstraints;
- (id)initWithDelegate:(id)arg1 hostController:(id)arg2;
- (id)installPolicy;
- (bool)isDelayingUpdates;
- (bool)isDeviceBetaEnrolled;
- (bool)isRollingBack;
- (void)manager:(id)arg1 autoUpdateScheduleStateChanged:(bool)arg2 autoInstallOperation:(id)arg3;
- (void)manager:(id)arg1 clearingSpaceForDownload:(id)arg2 clearingSpace:(bool)arg3;
- (void)manager:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3;
- (void)manager:(id)arg1 downloadDidStart:(id)arg2;
- (void)manager:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)manager:(id)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg2;
- (void)manager:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 installDidFinish:(id)arg2;
- (void)manager:(id)arg1 installDidStart:(id)arg2;
- (void)manager:(id)arg1 rollingBackStateChanged:(bool)arg2 rollback:(id)arg3;
- (void)manager:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 results:(id)arg3 error:(id)arg4;
- (void)manager:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
- (Class)managerClientClass;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (bool)preferredDeletedForAlternate;
- (id)preferredUpdate;
- (id)preferredUpdateError;
- (id)preferredUpdateErrorDescription;
- (void)presentTermsIfNecessaryCompletion:(id /* block */)arg1;
- (void)presentTermsIfNecessaryForUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)prettyNameForUpdate:(id)arg1;
- (id)prettyUpdateName;
- (bool)previousUserSpecifiedSecurityResponseStatus:(bool*)arg1;
- (id)productVersionWithExtra;
- (id)progressString;
- (void)promptForDevicePasscodeForDescriptor:(id)arg1 unattendedInstall:(bool)arg2 completion:(id /* block */)arg3;
- (void)purgeCurrentDownloadWithHandler:(id /* block */)arg1;
- (bool)readyToDownload;
- (bool)readyToDownloadAlternateUpdate;
- (bool)readyToDownloadPreferredUpdate;
- (bool)readyToResume;
- (void)refreshErrors:(id)arg1 alternateError:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshState;
- (void)resumeDownload;
- (void)revealHiddenAlteranteUpdate;
- (void)revealHiddenPreferredUpdate;
- (void)runEntryScan:(bool)arg1;
- (void)scanFinishedWithUpdates:(id)arg1 error:(id)arg2;
- (void)scanForUpdateCompletion:(id /* block */)arg1;
- (void)scanForUpdatesCompletion:(id /* block */)arg1;
- (bool)securityResponseStatus:(bool*)arg1;
- (id)serverFlowStyle;
- (void)setActionString:(id)arg1;
- (void)setAllowCellularOverride:(bool)arg1;
- (void)setAlternateUpdate:(id)arg1;
- (void)setAlternateUpdateError:(id)arg1;
- (void)setAlternateUpdateErrorDescription:(id)arg1;
- (void)setAutoInstall:(id /* block */)arg1;
- (void)setAutoInstallArmedAndReady:(bool)arg1;
- (void)setAutomaticDownloadEnabled:(bool)arg1;
- (void)setAutomaticInstallSystemDataFilesStatusEnabled:(bool)arg1;
- (void)setAutomaticUpdateEnabled:(bool)arg1;
- (void)setBetaPrograms:(id)arg1;
- (void)setBypassTermsAndConditions:(bool)arg1;
- (void)setClearingSpaceForDownload:(bool)arg1;
- (void)setClientIsBuddy:(bool)arg1;
- (void)setCurrentSeedingDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownload:(id)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (void)setHiddenAlternateUpdate:(id)arg1;
- (void)setHiddenPreferredUpdate:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setInstallPolicy:(id)arg1;
- (void)setIsDelayingUpdates:(bool)arg1;
- (void)setIsDeviceBetaEnrolled:(bool)arg1;
- (void)setPreferredUpdate:(id)arg1;
- (void)setPreferredUpdateError:(id)arg1;
- (void)setPreferredUpdateErrorDescription:(id)arg1;
- (void)setPreviousUserSpecifiedAutomaticUpdateStatus:(bool)arg1;
- (void)setPreviousUserSpecifiedSecurityResponseStatus:(bool)arg1;
- (void)setProgressString:(id)arg1;
- (void)setSecurityResponseStatus:(bool)arg1;
- (void)setServerFlowStyle:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 withDownloadUpdateError:(id)arg2;
- (void)setSuPathsRestricted:(bool)arg1;
- (void)setUpdate:(id)arg1;
- (bool)shouldSetStateForInstallError:(id)arg1 outError:(id*)arg2 outState:(int*)arg3;
- (bool)shouldShowPreferredUpdateAsAlternate;
- (void)startDownloadAndInstall:(unsigned long long)arg1 update:(id)arg2 withHandler:(id /* block */)arg3;
- (void)startDownloadAndInstall:(unsigned long long)arg1 withHandler:(id /* block */)arg2;
- (void)startInstallWithHandler:(id /* block */)arg1;
- (void)startRollbackWithOptions:(id)arg1 withHandler:(id /* block */)arg2;
- (int)state;
- (bool)suPathsRestricted;
- (void)unenrollBetaUpdates;
- (id)update;
- (void)updateStateFromDownload:(id)arg1;
- (void)upgradeDownloadToUserInitiated;

@end