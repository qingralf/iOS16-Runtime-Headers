/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting> {
    <BYCapabilities> * _capabilities;
    NSMutableSet * _completedFlowIdentifiers;
    id /* block */  _completion;
    NSMutableArray * _flowIdentifiers;
    FLFollowUpAction * _followUpAction;
    BFFFinishSetupModalNavigationController * _navigationController;
    UIViewController * _newRootViewController;
    id /* block */  _overrideFlowControllerGenerator;
    bool  _setupInProgress;
    NSMutableSet * _skippedFlowIdentifiers;
}

@property (nonatomic, retain) <BYCapabilities> *capabilities;

+ (id)_keyValueDictionaryForURL:(id)arg1;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_complete;
- (void)_didSatisfyInitializationForFlowController:(id)arg1;
- (void)_didSatisfyPreconditionsForFlowController:(id)arg1;
- (void)_ensureNavigationControllerWithViewController:(id)arg1 pushCompletion:(id /* block */)arg2;
- (id)_flowControllerForFlowIdentifier:(id)arg1;
- (id)_flowControllerForNextFlowIdentifier;
- (void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2;
- (void)_performExtendedInitializationForFlowController:(id)arg1;
- (bool)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1;
- (void)_pushViewControllerOntoNavigationController:(id)arg1 completion:(id /* block */)arg2;
- (void)_startNextFlowIdentifier;
- (id)capabilities;
- (bool)didCompleteFlowInFinishSetup:(id)arg1;
- (bool)didSkipFlowInFinishSetup:(id)arg1;
- (id)init;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (void)processURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setCapabilities:(id)arg1;
- (void)setOverrideFlowControllerGenerator:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end