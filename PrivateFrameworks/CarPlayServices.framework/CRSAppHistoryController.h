/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

@interface CRSAppHistoryController : NSObject <BSInvalidatable, CRSAppHistoryServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BSServiceConnection * _connection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)availableFeatureKeys;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (void)fetchSessionEchoContextsWithCompletion:(id /* block */)arg1;
- (void)fetchSessionFeatureKeysWithCompletion:(id /* block */)arg1;
- (void)fetchSessionUIContextsWithCompletion:(id /* block */)arg1;
- (void)fetchUIContextsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setSessionFeatureKeys:(id)arg1 completion:(id /* block */)arg2;

@end
