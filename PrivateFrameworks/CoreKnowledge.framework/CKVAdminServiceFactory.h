/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider> {
    CKVTaskController * _daemonTaskController;
    CKVIndexManager * _indexManager;
    NSObject<KVDonateServiceProvider> * _serviceProvider;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    CKVTaskHandler * _taskHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 donateTaskProvider:(id)arg4 coalescenceManager:(id)arg5 daemonTaskController:(id)arg6 adminTaskController:(id)arg7 serviceProvider:(id)arg8;

@end