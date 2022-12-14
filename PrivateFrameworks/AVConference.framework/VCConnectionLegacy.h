/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol> {
    struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; } * _connectionResult;
    int  _priority;
    unsigned int  _type;
    bool  _waitToBeNominated;
    bool  isLocalConstrained;
    bool  isLocalDelegated;
    bool  isLocalExpensive;
    bool  isLocalOn5G;
    bool  isRemoteConstrained;
    bool  isRemoteDelegated;
    bool  isRemoteExpensive;
    bool  isRemoteOn5G;
    bool  isVirtualRelayLink;
    int  maxConnectionMTU;
}

@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*connectionResult;
@property (readonly) NSUUID *connectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEndToEndLink;
@property (readonly) bool isIPv6;
@property (readonly) bool isLocalConstrained;
@property (readonly) bool isLocalDelegated;
@property (readonly) bool isLocalExpensive;
@property (readonly) bool isLocalOn5G;
@property (readonly) bool isLocalOnCellular;
@property (readonly) bool isLocalOnWiFi;
@property (readonly) bool isRelay;
@property (readonly) bool isRemoteConstrained;
@property (readonly) bool isRemoteDelegated;
@property (readonly) bool isRemoteExpensive;
@property (readonly) bool isRemoteOn5G;
@property (readonly) bool isRemoteOnCellular;
@property (readonly) bool isRemoteOnWiFi;
@property (readonly) bool isReplaceOnly;
@property (readonly) bool isUpgraded;
@property (readonly) bool isVPN;
@property (readonly) bool isVirtualRelayLink;
@property (readonly) bool isWifiToWifi;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceName;
@property (readonly) NSString *localInterfaceTypeString;
@property int maxConnectionMTU;
@property int priority;
@property (readonly) unsigned short relayChannelNumber;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) bool serverIsDegraded;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int uplinkBitrateCapOneToOne;
@property bool waitToBeNominated;

- (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; })IPPortForNWConnection:(id)arg1;
- (int)cellularMTU;
- (int)connectionId;
- (int)connectionMTU;
- (struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)connectionResult;
- (id)connectionUUID;
- (id)copy;
- (void)dealloc;
- (id)description;
- (unsigned int)downlinkBitrateCap;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; int x_2_2_2; struct tagIPPORT { int x_3_3_1; BOOL x_3_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_3_3_3; unsigned short x_3_3_4; } x_2_2_3; int x_2_2_4; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned char x_2_3_3; unsigned short x_2_3_4; unsigned char x_2_3_5; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; } x_2_1_4; } x2; unsigned int x3; struct tagVCSourceDestinationInfo {} *x4; void *x5; }*)arg1;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; unsigned char x_1_1_4[8]; unsigned short x_1_1_5; unsigned short x_1_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_1_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_1_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_1_1_9; unsigned int x_1_1_10; } x1; struct tagCANDIDATE { int x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; unsigned char x_2_1_4[8]; unsigned short x_2_1_5; unsigned short x_2_1_6; struct tagIPPORT { int x_7_2_1; BOOL x_7_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_7_2_3; unsigned short x_7_2_4; } x_2_1_7; struct tagIPPORT { int x_8_2_1; BOOL x_8_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_8_2_3; unsigned short x_8_2_4; } x_2_1_8; struct tagIPPORT { int x_9_2_1; BOOL x_9_2_2[16]; union { unsigned int x_3_3_1; unsigned char x_3_3_2[16]; } x_9_2_3; unsigned short x_9_2_4; } x_2_1_9; unsigned int x_2_1_10; } x2; }*)arg1;
- (id)initWithConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1 type:(unsigned int)arg2;
- (id)ipportToString:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isEndToEndLink;
- (bool)isIPv6;
- (bool)isLocalConstrained;
- (bool)isLocalDelegated;
- (bool)isLocalExpensive;
- (bool)isLocalIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isLocalOn5G;
- (bool)isLocalOnCellular;
- (bool)isLocalOnWiFi;
- (bool)isOnSameIPPortWithConnection:(id)arg1;
- (bool)isOnSameInterfacesWithConnection:(id)arg1;
- (bool)isRelay;
- (bool)isRemoteConstrained;
- (bool)isRemoteDelegated;
- (bool)isRemoteExpensive;
- (bool)isRemoteIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (bool)isRemoteOn5G;
- (bool)isRemoteOnCellular;
- (bool)isRemoteOnWiFi;
- (bool)isReplaceOnly;
- (bool)isSameAsConnection:(id)arg1;
- (bool)isUpgraded;
- (bool)isVPN;
- (bool)isVirtualRelayLink;
- (bool)isWifiToWifi;
- (int)localCellTech;
- (int)localConnectionType;
- (id)localInterfaceName;
- (id)localInterfaceTypeString;
- (bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; int x_2_2_2; struct tagIPPORT { int x_3_3_1; BOOL x_3_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_3_3_3; unsigned short x_3_3_4; } x_2_2_3; int x_2_2_4; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned char x_2_3_3; unsigned short x_2_3_4; unsigned char x_2_3_5; } x_3_2_2; } x_2_1_3; struct { id x_4_2_1; } x_2_1_4; } x2; unsigned int x3; struct tagVCSourceDestinationInfo {} *x4; void *x5; }*)arg1;
- (int)maxConnectionMTU;
- (int)priority;
- (unsigned short)relayChannelNumber;
- (int)remoteCellTech;
- (int)remoteConnectionType;
- (id)remoteInterfaceTypeString;
- (bool)serverIsDegraded;
- (void)setConnectionMTU:(int)arg1;
- (void)setDownlinkBitrateCap:(unsigned int)arg1;
- (void)setLocalCellTech:(int)arg1;
- (void)setMaxConnectionMTU:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRemoteCellTech:(int)arg1;
- (void)setUplinkAudioBitrateCapOneToOne:(unsigned int)arg1;
- (void)setUplinkBitrateCap:(unsigned int)arg1;
- (void)setUplinkBitrateCapOneToOne:(unsigned int)arg1;
- (void)setWaitToBeNominated:(bool)arg1;
- (unsigned int)type;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;
- (unsigned int)uplinkAudioBitrateCapOneToOne;
- (unsigned int)uplinkBitrateCap;
- (unsigned int)uplinkBitrateCapOneToOne;
- (bool)waitToBeNominated;

@end
