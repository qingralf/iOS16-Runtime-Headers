/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationScheduler : NSObject {
    NSMutableDictionary * _callbackBlocks;
    NSMutableDictionary * _callbackTimers;
    CKDLogicalDeviceContext * _deviceContext;
    NSMutableSet * _operations;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _unitTestingPushTokens;
}

@property (nonatomic, retain) NSMutableDictionary *callbackBlocks;
@property (nonatomic, retain) NSMutableDictionary *callbackTimers;
@property (nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (nonatomic, retain) NSMutableSet *operations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *unitTestingPushTokens;

- (void).cxx_destruct;
- (void)_handlePushToken:(id)arg1 forContainer:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_refreshApsToken:(id)arg1 container:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)callbackBlocks;
- (id)callbackTimers;
- (void)dealloc;
- (id)deviceContext;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (id)initWithDeviceContext:(id)arg1;
- (id)operations;
- (id)queue;
- (void)refreshAllClientsNow:(bool)arg1;
- (void)registerTokenForAdopterContainer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerTokenRefreshActivity;
- (void)setCallbackBlocks:(id)arg1;
- (void)setCallbackTimers:(id)arg1;
- (void)setDeviceContext:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnitTestingPushTokens:(id)arg1;
- (void)tokenRefreshChanged;
- (id)unitTestingPushTokens;
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;

@end