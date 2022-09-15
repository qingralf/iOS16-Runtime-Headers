/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraBulletinNotificationManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDAppleAccountManager * _accountManager;
    HMDAccountRegistry * _accountRegistry;
    bool  _currentPrimary;
    HMDDoorbellPressTracker * _doorbellPressTracker;
    HMDNotificationConditionEvaluator * _evaluator;
    HMDCameraSignificantEventFaceClassificationResolver * _faceClassificationResolver;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    NSNotificationCenter * _notificationCenter;
    HMDCameraSignificantEventNotificationDebouncer * _notificationDebouncer;
    NSMutableDictionary * _observersByCameraIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) HMDAccountRegistry *accountRegistry;
@property (readonly) NSArray *cameraAccessModeRegistrations;
@property (readonly) NSArray *cameraAccessModeRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraReachabilityRegistrations;
@property (readonly) NSArray *cameraReachabilityRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraSignificantEventRegistrations;
@property (readonly) NSArray *cameraSignificantEventRegistrationsForCurrentDevice;
@property bool currentPrimary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDoorbellPressTracker *doorbellPressTracker;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCameraSignificantEventNotificationDebouncer *notificationDebouncer;
@property (readonly) NSMutableDictionary *observersByCameraIdentifier;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_cameraAccessModeRegistrationsForSource:(id)arg1 context:(id)arg2;
+ (id)_cameraReachabilityRegistrationsForSource:(id)arg1 context:(id)arg2;
+ (id)_cameraSignificantEventRegistrationsForSource:(id)arg1 context:(id)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_auditRegistrationsForMultipleHomesIssue;
- (id)_cameraAccessModeBulletinNotificationRegistrationsForAccessory:(id)arg1;
- (id)_cameraProfileWithUUID:(id)arg1;
- (id)_cameraReachabilityBulletinNotificationRegistrationsForAccessory:(id)arg1;
- (id)_cameraSignificantEventBulletinNotificationRegistrationsForCameraIdentifier:(id)arg1;
- (id)_currentHomeCameraAccessoryUUIDs;
- (id)_deviceToNotifyForRegistration:(id)arg1 source:(id)arg2;
- (bool)_filterPassesForCameraSignificantEvent:(id)arg1 registration:(id)arg2;
- (void)_handleCameraSignificantEventBulletinNotificationRegistration:(id)arg1 removed:(bool)arg2;
- (void)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage:(id)arg1;
- (bool)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage_Legacy:(id)arg1;
- (void)_handleCameraSignificantEventNotificationMessage:(id)arg1;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)_handleDeviceBecameNotPrimary;
- (void)_handleDeviceBecamePrimary;
- (void)_handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)_handleSignificantEvent:(id)arg1 cameraProfile:(id)arg2 homePresence:(id)arg3;
- (void)_handleSignificantEvent:(id)arg1 deviceIdsIdentifier:(id)arg2 notificationModes:(unsigned long long)arg3;
- (void)_handleSignificantEventWithUUID:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4 faceClassifications:(id)arg5 cameraProfile:(id)arg6 homePresence:(id)arg7;
- (id)_homePresenceByPairingIdentity;
- (id)_mkfLocalCameraAccessModeRegistrationsWithManagedObjectContext:(id)arg1;
- (id)_mkfLocalCameraReachabilityRegistrationsWithManagedObjectContext:(id)arg1;
- (id)_mkfLocalCameraSignificantEventRegistrationsWithManagedObjectContext:(id)arg1;
- (void)_notifyDevice:(id)arg1 aboutSignificantEvent:(id)arg2;
- (void)_notifyPrimaryResidentOfSignificantEvent:(id)arg1 withCameraProfileUUID:(id)arg2;
- (id)_recentDoorbellPressIntervalForSignificantEventDate:(id)arg1;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (bool)_updateLocalStoreWithCameraAccessModeBulletinRegistration:(id)arg1 existingMKFLocalRegistration:(id)arg2 enabled:(bool)arg3 moc:(id)arg4;
- (bool)_updateLocalStoreWithCameraReachabilityBulletinRegistration:(id)arg1 existingMKFLocalRegistration:(id)arg2 enabled:(bool)arg3 moc:(id)arg4;
- (bool)_updateLocalStoreWithCameraSignificantEventBulletinRegistration:(id)arg1 existingMKFLocalRegistration:(id)arg2 enabled:(bool)arg3 moc:(id)arg4;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;
- (id)accountManager;
- (id)accountRegistry;
- (void)addCameraSignificantEventNotificationObserver:(id)arg1 cameraIdentifier:(id)arg2;
- (id)cameraAccessModeRegistrations;
- (id)cameraAccessModeRegistrationsForCurrentDevice;
- (id)cameraReachabilityRegistrations;
- (id)cameraReachabilityRegistrationsForCurrentDevice;
- (id)cameraSignificantEventRegistrations;
- (id)cameraSignificantEventRegistrationsForCurrentDevice;
- (id)cameraUserNotificationSettingsForAccessory:(id)arg1;
- (id)conditionsFromPredicate:(id)arg1;
- (void)configureWithDeviceIsResidentCapable:(bool)arg1;
- (bool)currentPrimary;
- (id)devicesToNotifyForAccessModeChangeForAccessory:(id)arg1;
- (id)devicesToNotifyForCameraReachabilityForAccessory:(id)arg1;
- (id)doorbellPressTracker;
- (id)evaluator;
- (id)faceClassificationResolver;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleRemovedCameraAccessory:(id)arg1;
- (void)handleSignificantEvent:(id)arg1 cameraProfile:(id)arg2 homePresence:(id)arg3;
- (id)home;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 accountRegistry:(id)arg4 accountManager:(id)arg5 faceClassificationResolver:(id)arg6 notificationDebouncer:(id)arg7 doorbellPressTracker:(id)arg8 evaluator:(id)arg9 notificationCenter:(id)arg10;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)notificationDebouncer;
- (id)observersByCameraIdentifier;
- (void)removeCameraSignificantEventNotificationObserver:(id)arg1 cameraIdentifier:(id)arg2;
- (void)setCurrentPrimary:(bool)arg1;
- (id)source;
- (void)updateNotificationRegistrationsWithSettings:(id)arg1 accessory:(id)arg2 doorbellPressNotificationEnabled:(bool)arg3 doorbellPressNotificationPredicate:(id)arg4 completion:(id /* block */)arg5;
- (id)workQueue;

@end