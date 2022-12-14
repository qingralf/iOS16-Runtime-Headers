/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LocalAuthenticationEmbeddedUI.framework/LocalAuthenticationEmbeddedUI
 */

@interface LAAuthorizationViewController : UIViewController <_AuthorizationRemoteViewControllerHostDelegate> {
    LAAuthenticatorServiceConfiguration * _configuration;
    <LAAuthorizationViewControllerDelegate> * _delegate;
    _AuthorizationRemoteViewControllerHost * _remoteVC;
}

@property (readonly, copy) NSString *debugDescription;
@property <LAAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (id)configuration;
- (id)delegate;
- (void)didProvideAuthorizationRequirementWithReply:(id /* block */)arg1;
- (void)dismiss;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (void)setDelegate:(id)arg1;
- (void)sheetDidFinishWithError:(id)arg1;

@end
