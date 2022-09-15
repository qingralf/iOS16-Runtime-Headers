/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
 */

@interface ENRegionMonitor : NSObject <CLLocationManagerDelegate, ENRegionHistoryManagerDelegate, ENRegionMonitorSourceDelegate> {
    unsigned long long  _authorizationState;
    ENRegionMonitorCoreLocationDataSource * _coreLocationDataSource;
    ENRegionVisit * _currentRegionVisit;
    <ENRegionMonitorDelegate> * _delegate;
    unsigned long long  _exposureNotificationAuthorizationState;
    CLLocationManager * _exposureNotificationLocationManager;
    bool  _monitoringEnabled;
    unsigned long long  _monitoringMode;
    ENRegionHistoryManager * _regionHistoryManager;
    NSObject<OS_dispatch_queue> * _regionMonitorQueue;
    unsigned long long  _significantLocationsAuthorizationState;
    CLLocationManager * _significantLocationsLocationManager;
    ENRegionMonitorTelephonyDataSource * _telephonyDataSource;
    ENRegionTestDataSource * _testRegionDataSource;
}

@property (nonatomic) unsigned long long authorizationState;
@property (nonatomic, retain) ENRegionMonitorCoreLocationDataSource *coreLocationDataSource;
@property (nonatomic, copy) ENRegionVisit *currentRegionVisit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ENRegionMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long exposureNotificationAuthorizationState;
@property (nonatomic, retain) CLLocationManager *exposureNotificationLocationManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool monitoringEnabled;
@property (nonatomic) unsigned long long monitoringMode;
@property (nonatomic, retain) ENRegionHistoryManager *regionHistoryManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *regionMonitorQueue;
@property (nonatomic) unsigned long long significantLocationsAuthorizationState;
@property (nonatomic, retain) CLLocationManager *significantLocationsLocationManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) ENRegionMonitorTelephonyDataSource *telephonyDataSource;
@property (nonatomic, retain) ENRegionTestDataSource *testRegionDataSource;

+ (id)locationAuthorizationStatusToString:(int)arg1;
+ (id)regionMonitorAuthorizationStateToString:(unsigned long long)arg1;
+ (id)regionMonitorMonitoringModeToString:(unsigned long long)arg1;
+ (unsigned long long)regionMonitorStateFromAuthorizationStatus:(int)arg1;

- (void).cxx_destruct;
- (void)_createCountryDataSource;
- (void)_createLocationManager;
- (void)_createSubdivisionDataSource;
- (void)_createTestDataSource;
- (id)_getAllRegionVisitsWithError:(id*)arg1;
- (id)_getAllRegionsWithError:(id*)arg1;
- (id)_getCurrentRegionVisitWithError:(id*)arg1;
- (void)_notifyDelegateOfCurrentRegion;
- (bool)_purgeAllRegionHistoryWithError:(id*)arg1;
- (bool)_purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2;
- (void)_regionDataSource:(id)arg1 updatedWithVisit:(id)arg2;
- (void)_resetRegionMonitor;
- (void)_setup;
- (void)_stopAllDataSources;
- (void)_updateRegionHistoryFileStatus;
- (unsigned long long)authorizationState;
- (id)coreLocationDataSource;
- (id)currentRegionVisit;
- (void)currentRegionVisitDidChange:(id)arg1;
- (id)delegate;
- (void)disableRegionMonitor;
- (void)enableRegionMonitor;
- (unsigned long long)exposureNotificationAuthorizationState;
- (id)exposureNotificationLocationManager;
- (id)getAllRegionVisitsWithError:(id*)arg1;
- (id)getAllRegionsWithError:(id*)arg1;
- (unsigned long long)getAuthorizationState;
- (id)getCurrentRegionVisit;
- (id)getCurrentRegionVisitWithError:(id*)arg1;
- (unsigned long long)getMonitoringMode;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (bool)monitoringEnabled;
- (unsigned long long)monitoringMode;
- (bool)purgeAllRegionHistoryWithError:(id*)arg1;
- (bool)purgeRegionsOlderThanDate:(id)arg1 error:(id*)arg2;
- (void)regionDataSource:(id)arg1 updatedWithVisit:(id)arg2;
- (id)regionHistoryManager;
- (id)regionMonitorQueue;
- (void)resetRegionMonitor;
- (void)setAuthorizationState:(unsigned long long)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setCoreLocationDataSource:(id)arg1;
- (void)setCurrentRegionVisit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExposureNotificationAuthorizationState:(unsigned long long)arg1;
- (void)setExposureNotificationLocationManager:(id)arg1;
- (void)setMonitoringEnabled:(bool)arg1;
- (void)setMonitoringMode:(unsigned long long)arg1;
- (void)setRegionHistoryManager:(id)arg1;
- (void)setRegionMonitorQueue:(id)arg1;
- (void)setSignificantLocationsAuthorizationState:(unsigned long long)arg1;
- (void)setSignificantLocationsLocationManager:(id)arg1;
- (void)setTelephonyDataSource:(id)arg1;
- (void)setTestRegionDataSource:(id)arg1;
- (void)setup;
- (unsigned long long)significantLocationsAuthorizationState;
- (id)significantLocationsLocationManager;
- (id)telephonyDataSource;
- (id)testRegionDataSource;
- (void)updateAuthorizationState;
- (void)updateRegionHistoryFileStatus;
- (void)updateRegionMonitorMonitoringMode:(unsigned long long)arg1;

@end