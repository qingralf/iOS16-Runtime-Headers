/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceDelegate, GTMTLDiagnosticsServiceXPCDispatcher> {
    <GTXPCConnection> * _notifyConnection;
    <GTMTLDiagnosticsService> * _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)arg1 properties:(id)arg2 notifyConnection:(id)arg3;
- (void)notifyCommandBufferIssue:(id)arg1;
- (void)notifyDiagnosticsIssue:(id)arg1;
- (void)setDelegate_:(id)arg1 replyConnection:(id)arg2;

@end
