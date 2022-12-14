/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NISession : NSObject <ARInternalSessionObserver, UWBSessionDelegateProxyProtocol> {
    NSDictionary * _activationResponse;
    NICarKeyEventNotifier * _carKeyEventNotifier;
    NIServerConnection * _connection;
    unsigned long long  _connectionOptions;
    NIConfiguration * _currentConfiguration;
    <NISessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NIDevicePresenceNotifier * _devicePresenceNotifier;
    NIDiscoveryToken * _discoveryToken;
    double  _duration;
    NIExportedObjectForwarder * _exportedObjectForwarder;
    <NIInternalSessionDelegate> * _internalDelegate;
    NSUUID * _internalID;
    int  _internalState;
    struct vector<UWBSessionInterruptionBookkeeping, std::allocator<UWBSessionInterruptionBookkeeping>> { 
        struct UWBSessionInterruptionBookkeeping {} *__begin_; 
        struct UWBSessionInterruptionBookkeeping {} *__end_; 
        struct __compressed_pair<UWBSessionInterruptionBookkeeping *, std::allocator<UWBSessionInterruptionBookkeeping>> { 
            struct UWBSessionInterruptionBookkeeping {} *__value_; 
        } __end_cap_; 
    }  _interruptions;
    NSError * _invalidationError;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _isObserverSession;
    NSObject<OS_os_log> * _log;
    long long  _motionState;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
    NSObject<OS_dispatch_queue> * _queue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _readyForCallbacks;
    double  _startTime;
    bool  _updatedNearbyObjects;
    NISessionVisionContext * _visionContext;
}

@property (retain) NSDictionary *activationResponse;
@property (readonly) NICarKeyEventNotifier *carKeyEventNotifier;
@property (nonatomic, readonly, copy) NIConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NISessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NIDevicePresenceNotifier *devicePresenceNotifier;
@property (nonatomic, readonly, copy) NIDiscoveryToken *discoveryToken;
@property (readonly) unsigned long long hash;
@property <NIInternalSessionDelegate> *internalDelegate;
@property int internalState;
@property (retain) NSError *invalidationError;
@property (readonly) long long motionState;
@property (getter=isRangingLimitExceeded, readonly) bool rangingLimitExceeded;
@property long long rangingPriorityPolicy;
@property (readonly) Class superclass;

+ (id)_createOneShotConnectionAndResume:(bool)arg1;
+ (void)_queryAndCacheCapabilities;
+ (bool)_supportedPlatform:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)cachedPlatformCapabilities;
+ (id)deviceCapabilities;
+ (id)internalDeviceCapabilities;
+ (bool)isSupported;
+ (id)observerSession;
+ (void)setCachedPlatformCapabilities:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activate:(bool)arg1;
- (void)_activateAsync;
- (void)_activateSyncOnConnectionQueue;
- (void)_addObject:(id)arg1;
- (void)_addRegionPredicate:(id)arg1;
- (void)_configureAndRunInternalARSession;
- (id)_getSessionFailureError;
- (void)_handleARSession:(id)arg1 willRunWithConfiguration:(id)arg2;
- (void)_handleARSessionDidChangeState:(unsigned long long)arg1;
- (void)_handleARSessionDidFailWithError:(id)arg1;
- (void)_handleARSessionDidUpdateFrame:(id)arg1;
- (void)_handleARSessionInterruptionEnded;
- (void)_handleARSessionWasInterrupted;
- (void)_handleActivationError:(id)arg1;
- (void)_handleActivationSuccess:(id)arg1;
- (void)_handlePauseSessionError:(id)arg1;
- (void)_handlePauseSessionSuccess;
- (void)_handleRunSessionError:(id)arg1;
- (void)_handleRunSessionSuccess;
- (id)_initAndConnectToServerWithOptions:(unsigned long long)arg1;
- (void)_interruptSessionWithInternalReason:(long long)arg1 onConnectionQueue:(bool)arg2 cachedInterruption:(bool)arg3;
- (void)_invalidateInternalARSessionIfNeeded;
- (void)_invalidateInternalOnConnectionQueue:(bool)arg1;
- (void)_invalidateSessionInternalWithError:(id)arg1;
- (bool)_isInternalClient;
- (bool)_isValidARSession:(id)arg1 andConfiguration:(id)arg2;
- (void)_logDurationAndSubmit:(bool)arg1;
- (void)_logTime;
- (void)_notifyDidInvalidateWithError:(id)arg1;
- (void)_notifySessionHasFailed;
- (void)_pauseInternalARSessionIfNeeded;
- (void)_pauseInternalOnConnectionQueue:(bool)arg1;
- (void)_performBlockOnDelegateQueue:(id /* block */)arg1 ifRespondsToSelector:(SEL)arg2;
- (void)_performBlockOnDelegateQueue:(id /* block */)arg1 ifRespondsToSelector:(SEL)arg2 evenIfNotRunning:(bool)arg3;
- (void)_provideTruthTag:(id)arg1;
- (void)_reinterruptSessionWithCachedInterruption;
- (id)_remoteObject;
- (void)_removeObject:(id)arg1;
- (void)_removeRegionPredicate:(id)arg1;
- (void)_serverConnectionInterrupted;
- (void)_serverConnectionInvalidated;
- (id)_setDebugURSK:(id)arg1 transactionIdentifier:(unsigned int)arg2;
- (id)_setURSKTTL:(unsigned long long)arg1;
- (void)_submitErrorMetric:(id)arg1;
- (id)_synchronousRemoteObject;
- (id)_verifyError:(id)arg1;
- (id)activationResponse;
- (id)carKeyEventNotifier;
- (id)configuration;
- (id)delegate;
- (id)delegateQueue;
- (id)deleteURSKs;
- (id)description;
- (id)devicePresenceNotifier;
- (void)didDiscoverNearbyObject:(id)arg1;
- (void)didGenerateRangingAuthSessionToken:(id)arg1;
- (void)didGenerateShareableConfigurationData:(id)arg1 forObject:(id)arg2;
- (void)didReceiveRangingAuthRecommendation:(bool)arg1 forObject:(id)arg2;
- (void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;
- (void)didUpdateAlgorithmState:(id)arg1 forObject:(id)arg2;
- (void)didUpdateHealthStatus:(long long)arg1;
- (void)didUpdateHomeDeviceUWBRangingAvailability:(bool)arg1;
- (void)didUpdateMotionState:(long long)arg1;
- (void)didUpdateNearbyObjects:(id)arg1;
- (id)discoveryToken;
- (unsigned long long)hash;
- (id)init;
- (id)internalDelegate;
- (int)internalState;
- (void)invalidate;
- (id)invalidationError;
- (bool)isEqual:(id)arg1;
- (bool)isRangingLimitExceeded;
- (double)lightEstimateFromARLightEstimate:(id)arg1;
- (long long)motionState;
- (long long)niVisionInputTrackingStateFromARTRackingState:(long long)arg1;
- (void)object:(id)arg1 didUpdateRegion:(id)arg2 previousRegion:(id)arg3;
- (void)pause;
- (void)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2;
- (void)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2 eventCounter:(unsigned long long)arg3;
- (void)processDCKMessage:(id)arg1 responseCallback:(id /* block */)arg2;
- (void)processVisionInput:(id)arg1;
- (long long)rangingPriorityPolicy;
- (void)relayDCKMessage:(id)arg1;
- (void)runWithConfiguration:(id)arg1;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateExternalAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionShouldAttemptRelocalization:(id)arg1 completion:(id /* block */)arg2;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setARSession:(id)arg1;
- (void)setActivationResponse:(id)arg1;
- (void)setConfigurationForTesting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalState:(int)arg1;
- (void)setInvalidationError:(id)arg1;
- (void)setRangingPriorityPolicy:(long long)arg1;
- (void)updateResponderDeviceIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uwbSessionDidFailWithError:(id)arg1;
- (void)uwbSessionDidInvalidateWithError:(id)arg1;
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransformForObject:(id)arg1;

@end
