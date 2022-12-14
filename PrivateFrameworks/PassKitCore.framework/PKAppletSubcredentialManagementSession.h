/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (nonatomic, retain) DAKeyManagementSession *session;

+ (id)createSessionWithDelegate:(id)arg1;

- (void)deleteCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)listCredentialsWithCompletion:(id /* block */)arg1;
- (void)listReceivedSharingInvitationsWithCompletion:(id /* block */)arg1;
- (void)listSharingInvitationsForKeyIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(id /* block */)arg6;
- (id)trackSubcredential:(id)arg1 slotIdentifier:(id)arg2 confidentialMailboxData:(id)arg3 ephemeralPublicKey:(id)arg4 withReceipt:(id)arg5;

@end
