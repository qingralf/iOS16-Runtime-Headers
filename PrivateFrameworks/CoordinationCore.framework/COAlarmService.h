/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COAlarmService : COService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate> {
    COClientObserverSet * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COClientObserverSet *observers;
@property (readonly) Class superclass;

+ (bool)_isAllowedClient:(id)arg1;
+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (bool)_canRequestCreationOfCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)_didResetAlarmAddOn:(id)arg1;
- (void)_postNotificationName:(id)arg1 forAlarms:(id)arg2 toAddOn:(id)arg3 requiresUserInfo:(bool)arg4;
- (void)addAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(id /* block */)arg6;
- (void)addObserverForNotificationName:(id)arg1 constraints:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(id /* block */)arg5;
- (void)alarmAddOn:(id)arg1 didAddAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didChangeAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didChangeFiringAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didDismissAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didFireAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)alarmAddOn:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)alarmsforAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(id /* block */)arg5;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(id /* block */)arg5;
- (void)didChangeCompositionForAlarmAddOn:(id)arg1;
- (void)didResetAlarmAddOn:(id)arg1;
- (void)dismissAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (id)observers;
- (void)removeAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(id /* block */)arg6;
- (void)removeObserverForNotificationName:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (void)snoozeAlarmWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (void)updateAlarm:(id)arg1 forAccessoryUniqueIdentifier:(id)arg2 categoryType:(id)arg3 asInstance:(id)arg4 cluster:(id)arg5 withCallback:(id /* block */)arg6;

@end