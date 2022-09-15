/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface PODaemonProcess : NSObject <PODaemonProtocol> {
    id /* block */  _invalidationHandler;
    POKeyWrap * _keyWrap;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ invalidationHandler;
@property (retain) POKeyWrap *keyWrap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultConfigurationPath;
- (bool)_initDataVaultIfNeededWithError:(id*)arg1;
- (void)connectionInvalidated;
- (void)deviceConfigurationForExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)disablePlatformSSORuleForScreensaver:(id /* block */)arg1;
- (void)enablePlatformSSORuleForScreensaver:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (id /* block */)invalidationHandler;
- (id)keyWrap;
- (void)loginConfigurationForExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)removeDeviceConfigurationForExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)removeLoginConfigurationForExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)removeUserConfigurationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)arg1;
- (void)saveDeviceConfiguration:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)saveLoginConfiguration:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)saveUserConfiguration:(id)arg1 forIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setKeyWrap:(id)arg1;
- (void)userConfigurationForIdentifier:(id)arg1 passwordContext:(id)arg2 completion:(id /* block */)arg3;

@end