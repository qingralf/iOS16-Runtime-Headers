/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPeer : NSObject {
    GEOProxyClient * _clientIdentifier;
    NSObject<OS_xpc_object> * _connection;
    GEODaemon * _daemon;
    NSString * _debugIdentifier;
    NSMutableDictionary * _entitlementCache;
    NSMutableDictionary * _entitlementValueCache;
    unsigned long long  _handleRequestSignpost;
    NSString * _peerID;
    <NSObject> * _peerTransaction;
    bool  _preloading;
    bool  _preloadingExclusively;
    <NSObject> * _preloadingTransaction;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) GEOProxyClient *clientIdentifier;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, retain) NSMutableDictionary *entitlementCache;
@property (nonatomic) unsigned long long handleRequestSignpost;
@property (nonatomic, readonly) bool isLocationd;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic) bool preloading;
@property (nonatomic) bool preloadingExclusively;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)clientIdentifier;
- (id)connection;
- (void)dealloc;
- (id)debugIdentifier;
- (id)description;
- (id)entitlementCache;
- (unsigned long long)handleRequestSignpost;
- (bool)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 daemon:(id)arg2;
- (bool)isLocationd;
- (id)peerID;
- (bool)preloading;
- (bool)preloadingExclusively;
- (void)setDebugIdentifier:(id)arg1;
- (void)setEntitlementCache:(id)arg1;
- (void)setHandleRequestSignpost:(unsigned long long)arg1;
- (void)setPreloading:(bool)arg1;
- (void)setPreloadingExclusively:(bool)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
