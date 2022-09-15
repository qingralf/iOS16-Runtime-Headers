/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (bool)checkInWithError:(id*)arg1;
- (id)init;
- (void)locked_establishConnection;
- (bool)runFullPipelineWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (bool)stopPipelineWithError:(id*)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end