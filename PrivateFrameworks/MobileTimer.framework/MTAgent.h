/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTApplicationWorkspaceObserverProtocol, MTSystemStateDelegate> {
    MTAlarmIntentDonor * _alarmIntentDonor;
    MTAlarmScheduler * _alarmScheduler;
    MTAlarmServer * _alarmServer;
    MTAlarmSnapshot * _alarmSnapshot;
    MTAlarmStorage * _alarmStorage;
    MTAlarmSyncDataModel * _alarmSyncDataModel;
    MTCoreDuetMonitor * _coreDuetMonitor;
    MTAgentDiagnosticListener * _diagnostics;
    bool  _isHorseman;
    MTLanguageChangeListener * _languageChangeListener;
    NSDate * _launchDate;
    <MTNotificationCenter> * _notificationCenter;
    MTAgentNotificationManager * _notificationManager;
    <NAScheduler> * _serializer;
    MTSleepCoordinator * _sleepCoordinator;
    MTSleepManager * _sleepManager;
    MTSleepModeMonitor * _sleepModeMonitor;
    MTSleepSessionManager * _sleepSessionManager;
    MTSleepSessionTracker * _sleepSessionTracker;
    MTMetrics * _syncMetrics;
    bool  _systemReady;
    MTSystemStateListener * _systemStateListener;
    MTTimeListener * _timeListener;
    MTTimerIntentDonor * _timerIntentDonor;
    MTTimerScheduler * _timerScheduler;
    MTTimerServer * _timerServer;
    MTTimerSessionsCoordinator * _timerSessionsCoordinator;
    MTTimerSnapshot * _timerSnapshot;
    MTTimerStorage * _timerStorage;
    MTWidgetProvider * _widgetProvider;
}

@property (nonatomic, retain) MTAlarmIntentDonor *alarmIntentDonor;
@property (nonatomic, retain) MTAlarmScheduler *alarmScheduler;
@property (nonatomic, retain) MTAlarmServer *alarmServer;
@property (nonatomic, retain) MTAlarmSnapshot *alarmSnapshot;
@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (nonatomic, retain) MTAlarmSyncDataModel *alarmSyncDataModel;
@property (nonatomic, retain) MTCoreDuetMonitor *coreDuetMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTAgentDiagnosticListener *diagnostics;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHorseman;
@property (nonatomic, retain) MTLanguageChangeListener *languageChangeListener;
@property (nonatomic, retain) NSDate *launchDate;
@property (nonatomic, retain) <MTNotificationCenter> *notificationCenter;
@property (nonatomic, retain) MTAgentNotificationManager *notificationManager;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) MTSleepCoordinator *sleepCoordinator;
@property (nonatomic, readonly) MTSleepManager *sleepManager;
@property (nonatomic, retain) MTSleepModeMonitor *sleepModeMonitor;
@property (nonatomic, retain) MTSleepSessionManager *sleepSessionManager;
@property (nonatomic, retain) MTSleepSessionTracker *sleepSessionTracker;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTMetrics *syncMetrics;
@property (nonatomic) bool systemReady;
@property (nonatomic, retain) MTSystemStateListener *systemStateListener;
@property (nonatomic, retain) MTTimeListener *timeListener;
@property (nonatomic, retain) MTTimerIntentDonor *timerIntentDonor;
@property (nonatomic, retain) MTTimerScheduler *timerScheduler;
@property (nonatomic, retain) MTTimerServer *timerServer;
@property (nonatomic, retain) MTTimerSessionsCoordinator *timerSessionsCoordinator;
@property (nonatomic, retain) MTTimerSnapshot *timerSnapshot;
@property (nonatomic, retain) MTTimerStorage *timerStorage;
@property (nonatomic, retain) MTWidgetProvider *widgetProvider;

+ (id)agent;

- (void).cxx_destruct;
- (id)_diagnosticProviders;
- (void)_removeUserDefaultsData;
- (void)_removeUserDefaultsDataIfNecessary:(id)arg1;
- (void)_setupAlarms;
- (void)_setupInitialListeners;
- (void)_setupNotificationCenter;
- (void)_setupSecondaryListeners;
- (void)_setupSync;
- (void)_setupTimers;
- (id)alarmIntentDonor;
- (id)alarmScheduler;
- (id)alarmServer;
- (id)alarmSnapshot;
- (id)alarmStorage;
- (id)alarmSyncDataModel;
- (id)coreDuetMonitor;
- (id)diagnostics;
- (id)gatherDiagnostics;
- (void)handleF5Reset;
- (void)handleMigrationFinish;
- (id)init;
- (bool)isHorseman;
- (id)languageChangeListener;
- (id)launchDate;
- (id)notificationCenter;
- (id)notificationManager;
- (void)observedApplicationDidUninstallForBundleIdentifier:(id)arg1;
- (void)printDiagnostics;
- (void)restoreDidFinish;
- (id)serializer;
- (void)setAlarmIntentDonor:(id)arg1;
- (void)setAlarmScheduler:(id)arg1;
- (void)setAlarmServer:(id)arg1;
- (void)setAlarmSnapshot:(id)arg1;
- (void)setAlarmStorage:(id)arg1;
- (void)setAlarmSyncDataModel:(id)arg1;
- (void)setCoreDuetMonitor:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setIsHorseman:(bool)arg1;
- (void)setLanguageChangeListener:(id)arg1;
- (void)setLaunchDate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepCoordinator:(id)arg1;
- (void)setSleepModeMonitor:(id)arg1;
- (void)setSleepSessionManager:(id)arg1;
- (void)setSleepSessionTracker:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)setSystemReady:(bool)arg1;
- (void)setSystemStateListener:(id)arg1;
- (void)setTimeListener:(id)arg1;
- (void)setTimerIntentDonor:(id)arg1;
- (void)setTimerScheduler:(id)arg1;
- (void)setTimerServer:(id)arg1;
- (void)setTimerSessionsCoordinator:(id)arg1;
- (void)setTimerSnapshot:(id)arg1;
- (void)setTimerStorage:(id)arg1;
- (void)setWidgetProvider:(id)arg1;
- (id)sleepCoordinator;
- (id)sleepManager;
- (id)sleepModeMonitor;
- (id)sleepSessionManager;
- (id)sleepSessionTracker;
- (id)syncMetrics;
- (bool)systemReady;
- (id)systemStateListener;
- (id)timeListener;
- (id)timerIntentDonor;
- (id)timerScheduler;
- (id)timerServer;
- (id)timerSessionsCoordinator;
- (id)timerSnapshot;
- (id)timerStorage;
- (id)widgetProvider;

@end