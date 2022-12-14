/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO
 */

@interface POExtension : NSObject <POExtensionRegistrationProtocol, SOExtensionDelegate> {
    <POExtensionDelegate> * _delegate;
    SOExtension * _extension;
    SORemoteExtensionViewController * _extensionViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property <POExtensionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)beginUserRegistrationUsingUserName:(id)arg1 authenticationMethod:(int)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (id)initWithExtensionBundleIdentifier:(id)arg1;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(id /* block */)arg2;
- (void)registrationDidComplete;
- (void)setDelegate:(id)arg1;
- (void)unload;

@end
