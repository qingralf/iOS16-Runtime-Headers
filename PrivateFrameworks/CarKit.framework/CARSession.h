/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSession : NSObject <CARAppearanceManagerDelegate> {
    NSData * _MFiCertificateSerialNumber;
    bool  _activated;
    CARAppearanceManager * _appearanceManager;
    bool  _authenticated;
    bool  _clientIsCarPlayShell;
    CARSessionConfiguration * _configuration;
    struct OpaqueFigEndpoint { } * _endpoint;
    NSNumber * _fallbackNightMode;
    CARInputDeviceManager * _inputDeviceManager;
    int  _nightFallbackNotifyToken;
    CARObserverHashTable * _observers;
    bool  _requiresCarCapabilitiesValues;
    NSNumber * _systemNightMode;
}

@property (nonatomic, readonly, copy) NSData *MFiCertificateSerialNumber;
@property (getter=isActivated, nonatomic, readonly) bool activated;
@property (nonatomic, retain) CARAppearanceManager *appearanceManager;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) bool clientIsCarPlayShell;
@property (nonatomic, readonly) CARSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *electronicTollCollectionAvailable;
@property (nonatomic, retain) NSNumber *fallbackNightMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARInputDeviceManager *inputDeviceManager;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, readonly, copy) NSNumber *limitUserInterfaces;
@property (nonatomic) int nightFallbackNotifyToken;
@property (nonatomic, readonly, copy) NSNumber *nightMode;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) bool requiresCarCapabilitiesValues;
@property (nonatomic, readonly, copy) NSString *sourceVersion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *systemNightMode;

+ (long long)_siriRequestEventForEndpointAction:(id)arg1;
+ (id)_stringForNightModeNumber:(id)arg1;

- (void).cxx_destruct;
- (id)APEndPointInfo;
- (id)MFiCertificateSerialNumber;
- (id)_capabilitiesIdentifier;
- (long long)_carUserInterfaceStyleForAppearanceMode:(unsigned long long)arg1;
- (id)_endpointValueForKey:(struct __CFString { }*)arg1;
- (void)_fetchActivationStatus;
- (void)_fetchAuthenticationStatus;
- (void)_fetchFallbackIsNightWithToken:(int)arg1;
- (id)_fig_safe_description;
- (void)_handleAppearanceModeUpdateWithParameters:(id)arg1;
- (void)_handleDisplayPanelsUpdateWithParameters:(id)arg1;
- (void)_handleMapAppearanceModeUpdateWithParameters:(id)arg1;
- (void)_handleNightModeChange;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleShowUIWithParameters:(id)arg1;
- (void)_handleSiriRequestEvent:(long long)arg1 withPayload:(id)arg2;
- (void)_handleStopUIWithParameters:(id)arg1;
- (void)_handleViewAreaChangeWithPayload:(id)arg1;
- (void)_newObserverAdded:(id)arg1;
- (void)_performExtendedEndpointAction:(id /* block */)arg1;
- (bool)_sessionReady;
- (void)_setEndpointValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)_updateCarCapabilities;
- (void)_updateConfiguration;
- (void)_updateScreenInfo:(id)arg1 currentViewAreaToViewArea:(id)arg2 duration:(double)arg3 transitionControlType:(unsigned long long)arg4;
- (void)addObserver:(id)arg1;
- (id)appearanceManager;
- (void)appearanceManager:(id)arg1 didUpdateMapAppearanceStyle:(long long)arg2 forScreenUUIDs:(id)arg3;
- (void)appearanceManager:(id)arg1 didUpdateUIAppearanceStyle:(long long)arg2 forScreenUUIDs:(id)arg3;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (bool)carOwnsMainAudio;
- (bool)carOwnsScreen;
- (bool)clientIsCarPlayShell;
- (id)configuration;
- (struct OpaqueFigEndpointRemoteControlSession { }*)createRemoteControlSession:(id)arg1 withoutReply:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)description;
- (id)electronicTollCollectionAvailable;
- (struct OpaqueFigEndpoint { }*)endpoint;
- (id)fallbackNightMode;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 clientIsCarPlayShell:(bool)arg2;
- (id)inputDeviceManager;
- (bool)isActivated;
- (bool)isAuthenticated;
- (bool)isPaired;
- (id)lastNavigatingBundleIdentifier;
- (id)limitUserInterfaces;
- (long long)mapInterfaceStyleForScreenUUID:(id)arg1;
- (unsigned long long)navigationOwner;
- (int)nightFallbackNotifyToken;
- (id)nightMode;
- (id)observers;
- (bool)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)removeObserver:(id)arg1;
- (void)requestAdjacentViewAreaForScreenID:(id)arg1;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestTurnByTurnOwnership;
- (bool)requiresCarCapabilitiesValues;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (void)setAppearanceManager:(id)arg1;
- (void)setCornerMaskImageData:(id)arg1 forScreenInfo:(id)arg2;
- (void)setFallbackNightMode:(id)arg1;
- (void)setInputDeviceManager:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2;
- (void)setNightFallbackNotifyToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setRequiresCarCapabilitiesValues:(bool)arg1;
- (void)setSiriForwardingEnabled:(bool)arg1;
- (void)setSystemNightMode:(id)arg1;
- (id)sourceVersion;
- (void)suggestUI:(id)arg1;
- (id)systemNightMode;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (void)unborrowScreenForToken:(id)arg1;
- (long long)userInterfaceStyleForScreenUUID:(id)arg1;

@end