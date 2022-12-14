/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider> {
    GTServiceConnection * _connection;
    NSUUID * _deviceUUID;
    NSSet * _ignoreMethods;
}

- (void).cxx_destruct;
- (id)allServices;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (void)registerService:(id)arg1 forProcess:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)waitForService:(id)arg1;

@end
