/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    NSData * _advertisingAddress;
    long long  _advertisingAddressType;
    NSMutableDictionary * _cnxDict;
    CBXpcConnection * _connection;
    NSString * _localAddressString;
    NSString * _localName;
    NSData * _nonConnectableAdvertisingAddress;
    long long  _nonConnectableAdvertisingAddressType;
    CBPairingAgent * _pairingAgent;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    bool  _tccComplete;
}

@property (nonatomic, copy) NSData *advertisingAddress;
@property (nonatomic, readonly) long long advertisingAddressType;
@property (nonatomic, readonly) long long authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (nonatomic, copy) NSData *nonConnectableAdvertisingAddress;
@property (nonatomic, readonly) long long nonConnectableAdvertisingAddressType;
@property (nonatomic, readonly, retain) CBPairingAgent *sharedPairingAgent;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool tccComplete;

+ (long long)authorization;
+ (bool)tccAvailable;

- (void).cxx_destruct;
- (void)_handleAdvertisingAddressChanged:(id)arg1;
- (id)advertisingAddress;
- (long long)advertisingAddressType;
- (long long)authorization;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (id)createCnxWithInfo:(id)arg1;
- (void)dealloc;
- (void)didReceiveForwardedMessageForCBManager:(id)arg1;
- (void)doneWithTCC;
- (void)extractLocalDeviceStatesDictionary:(id)arg1;
- (bool)getCBPrivacySupported;
- (id)getCnxInstanceForIdentifier:(id)arg1;
- (id)getCurrentQueue;
- (id)getWhbLocalIdForRemoteId:(id)arg1;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)initInternal;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)localAddressString;
- (id)localName;
- (id)nonConnectableAdvertisingAddress;
- (long long)nonConnectableAdvertisingAddressType;
- (id)peerWithInfo:(id)arg1;
- (void)performTCCCheck:(id)arg1;
- (void)removeCnxInstanceForIdentifier:(id)arg1;
- (void)removeWhbRemoteId:(id)arg1;
- (void)retrieveSupportedResources:(id)arg1 subKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (bool)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (bool)sendMsg:(unsigned short)arg1 args:(id)arg2 withReply:(id /* block */)arg3;
- (bool)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setAdvertisingAddress:(id)arg1;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)setNonConnectableAdvertisingAddress:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTccComplete:(bool)arg1;
- (void)setWHBMsgReplyHandler:(id /* block */)arg1;
- (void)setWhbLocalId:(id)arg1 forRemoteId:(id)arg2;
- (id)sharedPairingAgent;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (long long)state;
- (bool)tccComplete;
- (void)triggerBTErrorReport:(long long)arg1;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end