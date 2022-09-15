/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSWallpaperObserver : NSObject <BSInvalidatable, PRSWallpaperObserving> {
    NSString * _active_observedDescription;
    NSMutableDictionary * _conn_configurationByIdentity;
    PRSServerPosterIdentity * _conn_identityLocations;
    NSString * _explanation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_clientActivated;
    bool  _lock_clientInvalidated;
    BSServiceConnection<BSServiceConnectionClient> * _lock_connection;
    id /* block */  _lock_handler;
    RBSAssertion * _lock_initialUpdateAssertion;
    bool  _lock_initialUpdateWasSent;
    bool  _lock_invalidated;
    unsigned long long  _observed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_invalidate;
- (void)activateWithConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithExplanation:(id)arg1;
- (void)invalidate;
- (oneway void)notifyWallpaperUpdates:(id)arg1;

@end