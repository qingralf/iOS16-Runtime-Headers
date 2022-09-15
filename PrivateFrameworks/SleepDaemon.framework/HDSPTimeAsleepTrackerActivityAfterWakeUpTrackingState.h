/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState

- (void)activityDetectedOnDate:(id)arg1;
- (void)appLaunchedOnDate:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (double)expirationDuration;
- (bool)inExpectedAutoTrackingWindow;
- (void)stateDidExpireWithContext:(id)arg1;
- (id)stateName;

@end