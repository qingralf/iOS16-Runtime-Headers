/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon> {
    CKDLogicalDeviceContext * _deviceContext;
}

@property (nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void).cxx_destruct;
- (void)addClouddThrottle:(id)arg1;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)arg1;
- (void)clearAllClouddThrottles;
- (id)deviceContext;
- (id)initWithDeviceContext:(id)arg1;
- (void)setDeviceContext:(id)arg1;

@end