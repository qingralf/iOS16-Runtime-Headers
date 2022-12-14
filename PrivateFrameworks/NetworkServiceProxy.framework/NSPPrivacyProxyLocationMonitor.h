/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate> {
    CLLocationManager * _clLocationManager;
    <NSPPrivacyProxyLocationMonitorDelegate> * _delegate;
    bool  _isMonitoringEnabled;
    NSString * _lastGeohash;
    NSString * _latestCountryPlusTimezone;
    CLLocation * _latestLocation;
    NSTimer * _locationMonitorTimer;
    double  _monitorTimeInterval;
}

@property (readonly) NSString *currentCountryPlusTimezone;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSPPrivacyProxyLocationMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isAuthorized;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (bool)checkSignificantLocationChange:(id)arg1;
- (id)currentCountryPlusTimezone;
- (id)delegate;
- (id)geohashFromLocation:(id)arg1;
- (void)handleLocationUpdate:(id)arg1;
- (id)init;
- (bool)isAuthorized;
- (bool)isCoreWLANAuthorized;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)refreshCountryPlusTimezone:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastCountryPlusTimezone:(id)arg1;
- (void)setLastGeohash:(id)arg1;
- (void)setMonitorTimeInterval:(double)arg1;
- (void)setUserEventAgentTimer;
- (void)start;
- (void)startLocationMonitor;
- (void)stop;
- (void)stopLocationMonitor;

@end
