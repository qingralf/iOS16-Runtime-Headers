/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessorySupportedStereoPairVersionsMigrator : NSObject <HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource, HMFLogging> {
    HMDBackingStore * _backingStore;
    <HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource> * _dataSource;
    bool  _didMigrate;
    NSUUID * _identifier;
}

@property (retain) HMDBackingStore *backingStore;
@property <HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didMigrate;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)backingStore;
- (void)configureWithPrimaryResidentChangeMonitor:(id)arg1 backingStore:(id)arg2 notificationCenter:(id)arg3;
- (id)dataSource;
- (bool)didMigrate;
- (void)handleIsCurrentPrimaryResident:(bool)arg1;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)logIdentifier;
- (void)migrateSupportedStereoPairVersions;
- (id)mkfAppleMediaAccessoryWithModelID:(id)arg1;
- (id)mkfAppleMediaAccessoryWithModelID:(id)arg1 forAppleMediaAccessorySupportedStereoPairVersionsMigrator:(id)arg2;
- (void)registerForNotificationsWithNotificationCenter:(id)arg1 primaryResidentChangeMonitor:(id)arg2;
- (void)setBackingStore:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDidMigrate:(bool)arg1;

@end