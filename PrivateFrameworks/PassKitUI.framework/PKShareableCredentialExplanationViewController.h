/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKShareableCredentialExplanationViewController : PKPassShareRedemptionViewController <NFRemoteAdminEventListener, PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentServiceDelegate, PKPaymentSetupViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate> {
    PKAddShareablePassConfiguration * _configuration;
    long long  _context;
    NSArray * _credentials;
    PKSharingPushProvisioningInvitation * _invitation;
    bool  _isRunningInForeground;
    bool  _isUnifiedAccessPass;
    LAContext * _localAuthenticationContext;
    NSObject<OS_dispatch_source> * _lostModeTimeout;
    PKShareableCredentialsMessageComposeViewController * _messageComposeViewController;
    PKAssertion * _notificationSupressionAssertion;
    UIImage * _passThumbnailImage;
    NSMutableDictionary * _passToMoreItems;
    PKPaymentService * _paymentService;
    PKAssertion * _provisioningAssertion;
    NSString * _provisioningTemplateIdentifier;
    PKSecureElement * _secureElement;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (nonatomic, retain) PKAddShareablePassConfiguration *configuration;
@property (nonatomic, retain) NSArray *credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKSharingPushProvisioningInvitation *invitation;
@property (nonatomic) bool isRunningInForeground;
@property (nonatomic, retain) PKShareableCredentialsMessageComposeViewController *messageComposeViewController;
@property (nonatomic, retain) PKAssertion *notificationSupressionAssertion;
@property (nonatomic, retain) UIImage *passThumbnailImage;
@property (nonatomic, retain) NSMutableDictionary *passToMoreItems;
@property (nonatomic, retain) PKAssertion *provisioningAssertion;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireAssertions;
- (void)_confirmSecurityCapabilities;
- (void)_confirmUserIsNotInLostMode;
- (void)_finishProvisioningFlowWithAddedPasses:(id)arg1 moreInfoItems:(id)arg2;
- (void)_handleProvisioningFailureWithError:(id)arg1;
- (void)_invalidateAssertions;
- (void)_loadPassThumbnail;
- (void)_provisionCredentials:(id)arg1;
- (bool)_shouldRelinquishShareInvitationForError:(id)arg1;
- (void)_showExitingLostModeUI;
- (void)_showMoreInfoViewControllerForPasses:(id)arg1 withItems:(id)arg2 showExpressEducationIfPresent:(bool)arg3 completion:(id /* block */)arg4;
- (bool)_showProvisioningErrorWithNumberOfPassesFailed:(long long)arg1 error:(id)arg2;
- (void)_startProvisioning;
- (void)_terminateSetupFlowWithPasses:(id)arg1 error:(id)arg2;
- (void)activationCodeDidChangeToCode:(id)arg1;
- (void)appletStateChange:(id)arg1;
- (void)cancelButtonPressed;
- (id)configuration;
- (void)continueButtonPressed;
- (id)credentials;
- (void)dealloc;
- (id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 credentials:(id)arg3 configuration:(id)arg4;
- (id)invitation;
- (bool)isRunningInForeground;
- (id)messageComposeViewController;
- (void)messageComposeViewControllerDidFinishWithResult:(bool)arg1;
- (id)notificationSupressionAssertion;
- (id)passThumbnailImage;
- (id)passToMoreItems;
- (id)provisioningAssertion;
- (void)setConfiguration:(id)arg1;
- (void)setCredentials:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setIsRunningInForeground:(bool)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setNotificationSupressionAssertion:(id)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPassToMoreItems:(id)arg1;
- (void)setProvisioningAssertion:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)viewController:(id)arg1 didFinishWithPasses:(id)arg2 error:(id)arg3;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end
