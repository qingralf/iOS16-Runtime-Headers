/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriKitRuntime.framework/SiriKitRuntime
 */

@interface SiriKitRuntime.RemoteConversationService : _TtCs12_SwiftObject <SKRRemoteConversationXPC> {
    void asyncUpdateQueue;
    void flowPlugin;
    void flowPluginBundle;
    void pluginId;
    void referenceResolutionClient;
    void siriKitRuntime;
    void state;
}

- (void)acceptInitialInputWithInputIdentifier:(id)arg1 rcId:(id)arg2 asrOnDevice:(bool)arg3 userSpecificInfo:(id)arg4 speechPackage:(id)arg5 reply:(id /* block */)arg6;
- (void)acceptWithInputData:(id)arg1 rcId:(id)arg2 asrOnDevice:(bool)arg3 userSpecificInfo:(id)arg4 speechPackage:(id)arg5 reply:(id /* block */)arg6;
- (void)canHandleWithInputData:(id)arg1 reply:(id /* block */)arg2;
- (void)cancelWithReply:(id /* block */)arg1;
- (void)commitWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)drainAsyncWorkWithReply:(id /* block */)arg1;
- (void)ensureReadyWithReply:(id /* block */)arg1;
- (void)isEmptyWithReply:(id /* block */)arg1;
- (void)prepareWithBridge:(id)arg1 reply:(id /* block */)arg2;
- (void)resetWithReply:(id /* block */)arg1;
- (void)startTurnWithTurnData:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;
- (void)warmupWithRefId:(id)arg1 reply:(id /* block */)arg2;

@end
