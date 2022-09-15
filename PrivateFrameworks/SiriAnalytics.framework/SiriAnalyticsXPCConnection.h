/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _xpcPublishingGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupConnection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_currentConnection;
- (void)_idleTimerFired;
- (oneway void)_publishLargeMessage:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)_publishLargeMessageToRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_publishMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)_publishMessagesToRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_resetLogicalClockWithCompletion:(id /* block */)arg1;
- (void)_resolveMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)_resolveMessagesAtRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)_vendSandboxExtensionWithResource:(int)arg1 readonly:(bool)arg2 completion:(id /* block */)arg3;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (oneway void)publishLargeMessage:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)publishMessages:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)resetLogicalClockWithCompletion:(id /* block */)arg1;
- (oneway void)resolveMessages:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (oneway void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (oneway void)vendSandboxExtensionWithResource:(int)arg1 readonly:(bool)arg2 completion:(id /* block */)arg3;

@end