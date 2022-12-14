/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFallDetectionManagerInternal : NSObject <CMFallDetectionClientXPC> {
    <CMFallDetectionManagerInternalDelegate> * _delegate;
    CMFallDetectionClient * _fallDetectionClient;
    int  _fallDetectionNotificationToken;
    NSObject<OS_dispatch_queue> * _internalQueue;
    void * _locationdConnection;
    CMAnomalyEvent * _mostRecentEvent;
    id /* block */  _newtonPromptHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CMFallDetectionManagerInternalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fallDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CMAnomalyEvent *mostRecentEvent;
@property (nonatomic, copy) id /* block */ newtonPromptHandler;
@property (readonly) Class superclass;

+ (id)_responseDictionaryWithMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;

- (void).cxx_destruct;
- (void)_appDelegateDidFinishProcessingWithDuration:(double)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_configureLocationClientIfNeeded;
- (void)_fetchMostRecentFallEvent;
- (void)_handleAnomalyEventCompletedMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)_invalidateLocationClient;
- (void)_requestNewtonPromptWithCompletion:(id /* block */)arg1;
- (void)_requestTCCWithCompletion:(id /* block */)arg1;
- (void)_subscribeToCompletedFallEvents;
- (void)dealloc;
- (id)delegate;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;
- (bool)fallDetectionEnabled;
- (id)init;
- (id)mostRecentEvent;
- (id /* block */)newtonPromptHandler;
- (void)setDelegate:(id)arg1;
- (void)setMostRecentEvent:(id)arg1;
- (void)setNewtonPromptHandler:(id /* block */)arg1;

@end
