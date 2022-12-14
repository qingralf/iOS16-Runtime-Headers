/* Generated by RuntimeBrowser.
 */

@protocol SORemoteExtensionContextProtocol <SOExtensionContextProtocol, POExtensionRegistrationProtocol>

@required

- (void)beginAuthorizationWithRequestParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SOAuthorizationRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)beginAuthorizationWithServiceXPCEndpoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelAuthorizationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SOAuthorizationCredential *, NSError *, void*
- (void)finishAuthorizationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
