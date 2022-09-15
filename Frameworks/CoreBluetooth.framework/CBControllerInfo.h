/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBControllerInfo : NSObject <CUXPCCodable> {
    NSArray * _audioLinkQualityArray;
    long long  _bluetoothState;
    NSString * _chipsetID;
    int  _discoverableState;
    NSString * _firmwareName;
    NSString * _firmwareVersion;
    NSData * _hardwareAddressData;
    BOOL  _hciTransportType;
    int  _inquiryState;
    NSError * _lastChipsetInitError;
    unsigned char  _lmpVersion;
    unsigned int  _productID;
    unsigned int  _supportedServices;
    unsigned short  _vendorID;
    unsigned char  _vendorIDSource;
}

@property (nonatomic, copy) NSArray *audioLinkQualityArray;
@property (nonatomic) long long bluetoothState;
@property (nonatomic, copy) NSString *chipsetID;
@property (nonatomic) int discoverableState;
@property (nonatomic, copy) NSString *firmwareName;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, copy) NSData *hardwareAddressData;
@property (nonatomic) BOOL hciTransportType;
@property (nonatomic) int inquiryState;
@property (nonatomic, copy) NSError *lastChipsetInitError;
@property (nonatomic) unsigned char lmpVersion;
@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned int supportedServices;
@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned char vendorIDSource;

- (void).cxx_destruct;
- (id)audioLinkQualityArray;
- (long long)bluetoothState;
- (id)chipsetID;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (int)discoverableState;
- (void)encodeWithXPCObject:(id)arg1;
- (id)firmwareName;
- (id)firmwareVersion;
- (id)hardwareAddressData;
- (BOOL)hciTransportType;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (int)inquiryState;
- (id)lastChipsetInitError;
- (unsigned char)lmpVersion;
- (unsigned int)productID;
- (void)setAudioLinkQualityArray:(id)arg1;
- (void)setBluetoothState:(long long)arg1;
- (void)setChipsetID:(id)arg1;
- (void)setDiscoverableState:(int)arg1;
- (void)setFirmwareName:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHardwareAddressData:(id)arg1;
- (void)setHciTransportType:(BOOL)arg1;
- (void)setInquiryState:(int)arg1;
- (void)setLastChipsetInitError:(id)arg1;
- (void)setLmpVersion:(unsigned char)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setSupportedServices:(unsigned int)arg1;
- (void)setVendorID:(unsigned short)arg1;
- (void)setVendorIDSource:(unsigned char)arg1;
- (unsigned int)supportedServices;
- (unsigned short)vendorID;
- (unsigned char)vendorIDSource;

@end