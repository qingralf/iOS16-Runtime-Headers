/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TADeviceRecord : NSObject <NSSecureCoding> {
    NSMutableDictionary * _deviceRecord;
    NSDate * _lastPurgeDate;
    NSDate * _lastScanAttemptDate;
    TADeviceRecordSettings * _settings;
}

@property (nonatomic, retain) NSMutableDictionary *deviceRecord;
@property (nonatomic, retain) NSDate *lastPurgeDate;
@property (nonatomic, retain) NSDate *lastScanAttemptDate;
@property (nonatomic, retain) TADeviceRecordSettings *settings;

+ (unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)arg1;
+ (bool)_isKnownDevice:(unsigned long long)arg1;
+ (id)notificationInternalStateToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearStagedDetectionsForDevice:(id)arg1;
- (void)_createRecordIfNecessaryWithAdvertisement:(id)arg1 withDate:(id)arg2;
- (id)_determineFirstObservationDateWithTASuspiciousDevice:(id)arg1;
- (id)_determineHELEKeepInStagingUntil:(id)arg1;
- (id)_determineKeepInStagingUntil:(id)arg1;
- (void)_didSurfaceNotificationFor:(id)arg1;
- (id)_getDeviceRecord:(id)arg1;
- (void)_performNotificationStateTransitionActionsForDevice:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_processPlaySoundSuccess:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (void)_setDevice:(id)arg1 withExternalState:(unsigned long long)arg2 withDate:(id)arg3;
- (void)_setDevice:(id)arg1 withInternalState:(unsigned long long)arg2 withDate:(id)arg3;
- (void)_setDevice:(id)arg1 withType:(unsigned long long)arg2 withDate:(id)arg3;
- (void)_updateAdvertisement:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (void)checkForScanRequestsWithClock:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (id)createTAOutgoingRequestWithExpiringTASingleDeviceRecord:(id)arg1 withCurrentDate:(id)arg2;
- (id)description;
- (id)descriptionDictionary;
- (id)deviceRecord;
- (void)encodeWithCoder:(id)arg1;
- (void)forceStagedDetectionsToSurfaceImmediatelyWithAdvertisement:(id)arg1;
- (id)getDetectionResultsToPush;
- (unsigned long long)getDeviceNotificationState:(id)arg1;
- (unsigned long long)getDeviceOwnershipType:(id)arg1;
- (unsigned long long)getDeviceType:(id)arg1;
- (id)getFirstStagedDetectionDate:(id)arg1;
- (id)getLatestAdvertisement:(id)arg1;
- (id)getLatestBeepOnMoveDate:(id)arg1;
- (unsigned long long)getNumStagedDetections:(id)arg1;
- (bool)hasStagedImmediateDetections:(id)arg1;
- (bool)hasSurfacedNotificationFor:(id)arg1;
- (void)ingestTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKnownDevice:(id)arg1;
- (id)lastPurgeDate;
- (id)lastScanAttemptDate;
- (void)logDeviceRecord;
- (void)mergeWithAnotherDeviceRecord:(id)arg1;
- (void)processBackgroundDetection:(id)arg1;
- (void)processSurfacedAlerts:(id)arg1;
- (void)purgeWithClock:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (void)setDeviceRecord:(id)arg1;
- (void)setLastPurgeDate:(id)arg1;
- (void)setLastScanAttemptDate:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (void)stageDetectionResults:(id)arg1;
- (void)stageDevice:(id)arg1 withCurrentDate:(id)arg2;
- (void)updateDeviceRecordOnSessionChange:(id)arg1 WithCurrentDate:(id)arg2;

@end