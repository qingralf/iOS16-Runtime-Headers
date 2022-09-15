/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeStateMachineState

- (id)expirationDate;
- (id)nextStateWithContext:(id*)arg1;
- (bool)shouldUpdateSleepModeStateForState:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)stateDidExpireWithContext:(id)arg1;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;

@end