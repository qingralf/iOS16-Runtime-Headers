/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultChangeReason;
- (id)nextStateWithContext:(id*)arg1;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (id)stateName;

@end
