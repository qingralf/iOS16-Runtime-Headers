/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITouchIDPasscodeController : PSUIBiometricController <BiometricKitDelegate, BiometricKitUIEnrollResultDelegate, UIPopoverControllerDelegate> {
    BiometricKit * _highlightMatcher;
    NSObject<OS_dispatch_queue> * _highlightQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BiometricKit *highlightMatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *highlightQueue;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (void).cxx_destruct;
- (void)_cancelMatching;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (void)_setupMatching;
- (void)addEnrollment:(id)arg1;
- (void)biometricBindingDeleted;
- (id)biometricLogo;
- (id)biometricNameDescription;
- (void)cancelModalFlow;
- (void)cancelModalFlowWithCompletion:(id /* block */)arg1;
- (void)configureBiometricTemplateMatching;
- (void)dealloc;
- (void)enrollBiometric;
- (void)enrollResult:(int)arg1 bkIdentity:(id)arg2;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (void)enrollmentControllerDidDismiss;
- (id)fingerprintSpecifiers;
- (id)headerForUseBiometricSection;
- (id)highlightMatcher;
- (id)highlightQueue;
- (id)init;
- (bool)isBiometricIdentityMatchingGovernmentIDTemplate:(id)arg1;
- (void)matchBiometricIdentitiesWithBiometricTemplates;
- (void)matchResult:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setHighlightMatcher:(id)arg1;
- (void)setHighlightQueue:(id)arg1;
- (id)specifiers;
- (void)statusMessage:(unsigned int)arg1;
- (void)suspend;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;
- (void)updateAddFingerprintSpecifier;
- (void)updateWithReplacedUUIDs:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/PreferencesUI.axbundle/PreferencesUI

+ (Class)safeCategoryBaseClass;

- (void)highlightFingerprintSpecifier:(id)arg1;

@end
