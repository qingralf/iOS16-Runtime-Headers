/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService
 */

@interface SiriTTSAudioHardware : NSObject {
    bool  _isAppleProduct;
    bool  _isBluetooth;
    long long  _productId;
    NSString * _routeType;
    long long  _vendorId;
}

@property (readonly) bool isAppleProduct;
@property (readonly) bool isBluetooth;
@property (readonly) long long productId;
@property (readonly) NSString *routeType;
@property (readonly) long long vendorId;

+ (id)defaultOutput;

- (void).cxx_destruct;
- (void)fetchHardwareInfo;
- (bool)isAppleProduct;
- (bool)isBluetooth;
- (long long)productId;
- (id)routeType;
- (long long)vendorId;

@end
