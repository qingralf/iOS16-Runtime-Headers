/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASCredentialRequestContainerViewController : UIViewController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    UIVisualEffectView * _blurBackgroundView;
    <ASCredentialRequestContainerViewControllerDelegate> * _delegate;
    <ASCredentialRequestPaneViewControllerDelegate> * _paneDelegate;
    UIViewController * _rootViewController;
    NSLayoutConstraint * _sheetHeightConstraint;
    NSLayoutConstraint * _sheetPresentedConstraint;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UIVisualEffectView *blurBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASCredentialRequestContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ASCredentialRequestPaneViewControllerDelegate> *paneDelegate;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPaneDelegateForViewController:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)arg1;
- (bool)_shouldDismiss;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)blurBackgroundView;
- (id)delegate;
- (id)initWithRootViewController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)paneDelegate;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)rootViewController;
- (void)setBlurBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaneDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end