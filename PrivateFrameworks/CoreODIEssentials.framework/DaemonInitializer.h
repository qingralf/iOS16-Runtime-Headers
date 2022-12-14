/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreODIEssentials.framework/CoreODIEssentials
 */

@interface DaemonInitializer : NSObject {
    NSObject<OS_os_log> * _defaultLog;
    _TtC17CoreODIEssentials29ODISystemNotificationListener * _systemNotificationListener;
    _TtC17CoreODIEssentials20ODIXPCStreamListener * _xpcStreamListener;
}

@property (nonatomic, copy) _TtC17CoreODIEssentials29ODISystemNotificationListener *systemNotificationListener;
@property (nonatomic, copy) _TtC17CoreODIEssentials20ODIXPCStreamListener *xpcStreamListener;

- (void).cxx_destruct;
- (id)init;
- (void)performLaunchTasks;
- (void)registerBackgroundActivities;
- (void)setSystemNotificationListener:(id)arg1;
- (void)setXpcStreamListener:(id)arg1;
- (void)setupListeners;
- (void)startManagersWithDelegates;
- (id)systemNotificationListener;
- (id)xpcStreamListener;

@end
