/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (double)expirationDuration;
- (id)nextStateWithContext:(id*)arg1;
- (bool)schedulesExpiration;
- (void)sleepScheduleStateChangedToBedtime;
- (void)stateDidExpireWithContext:(id)arg1;
- (id)stateName;

@end
