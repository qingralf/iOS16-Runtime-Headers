/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StatusKit.framework/StatusKit
 */

@interface SKPresence : NSObject <SKPresenceConnectionDelegateProtocol, SKPresenceDaemonDelegateProtocol> {
    SKPresenceDaemonConnection * _daemonConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _presenceIdentifier;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    bool  _registeredForDelegateCallbacks;
}

@property (nonatomic, retain) SKPresenceDaemonConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *invitedHandles;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSArray *presentDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) bool registeredForDelegateCallbacks;
@property (readonly) Class superclass;

+ (id)_logger;

- (void).cxx_destruct;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)arg1 block:(id /* block */)arg2;
- (void)_fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)assertPresenceWithCompletion:(id /* block */)arg1;
- (id)daemonConnection;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegates;
- (void)fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPresenceCapability:(id /* block */)arg1;
- (id)initWithPresenceIdentifier:(id)arg1;
- (void)inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandleFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandlesFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)invitedHandles;
- (void)invitedHandlesChangedForPresenceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)isHandleInvitedFromPrimaryAccountHandle:(id)arg1;
- (void)isHandleInvitedFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)presenceDaemonConnectionDidDisconnect:(id)arg1;
- (id)presenceIdentifier;
- (id)presentDevices;
- (void)presentHandlesChangedForPresenceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)privateWorkQueue;
- (bool)registeredForDelegateCallbacks;
- (void)releasePresenceWithCompletion:(id /* block */)arg1;
- (void)releaseTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeInvitedHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInvitedHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)retainTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setDelegateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDelegates:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setRegisteredForDelegateCallbacks:(bool)arg1;

@end