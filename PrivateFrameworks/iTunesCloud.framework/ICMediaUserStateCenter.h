/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaUserStateCenter : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSArray * _allUserStates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) ICMediaUserState *activeUserState;
@property (nonatomic, copy) NSArray *allUserStates;

+ (id)shared;

- (void).cxx_destruct;
- (id)_establishClientConnection;
- (id)_getUserStatesForcingRefresh:(bool)arg1;
- (void)_onAsyncServer:(id /* block */)arg1;
- (void)_onSyncServer:(id /* block */)arg1;
- (id)activeUserState;
- (id)allUserStates;
- (void)applyServerStateUpdatedWithUserStates:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)refreshUserStatesWithCompletion:(id /* block */)arg1;
- (void)setAllUserStates:(id)arg1;

@end