/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (id)init;
- (void)locked_establishConnection;
- (id)submitQuery:(id)arg1 withError:(id*)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
