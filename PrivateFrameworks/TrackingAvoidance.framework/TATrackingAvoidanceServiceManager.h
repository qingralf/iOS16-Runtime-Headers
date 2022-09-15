/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TATrackingAvoidanceServiceManager : NSObject <TATrackingAvoidanceServiceObserver, TATrackingAvoidanceServiceProtocol> {
    TAAnalyticsManager * _analyticsManager;
    NSHashTable * _dataSources;
    NSHashTable * _observers;
    TAPersistenceManager * _persistenceManager;
    unsigned long long  _persistenceManagerLastSaveTime;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    TATrackingAvoidanceService * _service;
    TASettings * _serviceSettings;
    NSUUID * _sessionID;
    unsigned long long  _state;
    TATrackingAvoidanceServiceStateContext * _stateContext;
}

@property (nonatomic, retain) TAAnalyticsManager *analyticsManager;
@property (nonatomic, retain) NSHashTable *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) TAPersistenceManager *persistenceManager;
@property (nonatomic) unsigned long long persistenceManagerLastSaveTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RTRoutineManager *routineManager;
@property (nonatomic, retain) TATrackingAvoidanceService *service;
@property (nonatomic, retain) TASettings *serviceSettings;
@property (nonatomic, retain) NSUUID *sessionID;
@property (readonly) unsigned long long state;
@property (nonatomic, retain) TATrackingAvoidanceServiceStateContext *stateContext;
@property (readonly) Class superclass;

+ (id)managerStateToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_changeSession;
- (void)_fetchAndIngestLastVisit;
- (void)_fetchAndIngestNextPredictedLocationOfInterestFromLocation:(id)arg1 startDate:(id)arg2 interval:(double)arg3;
- (void)_fetchAndIngestNextPredictedLocationOfInterestWithCurrentVisitState;
- (void)_fetchStoreAndSave;
- (void)_handleStateUpdateIfNecessary;
- (void)_loadAndBootstrap;
- (void)_onAirplaneMode:(bool)arg1;
- (void)_onAllowSimulatedEvents:(bool)arg1;
- (void)_onBatterySaverMode:(bool)arg1;
- (void)_onDeviceUnlockedSinceBoot:(bool)arg1;
- (void)_onHasKoreaCountryCode:(bool)arg1;
- (void)_onHighThermalState:(bool)arg1;
- (void)_onLocationAndPrivacyReset:(bool)arg1;
- (void)_onLocationServicesEnabled:(bool)arg1;
- (void)_onLocationSimulationInProgress:(bool)arg1;
- (void)_onServiceEnabled:(bool)arg1;
- (void)_onUserLocationInsideKorea:(bool)arg1;
- (void)_registerForAvengerScanner;
- (void)_registerForTATrackingAvoidanceServiceWithSettings:(id)arg1;
- (void)_schedulePeriodicSaveAfterTimeInterval:(double)arg1;
- (void)_setLastSaveTime;
- (void)_setState:(unsigned long long)arg1;
- (bool)_shouldSuspendAvengerScanner;
- (bool)_shouldTerminateService;
- (void)_unregisterForAvengerScanner;
- (void)_unregisterForTATrackingAvoidanceService;
- (void)addDataSource:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)analyticsManager;
- (id)dataSources;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithQueue:(id)arg1 settings:(id)arg2;
- (void)notifyObserversOfStateChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)observers;
- (void)onUpdatedSettings:(id)arg1;
- (id)persistenceManager;
- (unsigned long long)persistenceManagerLastSaveTime;
- (id)queue;
- (void)removeDataSource:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)routineManager;
- (id)service;
- (id)serviceSettings;
- (id)sessionID;
- (void)setAnalyticsManager:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPersistenceManager:(id)arg1;
- (void)setPersistenceManagerLastSaveTime:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRoutineManager:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceSettings:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateContext:(id)arg1;
- (unsigned long long)state;
- (id)stateContext;
- (void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2;
- (void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2;
- (void)visitStateChangedForTrackingAvoidanceService:(id)arg1;

@end