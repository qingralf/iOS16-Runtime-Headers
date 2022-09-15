/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState

- (bool)reloadsWidgetOnModelChange;
- (bool)reloadsWidgetOnTimeChange;
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(bool)arg2;
- (void)sleepScheduleModelDidChange:(id)arg1;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;
- (id)stateName;
- (long long)widgetState;
- (bool)widgetStateHasTimeComponent;

@end