/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPUploaderUARP : UARPUploader {
    NSMutableArray * _accessories;
    NSMutableArray * _assets;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    struct uarpPlatformEndpoint { 
        struct uarpPlatformOptionsObj { 
            unsigned int maxTxPayloadLength; 
            unsigned int maxRxPayloadLength; 
            unsigned int payloadWindowLength; 
            unsigned short protocolVersion; 
            unsigned char reofferFirmwareOnSync; 
        } _options; 
        void *pVendorExtension; 
        struct uarpPlatformEndpointCallbacks { 
            int (*fRequestBuffer)(); 
            int (*fReturnBuffer)(); 
            int (*fRequestTransmitMsgBuffer)(); 
            int (*fReturnTransmitMsgBuffer)(); 
            int (*fSendMessage)(); 
            int (*fDataTransferPause)(); 
            int (*fDataTransferPauseAck)(); 
            int (*fDataTransferResume)(); 
            int (*fDataTransferResumeAck)(); 
            int (*fSuperBinaryOffered)(); 
            int (*fDynamicAssetOffered)(); 
            int (*fApplyStagedAssets)(); 
            int (*fApplyStagedAssetsResponse)(); 
            int (*fManufacturerName)(); 
            int (*fManufacturerNameResponse)(); 
            int (*fModelName)(); 
            int (*fModelNameResponse)(); 
            int (*fSerialNumber)(); 
            int (*fSerialNumberResponse)(); 
            int (*fHardwareVersion)(); 
            int (*fHardwareVersionResponse)(); 
            int (*fActiveFirmwareVersion2)(); 
            int (*fActiveFirmwareVersionResponse)(); 
            int (*fStagedFirmwareVersion2)(); 
            int (*fStagedFirmwareVersionResponse)(); 
            int (*fLastError)(); 
            int (*fLastErrorResponse)(); 
            int (*fStatisticsResponse)(); 
            int (*fAssetSolicitation)(); 
            int (*fRescindAllAssets)(); 
            int (*fRescindAllAssetsAck)(); 
            int (*fTxWatchdogSet)(); 
            int (*fTxWatchdogCancel)(); 
            int (*fProtocolVersion)(); 
            int (*fFriendlyName)(); 
            int (*fFriendlyNameResponse)(); 
            int (*fDecompressBuffer)(); 
            int (*fCompressBuffer)(); 
            int (*fHashInfo)(); 
            int (*fHashInit)(); 
            int (*fHashUpdate)(); 
            int (*fHashFinal)(); 
            int (*fHashLog)(); 
        } protectedCallbacks; 
        void *pDelegate; 
        int role; 
        struct uarpPlatformRemoteEndpoint {} *pRemoteEPs; 
        struct uarpPlatformAsset {} *pAssetList; 
        int nextTxAssetID; 
        unsigned char rxLock; 
        int nextRemoteEndpointID; 
        int (*fVendorSpecific)(); 
    }  _uarpEndpoint;
    struct uarpPlatformEndpointApple { 
        unsigned char supportsPersonalization; 
        unsigned char supportsHeySiri; 
        unsigned char supportsVoiceAssist; 
        struct uarpPlatformEndpointAppleCallbacks { 
            int (*fAppleModelNumber)(); 
            int (*fAppleModelNumberResponse)(); 
            int (*fHwFusingType)(); 
            int (*fHwFusingTypeResponse)(); 
        } callbacks; 
    }  _uarpVendorExtension;
}

@property (readonly) struct uarpPlatformEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; } x1; void *x2; struct uarpPlatformEndpointCallbacks { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); int (*x_3_1_4)(); int (*x_3_1_5)(); int (*x_3_1_6)(); int (*x_3_1_7)(); int (*x_3_1_8)(); int (*x_3_1_9)(); int (*x_3_1_10)(); int (*x_3_1_11)(); int (*x_3_1_12)(); int (*x_3_1_13)(); int (*x_3_1_14)(); int (*x_3_1_15)(); int (*x_3_1_16)(); int (*x_3_1_17)(); int (*x_3_1_18)(); int (*x_3_1_19)(); int (*x_3_1_20)(); int (*x_3_1_21)(); int (*x_3_1_22)(); int (*x_3_1_23)(); int (*x_3_1_24)(); int (*x_3_1_25)(); int (*x_3_1_26)(); int (*x_3_1_27)(); int (*x_3_1_28)(); int (*x_3_1_29)(); int (*x_3_1_30)(); int (*x_3_1_31)(); int (*x_3_1_32)(); int (*x_3_1_33)(); int (*x_3_1_34)(); int (*x_3_1_35)(); int (*x_3_1_36)(); int (*x_3_1_37)(); int (*x_3_1_38)(); int (*x_3_1_39)(); int (*x_3_1_40)(); int (*x_3_1_41)(); int (*x_3_1_42)(); int (*x_3_1_43)(); } x3; void *x4; int x5; }*uarpEndpoint;
@property (readonly) struct uarpPlatformEndpointApple { unsigned char x1; unsigned char x2; unsigned char x3; struct uarpPlatformEndpointAppleCallbacks { int (*x_4_1_1)(); int (*x_4_1_2)(); int (*x_4_1_3)(); int (*x_4_1_4)(); } x4; }*uarpVendorExtension;

- (void).cxx_destruct;
- (bool)accessoryReachable:(id)arg1 error:(id*)arg2;
- (bool)accessoryUnreachable:(id)arg1 error:(id*)arg2;
- (bool)addAccessory:(id)arg1 error:(id*)arg2;
- (void)applyStagedAssetStatus:(id)arg1 status:(unsigned long long)arg2;
- (bool)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (void)assetRelease:(id)arg1 asset:(id)arg2;
- (void)assetSolicitationComplete:(id)arg1 asset:(id)arg2 status:(unsigned long long)arg3;
- (void)assetSolicitationProgress:(id)arg1 asset:(id)arg2 offset:(unsigned long long)arg3 assetLength:(unsigned long long)arg4;
- (void)assetStagingComplete:(id)arg1 asset:(id)arg2 status:(unsigned long long)arg3;
- (bool)cancelAssetStagingForAccessory:(id)arg1 asset:(id)arg2;
- (bool)genericNotification:(id)arg1 notificationName:(id)arg2 error:(id*)arg3;
- (id)init;
- (bool)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (void)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 internalOffer:(bool)arg3 tag:(id)arg4;
- (bool)pauseAssetTransfersForAccessory:(id)arg1;
- (void)processDynamicAssetHeySiriCompact:(id)arg1;
- (void)processDynamicAssetVoiceAssist:(id)arg1;
- (void)protocolVersionSelected:(id)arg1 protocolVersion:(unsigned short)arg2;
- (id)qFindRemoteEndpointForAccessory:(id)arg1;
- (void)queryFirmwareUpdateResultForAccessory:(id)arg1;
- (void)queryNextInfoProperty:(id)arg1;
- (long long)queryProperty:(unsigned long long)arg1 forAccessory:(id)arg2;
- (bool)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)removeAccessory:(id)arg1 error:(id*)arg2;
- (unsigned int)requestBytesInRangeForAccessory:(id)arg1 asset:(id)arg2 bytes:(void*)arg3 length:(unsigned int)arg4 offset:(unsigned int)arg5 bytesCopied:(unsigned int*)arg6 offsetUsed:(unsigned int*)arg7;
- (void)rescindAssets:(id)arg1;
- (void)rescindStagedAssetsAck:(id)arg1 asset:(id)arg2;
- (bool)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)resumeAssetTransfersForAccessory:(id)arg1;
- (void)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2;
- (bool)setController:(id)arg1;
- (bool)solicitDynamicAssetForAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)solicitDynamicAssetForAccessory:(id)arg1 asset:(id)arg2 internalSolicit:(bool)arg3 error:(id*)arg4;
- (bool)solicitDynamicAssetForAccessory:(id)arg1 assetTag:(id)arg2 error:(id*)arg3;
- (bool)supplementalAssetUpdated:(id)arg1 assetName:(id)arg2 error:(id*)arg3;
- (void)transferPauseAck:(id)arg1;
- (void)transferResumeAck:(id)arg1;
- (struct uarpPlatformEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; } x1; void *x2; struct uarpPlatformEndpointCallbacks { int (*x_3_1_1)(); int (*x_3_1_2)(); int (*x_3_1_3)(); int (*x_3_1_4)(); int (*x_3_1_5)(); int (*x_3_1_6)(); int (*x_3_1_7)(); int (*x_3_1_8)(); int (*x_3_1_9)(); int (*x_3_1_10)(); int (*x_3_1_11)(); int (*x_3_1_12)(); int (*x_3_1_13)(); int (*x_3_1_14)(); int (*x_3_1_15)(); int (*x_3_1_16)(); int (*x_3_1_17)(); int (*x_3_1_18)(); int (*x_3_1_19)(); int (*x_3_1_20)(); int (*x_3_1_21)(); int (*x_3_1_22)(); int (*x_3_1_23)(); int (*x_3_1_24)(); int (*x_3_1_25)(); int (*x_3_1_26)(); int (*x_3_1_27)(); int (*x_3_1_28)(); int (*x_3_1_29)(); int (*x_3_1_30)(); int (*x_3_1_31)(); int (*x_3_1_32)(); int (*x_3_1_33)(); int (*x_3_1_34)(); int (*x_3_1_35)(); int (*x_3_1_36)(); int (*x_3_1_37)(); int (*x_3_1_38)(); int (*x_3_1_39)(); int (*x_3_1_40)(); int (*x_3_1_41)(); int (*x_3_1_42)(); int (*x_3_1_43)(); } x3; void *x4; int x5; }*)uarpEndpoint;
- (struct uarpPlatformEndpointApple { unsigned char x1; unsigned char x2; unsigned char x3; struct uarpPlatformEndpointAppleCallbacks { int (*x_4_1_1)(); int (*x_4_1_2)(); int (*x_4_1_3)(); int (*x_4_1_4)(); } x4; }*)uarpVendorExtension;
- (bool)unsolicitedDynamicAssetForAccessory:(id)arg1 assetTag:(id)arg2 error:(id*)arg3;
- (void)updateActiveFirmwareVersion:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateAppleModelNumber:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateFriendlyName:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateHardwareFusingType:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateHardwareVersion:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateLastError:(unsigned long long)arg1 remoteEndpoint:(id)arg2;
- (void)updateManufacturerName:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateModelName:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateSerialNumber:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateStagedFirmwareVersion:(id)arg1 remoteEndpoint:(id)arg2;
- (void)updateStatistics:(id)arg1 remoteEndpoint:(id)arg2;
- (void)watchdogExpireInfoQuery:(id)arg1;
- (void)watchdogExpireTransmitQueue:(id)arg1;

@end
