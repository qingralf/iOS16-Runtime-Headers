/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;
- (id)expirationDate;
- (void)retryAttemptEventDue;
- (id)stateName;

@end
