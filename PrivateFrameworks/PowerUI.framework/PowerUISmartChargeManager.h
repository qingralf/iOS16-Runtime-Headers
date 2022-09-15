/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUISmartChargeManager : NSObject <ACCConnectionInfoDelegateProtocol, NSXPCListenerDelegate, PowerUINotificationManagerClient, PowerUISignalMonitorDelegate, PowerUISmartChargeManaging, PowerUISmartChargeManagingPrivate> {
    bool  _OBCReengagementEvaluated;
    NSDate * __fullChargeDeadline;
    bool  __hasLegitimateUsage;
    id /* block */  _afterBatteryCallback;
    PowerUIBatteryMitigationManager * _batteryMitigationManager;
    NSObject<OS_xpc_object> * _bdcConnection;
    id /* block */  _beforeBatteryCallback;
    PowerUIChargingController * _chargingController;
    unsigned long long  _checkpoint;
    _CDContextualKeyPath * _checkpointKP;
    ACCConnectionInfo * _connectionInfoProvider;
    <_CDLocalContext> * _context;
    NSString * _currentChargePackInductiveConnectionUUID;
    NSString * _currentChargePackNFCConnectionUUID;
    unsigned long long  _currentState;
    long long  _deadlineSignalID;
    NSString * _defaultsDomain;
    NSDate * _disabledUntilDate;
    double  _empiricalTimeToFullChargeDurationMinutes;
    bool  _enabled;
    bool  _encounteredTLCDuringTopOff;
    NSDate * _engagementTimeOverride;
    NSNumber * _engagementsLastMonthBucket;
    NSDate * _fullChargeDeadlineOverride;
    bool  _isChargePackConnected;
    bool  _isDesktopDevice;
    <_DKKnowledgeQuerying><_DKKnowledgeSaving> * _knowledgeStore;
    int  _lastBatteryLevel;
    bool  _lastChargerWasWireless;
    NSDate * _lastComputedSignalDeadline;
    NSDate * _lastDesktopModeChangeDate;
    int  _lastFullyCharged;
    NSDate * _lastInterruptedTime;
    NSNumber * _lastNonEngagementSignalID;
    int  _lastPluginStatus;
    NSNumber * _lastReportedNumberOfPluginEvents;
    NSXPCListener * _listener;
    NSObject<OS_os_log> * _log;
    unsigned long long  _mcmCurrentState;
    NSObject<OS_dispatch_source> * _mcmFidgetMitigationTimer;
    bool  _mcmForbidsCharging;
    NSObject<OS_os_log> * _mcmLog;
    NSNumber * _medianPluginLength;
    PowerUIMLTwoStageModelPredictor * _modelTwoStagePredictor;
    NSArray * _monitors;
    NSDistributedNotificationCenter * _notificationCenter;
    unsigned long long  _numberOfTimesMCMNotificationWasDisplayed;
    bool  _overrideAllSignals;
    NSDictionary * _powerLogStatus;
    int  _powerlogToken;
    unsigned long long  _predictorType;
    NSDate * _previousDecisionMakerDate;
    long long  _previousDecisionMakerID;
    NSDictionary * _previousPowerLogStatus;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _remoteOBCEngaged;
    NSDate * _repeatEngagementOverrideEndDate;
    unsigned int  _service;
    NSDictionary * _signalDeadline;
    bool  _signalsIgnored;
    bool  _temporarilyDisabled;
    NSObject<OS_dispatch_source> * _timer;
    PowerUITrialManager * _trialManager;
    NSDate * _uiDeadline;
    PowerUINotificationManager * _unManager;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
}

@property (nonatomic) bool OBCReengagementEvaluated;
@property (nonatomic, retain) NSDate *_fullChargeDeadline;
@property (nonatomic) bool _hasLegitimateUsage;
@property (nonatomic, copy) id /* block */ afterBatteryCallback;
@property (nonatomic, retain) PowerUIBatteryMitigationManager *batteryMitigationManager;
@property (nonatomic, retain) NSObject<OS_xpc_object> *bdcConnection;
@property (nonatomic, copy) id /* block */ beforeBatteryCallback;
@property (nonatomic, retain) PowerUIChargingController *chargingController;
@property (nonatomic) unsigned long long checkpoint;
@property (nonatomic, retain) _CDContextualKeyPath *checkpointKP;
@property (nonatomic, retain) ACCConnectionInfo *connectionInfoProvider;
@property (nonatomic, retain) <_CDLocalContext> *context;
@property (retain) NSString *currentChargePackInductiveConnectionUUID;
@property (retain) NSString *currentChargePackNFCConnectionUUID;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) long long deadlineSignalID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultsDomain;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *disabledUntilDate;
@property (nonatomic) double empiricalTimeToFullChargeDurationMinutes;
@property (nonatomic) bool enabled;
@property (nonatomic) bool encounteredTLCDuringTopOff;
@property (retain) NSDate *engagementTimeOverride;
@property (nonatomic, retain) NSNumber *engagementsLastMonthBucket;
@property (retain) NSDate *fullChargeDeadlineOverride;
@property (readonly) unsigned long long hash;
@property bool isChargePackConnected;
@property (nonatomic) bool isDesktopDevice;
@property (nonatomic, retain) <_DKKnowledgeQuerying><_DKKnowledgeSaving> *knowledgeStore;
@property (nonatomic) int lastBatteryLevel;
@property (nonatomic) bool lastChargerWasWireless;
@property (nonatomic, retain) NSDate *lastComputedSignalDeadline;
@property (nonatomic, retain) NSDate *lastDesktopModeChangeDate;
@property (nonatomic) int lastFullyCharged;
@property (nonatomic, retain) NSDate *lastInterruptedTime;
@property (nonatomic, retain) NSNumber *lastNonEngagementSignalID;
@property (nonatomic) int lastPluginStatus;
@property (nonatomic, retain) NSNumber *lastReportedNumberOfPluginEvents;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property unsigned long long mcmCurrentState;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *mcmFidgetMitigationTimer;
@property bool mcmForbidsCharging;
@property (nonatomic, retain) NSObject<OS_os_log> *mcmLog;
@property (nonatomic, retain) NSNumber *medianPluginLength;
@property (nonatomic, retain) PowerUIMLTwoStageModelPredictor *modelTwoStagePredictor;
@property (nonatomic, retain) NSArray *monitors;
@property (nonatomic, retain) NSDistributedNotificationCenter *notificationCenter;
@property (nonatomic) unsigned long long numberOfTimesMCMNotificationWasDisplayed;
@property (nonatomic) bool overrideAllSignals;
@property (retain) NSDictionary *powerLogStatus;
@property (nonatomic) int powerlogToken;
@property (nonatomic) unsigned long long predictorType;
@property (nonatomic, retain) NSDate *previousDecisionMakerDate;
@property (nonatomic) long long previousDecisionMakerID;
@property (retain) NSDictionary *previousPowerLogStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property bool remoteOBCEngaged;
@property (retain) NSDate *repeatEngagementOverrideEndDate;
@property (nonatomic) unsigned int service;
@property (nonatomic, retain) NSDictionary *signalDeadline;
@property (nonatomic) bool signalsIgnored;
@property (readonly) Class superclass;
@property (nonatomic) bool temporarilyDisabled;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) PowerUITrialManager *trialManager;
@property (nonatomic, retain) NSDate *uiDeadline;
@property (nonatomic, retain) PowerUINotificationManager *unManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcCallbackQueue;

+ (id)manager;

- (void).cxx_destruct;
- (bool)OBCReengagementEvaluated;
- (id)_fullChargeDeadline;
- (bool)_hasLegitimateUsage;
- (void)accessoryConnectionAttached:(id)arg1 type:(int)arg2;
- (void)accessoryConnectionDetached:(id)arg1;
- (void)accessoryNFCConnectionCallback:(id)arg1;
- (void)addEngagementFromDate:(id)arg1 withDuration:(double)arg2;
- (void)addPowerLogEventForCheckpoint:(unsigned long long)arg1 decisionSignalID:(id)arg2 decisionDate:(id)arg3;
- (id)adjustedFullChargeDeadlineWithSignals:(id)arg1 andBatteryMitigationAdvancement:(double)arg2 withDesktopMode:(bool)arg3 withFullChargeDeadline:(id)arg4 withResult:(id)arg5;
- (id /* block */)afterBatteryCallback;
- (id)batteryMitigationManager;
- (id)bdcConnection;
- (id /* block */)beforeBatteryCallback;
- (id)chargePrediction:(unsigned long long)arg1 fullyCharged:(bool)arg2 previousCheckpoint:(unsigned long long)arg3 predictor:(unsigned long long)arg4;
- (id)chargingController;
- (unsigned long long)checkpoint;
- (id)checkpointKP;
- (id)checkpointNameFromCheckpoint:(unsigned long long)arg1;
- (void)cleanupOverrides;
- (void)cleanupPluginHistoryWithActivity:(id)arg1;
- (void)clearAllNotificationState;
- (void)clearPluginTimeline;
- (void)client:(id)arg1 setChargingStatus:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)client:(id)arg1 setMCMState:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (id)cloakingMetrics:(id)arg1 withIdleCheckpoints:(id)arg2 withIdleStart:(id)arg3 withTopOffStart:(id)arg4 withPluginEnd:(id)arg5;
- (id)computeSignalDeadline;
- (id)connectionInfoProvider;
- (id)constructAnalyticsStatus;
- (id)constructAnalyticsStatusFromEvents:(id)arg1;
- (id)constructDailyStats:(id)arg1;
- (id)context;
- (unsigned long long)controllerStateFromCheckpoint:(unsigned long long)arg1;
- (unsigned long long)currentChargeLimit;
- (id)currentChargePackInductiveConnectionUUID;
- (id)currentChargePackNFCConnectionUUID;
- (void)currentLeewayWithHandler:(id /* block */)arg1;
- (unsigned long long)currentModeOfOperation;
- (unsigned long long)currentState;
- (id)dailyStatsFromLastReported:(id)arg1;
- (long long)deadlineSignalID;
- (id)defaultDateToDisableUntilGivenDate:(id)arg1;
- (id)defaultsDomain;
- (id)desktopModeOverride;
- (bool)deviceHasEnoughPluggedInTime;
- (bool)deviceHasOverriddenLegitimateUsageDetection;
- (bool)deviceHasSeveralInteractions;
- (bool)deviceWasRecentlyActive;
- (bool)deviceWasRecentlyConnectedToCharger;
- (void)disableCharging;
- (id)disabledUntilDate;
- (void)dispatchAlarmAfter:(long long)arg1 withName:(id)arg2;
- (double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1;
- (double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 includeTLCDelay:(bool)arg2;
- (id)eligibleEngagementIntervalFromTimelineEvents:(id)arg1;
- (double)empiricalTimeToFullChargeDurationMinutes;
- (void)enableCharging;
- (bool)enabled;
- (bool)encounteredTLCDuringTopOff;
- (void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(bool)arg4 withHandler:(id /* block */)arg5;
- (id)engagementTimeOverride;
- (id)engagementsLastMonthBucket;
- (void)enterDevelopmentMode;
- (void)evaluateIfDEoCDevice;
- (void)evaluateIfDesktopDevice;
- (void)evaluateIfDesktopDeviceForced:(bool)arg1;
- (void)forceModelUpdate;
- (id)fullChargeDeadline;
- (id)fullChargeDeadlineOverride;
- (void)fullChargeDeadlineWithHandler:(id /* block */)arg1;
- (id)genericOBCFailureNotification:(id)arg1;
- (void)handleAlarmEvent:(id)arg1;
- (void)handleCallback;
- (void)handleCallback:(bool)arg1;
- (void)handleInternalCarryPromptEvent;
- (void)handleNewBatteryLevel:(int)arg1 whileExternalConnected:(bool)arg2 fullyCharged:(bool)arg3;
- (void)handleNotificationResponse:(id)arg1;
- (void)handleTopOffSupervisorEvent;
- (void)handleTopOffSupervisorEventInternal;
- (void)handleXPCActivityOnBoot;
- (double)idleDurationWithEngagedCheckpoints:(id)arg1 withTopOffStartCheckpoints:(id)arg2 withDisabledCheckpoints:(id)arg3 withTopOffStart:(id)arg4 withIdleStart:(id)arg5 withTemporarilyDisabledStart:(id)arg6 withPluginEnd:(id)arg7;
- (void)incomingBDCRequest:(id)arg1;
- (id)initWithDefaultsDomain:(id)arg1 knowledgeStore:(id)arg2 contextStore:(id)arg3 beforeHandlingBatteryChangeCallback:(id /* block */)arg4 afterHandlingBatteryChangeCallback:(id /* block */)arg5;
- (bool)isCECSupported;
- (void)isCECSupportedWithHandler:(id /* block */)arg1;
- (bool)isChargePackConnected;
- (bool)isDesktopDevice;
- (bool)isDeviceWithLegitimateUsage;
- (bool)isExternalConnected;
- (void)isMCMCurrentlyEnabledWithHandler:(id /* block */)arg1;
- (bool)isMCMSupported;
- (bool)isOBCEnabled;
- (void)isOBCEngagedWithHandler:(id /* block */)arg1;
- (void)isOBCSupportedWithHandler:(id /* block */)arg1;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)arg1;
- (id)knowledgeStore;
- (id)lastAcquiredLocation;
- (int)lastBatteryLevel;
- (bool)lastChargerWasWireless;
- (id)lastComputedSignalDeadline;
- (id)lastDesktopModeChangeDate;
- (int)lastFullyCharged;
- (id)lastInterruptedTime;
- (id)lastNonEngagementSignalID;
- (int)lastPluginStatus;
- (id)lastReportedNumberOfPluginEvents;
- (void)listMonitorSignals;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadCheckpoint;
- (void)loadDefaults;
- (id)log;
- (id)mcmActiveNotificationRequest;
- (unsigned long long)mcmCurrentState;
- (void)mcmDisableCharging;
- (void)mcmEnableCharging;
- (id)mcmFidgetMitigationTimer;
- (bool)mcmForbidsCharging;
- (id)mcmLog;
- (id)medianPluginLength;
- (id)modelTwoStagePredictor;
- (void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2;
- (id)monitors;
- (id)notificationCenter;
- (unsigned long long)numberOfTimesMCMNotificationWasDisplayed;
- (bool)overrideAllSignals;
- (double)periodicCheckDuration;
- (void)pluginTimelineAddEvent:(id)arg1 atDate:(id)arg2 withBatteryLevel:(unsigned long long)arg3;
- (void)postOBCNotificationWithTopOff:(bool)arg1;
- (id)powerLogStatus;
- (void)powerLogStatusWithHandler:(id /* block */)arg1;
- (int)powerlogToken;
- (unsigned long long)predictorType;
- (id)previousDecisionMakerDate;
- (long long)previousDecisionMakerID;
- (id)previousPowerLogStatus;
- (unsigned long long)projectedBatteryLevelForDuration:(unsigned long long)arg1 withInitialBatteryLevel:(unsigned long long)arg2;
- (id)queue;
- (id)readAndRemoveRecentEngagements;
- (id)readDateForPreferenceKey:(id)arg1;
- (id)readNumberForPreferenceKey:(id)arg1;
- (id)readStringForPreferenceKey:(id)arg1;
- (void)recallPeriodicCheck;
- (id)recentEngagements;
- (void)recomputeEmpiricalTimeToFullCharge;
- (void)recordAnalytics;
- (void)registerBDCXPC;
- (bool)remoteOBCEngaged;
- (id)repeatEngagementOverrideEndDate;
- (void)reportAggDKeys:(id)arg1;
- (void)reportBatteryHealthMetrics;
- (void)reportHistoricalEngagements;
- (void)reportMCMStatusWithBatteryLevel:(int)arg1;
- (void)reportMonthlyData;
- (void)requestPeriodicCheck;
- (void)resetDevelopmentMode;
- (void)resetDeviceHasLegitimateUsage;
- (void)resetEngagementOverrideWithHandler:(id /* block */)arg1;
- (void)resetState;
- (void)sendBDCData:(id)arg1 withMessage:(id)arg2;
- (unsigned int)service;
- (void)sessionEndCECAnalytics;
- (void)sessionStartCECAnalytics;
- (void)setAfterBatteryCallback:(id /* block */)arg1;
- (void)setBatteryMitigationManager:(id)arg1;
- (void)setBdcConnection:(id)arg1;
- (void)setBeforeBatteryCallback:(id /* block */)arg1;
- (void)setChargingController:(id)arg1;
- (void)setCheckpoint:(unsigned long long)arg1;
- (void)setCheckpoint:(unsigned long long)arg1 withSelector:(SEL)arg2;
- (void)setCheckpointKP:(id)arg1;
- (void)setConnectionInfoProvider:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentChargePackInductiveConnectionUUID:(id)arg1;
- (void)setCurrentChargePackNFCConnectionUUID:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setDate:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setDeadlineSignalID:(long long)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setDisabledUntilDate:(id)arg1;
- (void)setEmpiricalTimeToFullChargeDurationMinutes:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEncounteredTLCDuringTopOff:(bool)arg1;
- (void)setEngagementTimeOverride:(id)arg1;
- (void)setEngagementsLastMonthBucket:(id)arg1;
- (id)setFullChargeDeadline:(id)arg1 withOCVMitigationWaitTime:(double)arg2;
- (void)setFullChargeDeadlineOverride:(id)arg1;
- (void)setIsChargePackConnected:(bool)arg1;
- (void)setIsDesktopDevice:(bool)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLastBatteryLevel:(int)arg1;
- (void)setLastChargerWasWireless:(bool)arg1;
- (void)setLastComputedSignalDeadline:(id)arg1;
- (void)setLastDesktopModeChangeDate:(id)arg1;
- (void)setLastFullyCharged:(int)arg1;
- (void)setLastInterruptedTime:(id)arg1;
- (void)setLastNonEngagementSignalID:(id)arg1;
- (void)setLastPluginStatus:(int)arg1;
- (void)setLastReportedNumberOfPluginEvents:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setMcmCurrentState:(unsigned long long)arg1;
- (void)setMcmFidgetMitigationTimer:(id)arg1;
- (void)setMcmForbidsCharging:(bool)arg1;
- (void)setMcmLog:(id)arg1;
- (void)setMedianPluginLength:(id)arg1;
- (void)setModelTwoStagePredictor:(id)arg1;
- (void)setMonitors:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setNumber:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setNumberOfTimesMCMNotificationWasDisplayed:(unsigned long long)arg1;
- (void)setOBCReengagementEvaluated:(bool)arg1;
- (void)setOverrideAllSignals:(bool)arg1;
- (void)setPowerLogStatus:(id)arg1;
- (void)setPowerlogToken:(int)arg1;
- (void)setPredictorType:(unsigned long long)arg1;
- (void)setPreviousDecisionMakerDate:(id)arg1;
- (void)setPreviousDecisionMakerID:(long long)arg1;
- (void)setPreviousPowerLogStatus:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteOBCEngaged:(bool)arg1;
- (void)setRepeatEngagementOverrideEndDate:(id)arg1;
- (void)setService:(unsigned int)arg1;
- (void)setSignalDeadline:(id)arg1;
- (void)setSignalsIgnored:(bool)arg1;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTemporarilyDisabled:(bool)arg1;
- (void)setTemporarilyDisabled:(bool)arg1 until:(id)arg2;
- (void)setTimer:(id)arg1;
- (void)setTrialManager:(id)arg1;
- (void)setUiDeadline:(id)arg1;
- (void)setUnManager:(id)arg1;
- (void)setXpcCallbackQueue:(id)arg1;
- (void)set_fullChargeDeadline:(id)arg1;
- (void)set_hasLegitimateUsage:(bool)arg1;
- (id)shouldDisableChargingAsOfDate:(id)arg1 atBatteryLevel:(unsigned long long)arg2 overrideAllSignals:(bool)arg3 withPredictor:(id)arg4 bypassSaved:(bool)arg5;
- (id)shouldDisableChargingAtBatteryLevel:(unsigned long long)arg1 withPredictor:(id)arg2;
- (bool)shouldDisableChargingOverrideModel:(unsigned long long)arg1;
- (void)shouldMCMBeDisplayedWithHandler:(id /* block */)arg1;
- (bool)shouldOBCRoutineReengage;
- (id)signalDeadline;
- (bool)signalsIgnored;
- (void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(bool)arg2 withHandler:(id /* block */)arg3;
- (id)smartTopOffFailureNotificationAtBatteryLevel:(int)arg1 withDate:(id)arg2;
- (void)startAllMonitoring;
- (void)startFidgetMitigationTimer;
- (void)statusWithHandler:(id /* block */)arg1;
- (void)stopAllMonitoring;
- (id)stringFromDecisionMaker:(long long)arg1 decisionDate:(id)arg2;
- (id)stringFromInterval:(id)arg1;
- (id)stringFromState:(unsigned long long)arg1;
- (bool)temporarilyDisabled;
- (id)timeStringFromDate:(id)arg1;
- (id)timer;
- (double)totalTemporarilyDisabledHours:(id)arg1 withEngagements:(id)arg2 withPluginEnd:(id)arg3;
- (double)totalTopOffDurationWithTopOffStartCheckpoints:(id)arg1 withFullyChargedCheckpoints:(id)arg2 withTopOffStart:(id)arg3 withFullyChargedDate:(id)arg4 withPluginEnd:(id)arg5;
- (id)trialManager;
- (id)ttrURLforBatteryLevel:(int)arg1 withDate:(id)arg2;
- (id)ttrURLforGenericFailure:(id)arg1;
- (id)uiDeadline;
- (id)uiDeadlineFromFullChargeDeadline:(id)arg1 atDate:(id)arg2;
- (id)unManager;
- (id)updateAnalyticsWithPluginMetrics:(id)arg1 withBatteryLevel:(int)arg2;
- (void)updateChargingTimeSaved;
- (void)updateDecisionMakerID:(long long)arg1 withCheckpoint:(unsigned long long)arg2;
- (void)updateNotificationSettings:(bool)arg1;
- (bool)watchIsInternalAndCarrySwitchDisabled;
- (id)xpcCallbackQueue;

@end