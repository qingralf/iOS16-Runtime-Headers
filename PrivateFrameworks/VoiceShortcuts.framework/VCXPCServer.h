/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    <WFDatabaseProvider> * _databaseProvider;
    VCDaemonXPCEventHandler * _eventHandler;
    WFWorkflowRunCoordinator * _runCoordinator;
    bool  _skipEntitlementsCheck;
    VCCKShortcutSyncCoordinator * _syncCoordinator;
    <VCSyncDataEndpoint> * _syncDataEndpoint;
    WFTriggerManager * _triggerManager;
    WFTriggerRegistrar * _triggerRegistrar;
    VCVoiceShortcutManager * _voiceShortcutManager;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowRunCoordinator *runCoordinator;
@property (nonatomic, readonly) bool skipEntitlementsCheck;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (nonatomic, readonly) <VCSyncDataEndpoint> *syncDataEndpoint;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) WFTriggerRegistrar *triggerRegistrar;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)databaseProvider;
- (id)endpoint;
- (id)eventHandler;
- (id)initWithDatabaseProvider:(id)arg1 triggerRegistrar:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 runCoordinator:(id)arg5 eventHandler:(id)arg6;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 triggerRegistrar:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5 runCoordinator:(id)arg6 eventHandler:(id)arg7;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)runCoordinator;
- (bool)skipEntitlementsCheck;
- (id)syncCoordinator;
- (id)syncDataEndpoint;
- (id)triggerManager;
- (id)triggerRegistrar;
- (id)voiceShortcutManager;
- (id)xpcListener;

@end
