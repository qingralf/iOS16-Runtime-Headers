/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NewsFeed.LocationDetectionManager : NSObject <CLLocationManagerDelegate, TSLocationDetectionManagerType> {
    void locationManager;
    void observableMostFrequentLocation;
    void onUserInteractedWithLocationAuthorizationTCC;
}

@property (nonatomic, readonly) bool authorized;
@property (nonatomic, readonly) bool locationServicesEnabled;
@property (nonatomic, readonly) CLLocation *mostFrequentLocation;
@property (nonatomic, retain) id observableMostFrequentLocation;

- (void).cxx_destruct;
- (bool)authorized;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (bool)locationServicesEnabled;
- (id)mostFrequentLocation;
- (id)observableMostFrequentLocation;
- (void)setObservableMostFrequentLocation:(id)arg1;

@end
