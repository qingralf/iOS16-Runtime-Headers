/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHandoffRunnerClient : WFWorkflowRunnerClient {
    id /* block */  _runningDidStartHandler;
}

@property (nonatomic, copy) id /* block */ runningDidStartHandler;

- (void).cxx_destruct;
- (void)handleWorkflowDidStart:(id)arg1;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithWorkflowControllerState:(id)arg1 runSource:(id)arg2 remoteDialogPresenterEndpoint:(id)arg3;
- (void)notifyStartHandlerWithProgress:(id)arg1;
- (id)runWorkflowWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)runningDidStartHandler;
- (void)setRunningDidStartHandler:(id /* block */)arg1;
- (void)startWithHandler:(id /* block */)arg1;

@end
