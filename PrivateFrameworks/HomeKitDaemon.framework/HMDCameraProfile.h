/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraClipManagerDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSettingProactiveReaderDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate> {
    HMDCameraRecordingManager * _cameraRecordingManager;
    HMDCameraProfileSettingsManager * _cameraSettingsManager;
    NSSet * _cameraStreamManagers;
    HMDCameraClipManager * _clipManager;
    HMDCameraClipUserNotificationCenter * _clipUserNotificationCenter;
    HMDHAPAccessory * _hapAccessory;
    bool  _microphonePresent;
    HMFNetMonitor * _networkMonitor;
    NSNotificationCenter * _notificationCenter;
    HMDPredicateUtilities * _predicateUtilities;
    HMDCameraRecordingReachabilityEventManager * _reachabilityEventManager;
    HMFTimer * _recordingEventsCleanupTimer;
    id /* block */  _recordingEventsCleanupTimerFactory;
    HMDService * _recordingManagementService;
    id /* block */  _recordingManagerFactory;
    NSMutableArray * _settingProactiveReaders;
    HMDCameraSignificantEventListener * _significantEventListener;
    HMDCameraSnapshotManager * _snapshotManager;
    bool  _speakerPresent;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
}

@property (readonly, copy) NSDictionary *assistantObject;
@property (retain) HMDCameraRecordingManager *cameraRecordingManager;
@property (readonly) HMDCameraProfileSettingsManager *cameraSettingsManager;
@property (readonly) NSSet *cameraStreamManagers;
@property (readonly) HMDCameraClipManager *clipManager;
@property (readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter;
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDHAPAccessory *hapAccessory;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophonePresent, nonatomic, readonly) bool microphonePresent;
@property (readonly) HMFNetMonitor *networkMonitor;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMDPredicateUtilities *predicateUtilities;
@property (readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (retain) HMFTimer *recordingEventsCleanupTimer;
@property (copy) id /* block */ recordingEventsCleanupTimerFactory;
@property (readonly) HMDService *recordingManagementService;
@property (copy) id /* block */ recordingManagerFactory;
@property (readonly) NSMutableArray *settingProactiveReaders;
@property (retain) HMDCameraSignificantEventListener *significantEventListener;
@property (readonly) HMDCameraSnapshotManager *snapshotManager;
@property (getter=isSpeakerPresent, nonatomic, readonly) bool speakerPresent;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (getter=isCameraRecordingFeatureSupported, nonatomic, readonly) bool supportsCameraRecordingFeature;
@property (readonly, copy) NSString *urlString;

+ (id)bulletinBoard;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (void)setBulletinBoard:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_areFaceClassificationsSuppressedForSignificantEvent:(id)arg1;
- (void)_createCameraRecordingManager;
- (void)_createSignificantEventListener;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_postNotificationForUpdatedSignificantEvent:(id)arg1 homePresence:(id)arg2;
- (void)_setControlSupport;
- (void)_setUpBulletinNotificationManagerObserver;
- (bool)_shouldNotifyForSignificantEvent:(id)arg1 homePresence:(id)arg2;
- (id)assistantObject;
- (void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(id /* block */)arg2;
- (void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(id /* block */)arg2;
- (id)cameraRecordingManager;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (id)cameraSettingsManager;
- (id)cameraStreamManagers;
- (id)clipManager;
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;
- (void)clipManagerDidDisableCloudStorage:(id)arg1;
- (void)clipManagerDidStart:(id)arg1;
- (void)clipManagerDidStartUpCloudZone:(id)arg1;
- (void)clipManagerDidStop:(id)arg1;
- (id)clipUserNotificationCenter;
- (id)currentSettings;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;
- (void)handleResidentsChangedNotification:(id)arg1;
- (id)hapAccessory;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 recordingManagementService:(id)arg3 msgDispatcher:(id)arg4 settingsManager:(id)arg5 workQueue:(id)arg6 uniqueIdentifier:(id)arg7 clipManager:(id)arg8 clipUserNotificationCenter:(id)arg9 reachabilityEventManager:(id)arg10 networkMonitor:(id)arg11 streamSnapshotHandler:(id)arg12 snapshotManager:(id)arg13 cameraStreamManagers:(id)arg14 notificationCenter:(id)arg15;
- (bool)isCameraRecordingFeatureSupported;
- (bool)isEqual:(id)arg1;
- (bool)isMicrophonePresent;
- (bool)isSpeakerPresent;
- (void)listener:(id)arg1 didReceiveSignificantEvent:(id)arg2 heroFrameData:(id)arg3;
- (id)messageReceiverChildren;
- (id)networkMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)notificationCenter;
- (id)predicateUtilities;
- (id)reachabilityEventManager;
- (id)recordingEventsCleanupTimer;
- (id /* block */)recordingEventsCleanupTimerFactory;
- (id)recordingManagementService;
- (id /* block */)recordingManagerFactory;
- (void)registerForMessages;
- (void)removeCloudData;
- (void)setCameraRecordingManager:(id)arg1;
- (void)setPredicateUtilities:(id)arg1;
- (void)setRecordingEventsCleanupTimer:(id)arg1;
- (void)setRecordingEventsCleanupTimerFactory:(id /* block */)arg1;
- (void)setRecordingManagerFactory:(id /* block */)arg1;
- (void)setSignificantEventListener:(id)arg1;
- (void)setUp;
- (id)settingProactiveReaders;
- (id)significantEventListener;
- (id)snapshotManager;
- (id)streamSnapshotHandler;
- (void)tearDownWithReplacementCameraProfile:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)unconfigure;
- (id)urlString;

@end
