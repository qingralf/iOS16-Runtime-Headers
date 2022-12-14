/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject {
    struct __CFSet { } * _auxAudioSessions;
    AirPlayControllerServer * _controllerServer;
    int  _hijackIDChangedNotifyToken;
    unsigned char  _isAirPlayReceiverMRNowPlayingApp;
    unsigned char  _isAmbientAudioActive;
    unsigned char  _isHandlingMRCommands;
    unsigned char  _isMediaAudioActive;
    unsigned char  _isMuted;
    unsigned char  _isScreenActive;
    unsigned char  _isVideoActive;
    int  _lockDownActivationStateToken;
    int  _managedDefaultsChangedNotificationToken;
    struct __CFSet { } * _mediaAudioSessions;
    AirPlayReceiverMediaRemoteHelper * _mediaRemoteHelper;
    struct __CFSet { } * _mediaVideoSessions;
    int  _playbackAllowNotifyToken;
    int  _playbackPreventNotifyToken;
    unsigned char  _playbackPrevented;
    int  _prefChangedNotifyToken;
    unsigned long long  _receiverSessionCount;
    struct __CFSet { } * _screenSessions;
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; void *x2; id x3; int x4; struct OpaqueAPAdvertiser {} *x5; struct OpaqueAPConnectivityHelper {} *x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; struct HTTPServerPrivate {} *x12; id x13; struct HTTPServerPrivate {} *x14; unsigned char x15[16]; float x16; unsigned char x17; int x18; unsigned char x19; unsigned char x20; id x21; unsigned int x22; unsigned long long x23; struct OpaqueAPReceiverSystemInfo {} *x24; unsigned char x25; unsigned char x26; struct __CFDictionary {} *x27; struct __CFDictionary {} *x28; struct __CFDictionary {} *x29; unsigned int x30; int x31; unsigned int x32; struct APReceiverSessionManagerOpaque {} *x33; struct OpaqueFigValeria {} *x34; int (*x35)(); struct __CFString {} *x36; unsigned char x37; unsigned char x38; unsigned char x39; unsigned char x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; } * _server;
    unsigned long long  _stalledSessionCount;
    int  _systemBufferSamples;
    int  _systemSampleRate;
    int  _uiErrorNotifyToken;
    unsigned char  _useMediaRemotePerPlayerAPI;
    unsigned char  _voiceForSiri;
    unsigned char  _voiceForTelephony;
    float  _volumeSliderValue;
    float  _volumeSliderValueBeforeMute;
    NSString * _wifiDECaptureUUID;
    DEExtension * _wifiDiagnosticExtension;
}

@property (nonatomic) unsigned char isAmbientAudioActive;
@property (nonatomic) unsigned char isMediaAudioActive;
@property (nonatomic) unsigned char isScreenActive;
@property (nonatomic) unsigned char isVideoActive;

- (void)_avSystemControllerConnectionDied:(id)arg1;
- (void)_avSystemControllerVolumeChanged:(id)arg1;
- (void)_avSystemControllerVolumeConfigChanged:(id)arg1;
- (void)_handleAVAudioSessionInterruption:(id)arg1;
- (void)_handleAVAudioSessionServicesLost:(id)arg1;
- (void)_handleAVAudioSessionServicesReset:(id)arg1;
- (void)_handleNowPlayingAppStartedPlaying:(id)arg1;
- (void)_handleVolumeControlTypeChange;
- (void)_registerAVSystemControllerNotifications;
- (void)_registerAVSystemControllerNotificationsAndFetchInitialStates;
- (void)_unregisterAVSystemControllerNotifications;
- (void)_updateMediaSessionActivationStateBasedOnMediaAudioActiveState:(unsigned char)arg1 andVideoActiveState:(unsigned char)arg2;
- (void)handleMRCommand:(unsigned int)arg1 translatedAPCommand:(unsigned int)arg2 withOptions:(struct __CFDictionary { }*)arg3;
- (unsigned char)isAmbientAudioActive;
- (unsigned char)isMediaAudioActive;
- (unsigned char)isScreenActive;
- (unsigned char)isVideoActive;
- (void)setIsAmbientAudioActive:(unsigned char)arg1;
- (void)setIsMediaAudioActive:(unsigned char)arg1;
- (void)setIsScreenActive:(unsigned char)arg1;
- (void)setIsVideoActive:(unsigned char)arg1;
- (void)setReceiverSessionCountAndUpdateStateIfNeeded:(unsigned long long)arg1;
- (void)updateActiveSessionRegistration:(struct AirPlayReceiverSessionPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; struct AirPlayReceiverServerPrivate {} *x3; struct OpaqueAPReceiverRequestProcessor {} *x4; struct APReceiverSessionManagerOpaque {} *x5; void *x6; struct { void *x_7_1_1; void *x_7_1_2; int (*x_7_1_3)(); int (*x_7_1_4)(); int (*x_7_1_5)(); int (*x_7_1_6)(); int (*x_7_1_7)(); int (*x_7_1_8)(); } x7; BOOL x8[32]; BOOL x9[17]; struct OpaqueAPReceiverStatsCollector {} *x10; id x11; unsigned int x12; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_13_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_13_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_13_1_3; } x13; }*)arg1 regType:(int)arg2 regOp:(int)arg3;
- (void)updateMRNowPlayingAppState;

@end
