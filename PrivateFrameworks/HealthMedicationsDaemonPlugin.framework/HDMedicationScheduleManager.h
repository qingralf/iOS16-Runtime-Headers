/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin
 */

@interface HDMedicationScheduleManager : NSObject <HDProfileReadyObserver> {
    NSNumber * __unitTesting_activity_result;
    HDAssertion * _accessibilityAssertion;
    HDXPCGatedActivity * _gatedRescheduleActivity;
    bool  _gatedRescheduleRetryAbort;
    long long  _gatedRescheduleRetryCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDMedicationNotificationManager * _notificationManager;
    HKObserverSet<HDMedicationScheduleObserver> * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDMedicationTimeZoneManager * _timeZoneManager;
    id /* block */  _unitTesting_willTriggerGatedActivity;
}

@property (nonatomic, retain) NSNumber *_unitTesting_activity_result;
@property (nonatomic, readonly) long long _unitTesting_gatedRescheduleRetryCount;
@property (nonatomic, readonly) HDMedicationNotificationManager *notificationManager;
@property (nonatomic, copy) id /* block */ unitTesting_willTriggerGatedActivity;

- (void).cxx_destruct;
- (id)_unitTesting_activity_result;
- (long long)_unitTesting_gatedRescheduleRetryCount;
- (bool)_updateSchedulesToTimeZone:(id)arg1 maintainCalendarDatesAndTimes:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)deleteMedicationSchedule:(id)arg1 error:(id*)arg2;
- (id)deletedSchedulesWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)insertMedicationSchedule:(id)arg1 error:(id*)arg2;
- (bool)insertMedicationSchedules:(id)arg1 error:(id*)arg2;
- (bool)insertMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3;
- (bool)medicationSchedule:(id*)arg1 identifier:(id)arg2 error:(id*)arg3;
- (bool)medicationSchedule:(id*)arg1 medicationIdentifier:(id)arg2 error:(id*)arg3;
- (id)medicationSchedulesWithError:(id*)arg1;
- (id)medicationSchedulesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)notificationManager;
- (void)profileDidBecomeReady:(id)arg1;
- (bool)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(bool)arg2 error:(id*)arg3;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (bool)rescheduleMedicationsWithError:(id*)arg1;
- (void)rescheduleMedicationsWithSyncProvenance:(long long)arg1;
- (bool)scheduleMedicationsFromDate:(id)arg1 error:(id*)arg2;
- (void)setUnitTesting_willTriggerGatedActivity:(id /* block */)arg1;
- (void)set_unitTesting_activity_result:(id)arg1;
- (void)triggerGatedRescheduleWithMaximumDelay:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)unitTesting_willTriggerGatedActivity;
- (void)unregisterObserver:(id)arg1;
- (bool)updateNotificationSent:(bool)arg1 scheduleItemIdentifier:(id)arg2 error:(id*)arg3;
- (bool)updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(bool)arg1 error:(id*)arg2;

@end
