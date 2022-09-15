/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost
 */

@interface BLSHDiagnosticsHostPeer : NSObject <BLSDiagnosticsXPCHostInterface, BSInvalidatable> {
    <BLSDiagnosticsXPCClientInterface> * _client;
    bool  _clientIsTaskScheduled;
    int  _clientPid;
    unsigned long long  _entitlements;
    <BLSFlipbookDiagnosticsProviding> * _flipbookDiagnosticsProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_hostFrames;
    RBSProcessMonitor * _processMonitor;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lock_hostFrameForUUID:(id)arg1;
- (id)allFlipbookFrames;
- (void)dealloc;
- (id)description;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (id)hostFrameForUUID:(id)arg1;
- (unsigned long long)hostFramesCount;
- (id)initWithFlipbookDiagnosticsProvider:(id)arg1 peer:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (oneway void)releaseFrameUUID:(id)arg1;
- (oneway void)releaseSurfaceForFrameUUID:(id)arg1;
- (void)surfaceForFrameUUID:(id)arg1 reply:(id /* block */)arg2;

@end