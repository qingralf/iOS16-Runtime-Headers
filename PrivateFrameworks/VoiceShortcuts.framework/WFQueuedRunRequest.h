/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface WFQueuedRunRequest : NSObject {
    id /* block */  _completionHandler;
    WFWorkflowRunDescriptor * _descriptor;
    WFWorkflowRunRequest * _runRequest;
    WFWorkflowRunningContext * _runningContext;
    bool  _shouldNotifyObservers;
    unsigned long long  _type;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) WFWorkflowRunDescriptor *descriptor;
@property (nonatomic, readonly) WFWorkflowRunRequest *runRequest;
@property (nonatomic, readonly) WFWorkflowRunningContext *runningContext;
@property (nonatomic, readonly) bool shouldNotifyObservers;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSObject<OS_voucher> *voucher;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)descriptor;
- (id)initWithType:(unsigned long long)arg1 descriptor:(id)arg2 runRequest:(id)arg3 runningContext:(id)arg4 voucher:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)runRequest;
- (id)runningContext;
- (bool)shouldNotifyObservers;
- (unsigned long long)type;
- (id)voucher;

@end
