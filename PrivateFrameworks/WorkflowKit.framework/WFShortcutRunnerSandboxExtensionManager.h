/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFShortcutRunnerSandboxExtensionManager : NSObject <WFActionSandboxExtensionProvider> {
    NSMutableSet * _issuedExtensionHandlers;
    NSMutableSet * _issuedExtensionsAccessResources;
    NSMutableSet * _resignedExtensionsAccessResources;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSMutableSet *issuedExtensionHandlers;
@property (nonatomic, copy) NSMutableSet *issuedExtensionsAccessResources;
@property (nonatomic, copy) NSMutableSet *resignedExtensionsAccessResources;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hostInterface;
- (id)initWithXPCConnection:(id)arg1;
- (id)issuedExtensionHandlers;
- (id)issuedExtensionsAccessResources;
- (void)performWithSandboxExtensions:(id)arg1 asynchronousBlock:(id /* block */)arg2;
- (void)performWithSandboxExtensions:(id)arg1 synchronousBlock:(id /* block */)arg2;
- (void)requestExtensionTokensForAccessResources:(id)arg1 completion:(id /* block */)arg2;
- (id)requestExtensionTokensForAccessResources:(id)arg1 rejectedAccessResources:(id*)arg2 error:(id*)arg3;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg1 completion:(id /* block */)arg2;
- (bool)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg1 error:(id*)arg2;
- (void)resignIssuedExtensionsWithReason:(id)arg1;
- (id)resignedExtensionsAccessResources;
- (bool)retakeResignedExtensionsWithReason:(id)arg1 error:(id*)arg2;
- (void)setIssuedExtensionHandlers:(id)arg1;
- (void)setIssuedExtensionsAccessResources:(id)arg1;
- (void)setResignedExtensionsAccessResources:(id)arg1;
- (id)synchronousHostInterface;
- (void)temporaryRequestSandboxExtensionWithBlock:(id /* block */)arg1;
- (id)xpcConnection;

@end
