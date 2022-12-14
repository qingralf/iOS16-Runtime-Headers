/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore
 */

@interface CopresenceCore.ActivitySessionHostConnection : _TtGC14CopresenceCore17XPCHostConnectionOS_24ActivitySessionInterface_ <CPActivitySessionXPCHost> {
    void __isAppProcess;
    void delegate;
}

- (void).cxx_destruct;
- (void)associateSceneWithSceneID:(id)arg1;
- (void)disassociateScene;
- (void)end;
- (void)joinWithCompletion:(id /* block */)arg1;
- (void)leaveWithCompletion:(id /* block */)arg1;
- (void)postEventWithEvent:(id)arg1;
- (void)presentSessionDismissalAlertWithAllowingCancellation:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestEncryptionKeysFor:(id)arg1;
- (void)requestForegroundPresentation;
- (void)updateActivityWithActivity:(id)arg1;

@end
