/* Generated by RuntimeBrowser.
 */

@protocol GTURLAccessProviderXPCDispatcher <GTXPCDispatcher>

@required

- (void)makeURL_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)securityScopedURLFromSandboxID_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;
- (void)transferIdentifier_fromDevice_completionHandler_:(NSObject<OS_xpc_object> *)arg1 replyConnection:(id <GTXPCConnection>)arg2;

@end