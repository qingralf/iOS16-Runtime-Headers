/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRecoveryKeyEntryViewModel : NSObject {
    id /* block */  _completionHandler;
    CDPContext * _context;
    bool  _isFooterForVerifyFlow;
    int  _mode;
    <CDPRemoteDeviceSecretValidatorProtocol> * _secretValidator;
    bool  _shouldSuppressCancelButton;
    <CDPRecoveryKeyValidator> * _validator;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property bool isFooterForVerifyFlow;
@property (readonly) int mode;
@property bool shouldSuppressCancelButton;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (void)handleCancel;
- (void)handleForgotRecoveryKeyWithCDPStateError:(long long)arg1;
- (void)handleNoRecoveryKeyWithCDPStateError:(long long)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;
- (bool)isFooterForVerifyFlow;
- (bool)mandatesRecoveryKey;
- (int)mode;
- (id)placeholderText;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (id)recoveryKey;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsFooterForVerifyFlow:(bool)arg1;
- (void)setShouldSuppressCancelButton:(bool)arg1;
- (bool)shouldSuppressCancelButton;
- (bool)supportsRKRecovery;

@end