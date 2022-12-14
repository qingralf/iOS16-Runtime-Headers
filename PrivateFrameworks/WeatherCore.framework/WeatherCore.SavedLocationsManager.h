/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore
 */

@interface WeatherCore.SavedLocationsManager : NSObject <WCWeatherSharedPreferencesChangeObserver> {
    void coherenceMigrator;
    void geocodeManager;
    void keyValueStoreProvider;
    void localKeyValueStore;
    void locationMetadataManager;
    void locationsReconciler;
    void lock;
    void notifyQueue;
    void observers;
    void savedLocations;
    void savedLocationsReader;
    void syncedDataManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)sharedPreferencesChangedExternally;

@end
