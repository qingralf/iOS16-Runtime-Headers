/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPUploaderEndpoint : NSObject {
    UARPAccessory * _accessory;
    NSMutableArray * _infoQuery;
    NSObject<OS_os_log> * _log;
    unsigned long long  _queriedProperty;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _rxAssets;
    NSMutableArray * _txAssets;
    NSObject<OS_dispatch_source> * _txWatchdogInfoTimer;
    NSObject<OS_dispatch_source> * _txWatchdogTimer;
    struct uarpPlatformRemoteEndpoint { 
        struct uarpPlatformOptionsObj { 
            unsigned int maxTxPayloadLength; 
            unsigned int maxRxPayloadLength; 
            unsigned int payloadWindowLength; 
            unsigned short protocolVersion; 
            unsigned char reofferFirmwareOnSync; 
        } _options; 
        void *pDelegate; 
        unsigned short selectedProtocolVersion; 
        unsigned char isWatchdogSet; 
        int _remoteEndpointID; 
        unsigned char dataTransferAllowed; 
        unsigned short txMsgID; 
        unsigned short lastRxMsgID; 
        struct UARPStatistics { 
            unsigned int packetsNoVersionAgreement; 
            unsigned int packetsMissed; 
            unsigned int packetsDuplicate; 
            unsigned int packetsOutOfOrder; 
        } uarpStats; 
        struct uarpPlatformRemoteEndpoint {} *pNext; 
    }  _uarpEndpoint;
    struct uarpPlatformOptionsObj { 
        unsigned int maxTxPayloadLength; 
        unsigned int maxRxPayloadLength; 
        unsigned int payloadWindowLength; 
        unsigned short protocolVersion; 
        unsigned char reofferFirmwareOnSync; 
    }  _uarpOptions;
    unsigned long long  _uarpVersion;
}

@property (readonly) UARPAccessory *accessory;
@property unsigned long long queriedProperty;
@property (readonly) NSArray *rxAssets;
@property (readonly) NSArray *txAssets;
@property (readonly) struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; } x1; void *x2; unsigned short x3; unsigned char x4; int x5; unsigned char x6; unsigned short x7; unsigned short x8; struct UARPStatistics { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct uarpPlatformRemoteEndpoint {} *x10; }*uarpEndpoint;
@property (readonly) struct uarpPlatformOptionsObj { unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned char x5; }*uarpOptions;
@property unsigned long long uarpVersion;

- (void).cxx_destruct;
- (id)accessory;
- (void)addRxAsset:(id)arg1;
- (void)addTxAsset:(id)arg1;
- (void)cancelTxWatchdogInfoTimer;
- (void)cancelTxWatchdogTimer;
- (void)dealloc;
- (id)findMatch:(id)arg1;
- (bool)firstQueryInfoProperty:(unsigned long long*)arg1;
- (void)handleTxWatchdogInfoTimer:(id)arg1;
- (void)handleTxWatchdogTimer:(id)arg1;
- (id)initWithUARPAccessory:(id)arg1;
- (void)qCancelTxWatchdogInfoTimer;
- (void)qCancelTxWatchdogTimer;
- (unsigned long long)queriedProperty;
- (void)queueQueryInfoProperty:(unsigned long long)arg1;
- (void)rmvRxAsset:(id)arg1;
- (void)rmvTxAsset:(id)arg1;
- (id)rxAssets;
- (void)setQueriedProperty:(unsigned long long)arg1;
- (void)setTxWatchdogInfoTimer:(id)arg1 timeoutMS:(unsigned long long)arg2;
- (void)setTxWatchdogTimer:(id)arg1 timeoutMS:(unsigned long long)arg2;
- (void)setUarpVersion:(unsigned long long)arg1;
- (id)txAssets;
- (struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; } x1; void *x2; unsigned short x3; unsigned char x4; int x5; unsigned char x6; unsigned short x7; unsigned short x8; struct UARPStatistics { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; struct uarpPlatformRemoteEndpoint {} *x10; }*)uarpEndpoint;
- (struct uarpPlatformOptionsObj { unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned char x5; }*)uarpOptions;
- (unsigned long long)uarpVersion;

@end
