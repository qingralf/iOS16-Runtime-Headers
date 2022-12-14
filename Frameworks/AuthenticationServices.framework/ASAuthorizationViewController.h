/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestContainerViewControllerDelegate, ASCredentialRequestPaneViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate> {
    <ASAuthorizationViewControllerDelegate> * _delegate;
    ASNavigationController * _navigationController;
    ASCAuthorizationPresentationContext * _presentationContext;
    SFWirelessSettingsController * _wirelessSettingsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activateSecurityKeySubtitleText;
- (id)_cableClientViewControllerWithLoginChoice:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_enableBluetoothAndShowCABLEClientViewControllerWithLoginChoice:(id)arg1;
- (void)_enableBluetoothAndShowCABLEConnectingViewController;
- (id)_initialViewControllerForPresentationContext:(id)arg1;
- (id)_initialViewControllerForPresentationContext:(id)arg1 expandingOtherLoginChoices:(bool)arg2;
- (void)_presentManualPasswordEntryInterface;
- (void)_presentPINEntryInterface;
- (void)_pushCABLEAuthenticatingViewController;
- (void)_pushCABLEAuthenticatorCredentialPickerViewControllerWithPresentationContext:(id)arg1;
- (void)_pushCABLEClientViewControllerForCABLELoginChoice:(id)arg1;
- (void)_pushCABLEConnectingViewController;
- (void)_pushSecurityKeyViewController;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)arg1;
- (id)_securityKeyRequestViewController;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)arg1;
- (id)_securityKeyTitleText;
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)arg1;
- (id)_setUpInitialViewController;
- (void)_showCABLEAuthenticatorError:(id)arg1;
- (void)_showEnableBluetoothViewControllerForCABLEAuthenticator;
- (void)_showEnableBluetoothViewControllerForCABLEClientWithLoginChoice:(id)arg1;
- (id)_signInBarButtonItem;
- (void)_startCABLEAuthenticator;
- (void)_startCABLEAuthenticatorOnInitialPresentationIfNeeded;
- (void)_startCABLEClientForSingleLoginChoiceIfNeeded;
- (void)_startCABLEClientWithLoginChoice:(id)arg1;
- (void)_updateOrPushPlatformKeyViewControllerWithSubtitle:(id)arg1;
- (void)_updateOrPushSecurityKeyViewControllerWithSubtitle:(id)arg1;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (id)delegate;
- (id)initWithPresentationContext:(id)arg1;
- (long long)modalPresentationStyle;
- (id)navigationController;
- (void)passwordAuthenticationViewController:(id)arg1 completedWithManuallyEnteredPasswordCredential:(id)arg2;
- (void)passwordAuthenticationViewController:(id)arg1 validateUserEnteredPIN:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPINEntryInterface;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)arg1;
- (void)requestContainerViewControllerDidDismiss:(id)arg1;
- (void)requestPaneViewController:(id)arg1 didRequestCredentialForLoginChoice:(id)arg2 authenticatedContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestPaneViewController:(id)arg1 dismissWithCredential:(id)arg2 error:(id)arg3;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(id)arg1;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)arg1;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)arg1;
- (void)requestPaneViewControllerStartCABLEAuthentication:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateInterfaceWithLoginChoices:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
