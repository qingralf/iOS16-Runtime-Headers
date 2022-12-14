/* Generated by RuntimeBrowser.
 */

@protocol CPActivitySessionXPCHost

@required

- (void)associateSceneWithSceneID:(NSString *)arg1;
- (void)disassociateScene;
- (void)end;
- (void)joinWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CPDataCryptor> *, NSError *, void*
- (void)leaveWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)postEventWithEvent:(CPActivitySessionEvent *)arg1;
- (void)presentSessionDismissalAlertWithAllowingCancellation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestEncryptionKeysFor:(NSArray *)arg1;
- (void)requestForegroundPresentation;
- (void)updateActivityWithActivity:(TUConversationActivity *)arg1;

@end
