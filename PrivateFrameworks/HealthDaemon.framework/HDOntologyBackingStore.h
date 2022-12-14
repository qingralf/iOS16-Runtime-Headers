/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDOntologyBackingStore : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDProtectedResourceStore, HDProtectedResourceStoreProvider> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availabilityLock;
    bool  _available;
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _databaseLock;
    HDSimpleGraphDatabase * _graphDatabase;
    _Atomic bool  _invalidated;
    _Atomic bool  _isDatabaseOpen;
    _Atomic bool  _isObservingAssetAvailability;
    NSObject<OS_dispatch_queue> * _observationQueue;
    HKObserverSet * _observers;
    NSURL * _ontologyURL;
    HDAssertionManager * _protectedResourceAssertionManager;
    NSObject<OS_dispatch_queue> * _protectedResourceAssertionQueue;
    NSString * _threadLocalTransactionKey;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *protectedResourceIdentifier;
@property (readonly) Class superclass;

+ (id)unitTesting_ontologyBackingStoreForDaemon:(id)arg1 baseURL:(id)arg2;
+ (id)unitTesting_ontologyURLWithBaseURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDaemon:(id)arg1 baseURL:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)checkInProtectedResource:(id)arg1;
- (id)checkOutProtectedResourceWithAssertion:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (void)close;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)invalidate;
- (bool)isAvailable;
- (void)obliterateWithReason:(id)arg1;
- (bool)obliterateWithReason:(id)arg1 error:(id*)arg2;
- (bool)performOntologyTransactionForWrite:(bool)arg1 profile:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4 transactionHandler:(id /* block */)arg5;
- (void)profileListDidChange;
- (id)protectedResourceIdentifier;
- (id)protectedResourceStoreForProfile:(id)arg1;
- (void)registerOntologyDatabase:(id)arg1;
- (id)requestProtectedResourceAccessAssertionForOwnerIdentifier:(id)arg1 error:(id*)arg2;
- (id)sizeOfUnderlyingDatabaseInBytes;

@end
