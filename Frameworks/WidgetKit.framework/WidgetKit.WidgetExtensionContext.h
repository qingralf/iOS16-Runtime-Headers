/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
 */

@interface WidgetKit.WidgetExtensionContext : WidgetKit._WidgetExtensionBaseContext <WidgetKit.HostToExtensionXPCInterface> {
    void previewAgent;
    void urlHandlers;
}

- (void).cxx_destruct;
- (void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(id /* block */)arg3;
- (void)getActivitiesWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)arg1;
- (void)getPlaceholdersWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)getTimelinesWithRequests:(id)arg1 isPreview:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleURLSessionEventsFor:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)invalidate;
- (void)performCleanup;

@end