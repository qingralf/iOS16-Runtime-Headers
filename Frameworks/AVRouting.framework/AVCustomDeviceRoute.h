/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVRouting.framework/AVRouting
 */

@interface AVCustomDeviceRoute : NSObject {
    bool  _active;
    NSUUID * _bluetoothIdentifier;
    DADevice * _device;
    NSObject<OS_nw_endpoint> * _networkEndpoint;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSUUID *bluetoothIdentifier;
@property (nonatomic, retain) DADevice *device;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *networkEndpoint;

- (void).cxx_destruct;
- (id)bluetoothIdentifier;
- (id)description;
- (id)device;
- (unsigned long long)hash;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)networkEndpoint;
- (void)setActive:(bool)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setNetworkEndpoint:(id)arg1;

@end