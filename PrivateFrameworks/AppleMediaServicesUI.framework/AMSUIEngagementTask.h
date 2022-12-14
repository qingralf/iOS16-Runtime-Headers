/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIEngagementTask : AMSTask <AMSBagConsumer, AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate, PRXFlowDelegate> {
    bool  _allowMultiplePresentations;
    <AMSBagProtocol> * _bag;
    UIViewController * _cachedNavigationController;
    AMSProcessInfo * _clientInfo;
    NSError * _error;
    bool  _finished;
    bool  _presented;
    UIViewController * _presentingViewController;
    bool  _remotePresentation;
    AMSEngagementRequest * _request;
    AMSEngagementResult * _result;
    bool  _running;
    AMSUIEngagementTaskViewController * _taskController;
}

@property (nonatomic) bool allowMultiplePresentations;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) UIViewController *cachedNavigationController;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presented;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) bool remotePresentation;
@property (nonatomic, retain) AMSEngagementRequest *request;
@property (nonatomic, retain) AMSEngagementResult *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIEngagementTaskViewController *taskController;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_infoWithBuyParams:(id)arg1 additionalInfo:(id)arg2;
- (bool)_isRemotePresentationEnabled;
- (bool)_isRemoteViewService;
- (bool)_isWindowPresentation;
- (long long)_modalPresentationStyle;
- (id)_presentEngagementLocally;
- (id)_presentEngagementRemotely;
- (id)_presentTaskController;
- (id)_presentViewController:(id)arg1 dismissBlock:(id /* block */)arg2;
- (bool)allowMultiplePresentations;
- (id)bag;
- (id)cachedNavigationController;
- (id)clientInfo;
- (id)error;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 presentingViewController:(id)arg3;
- (bool)isFinished;
- (bool)isRunning;
- (id)presentEngagement;
- (bool)presented;
- (id)presentingViewController;
- (bool)remotePresentation;
- (id)request;
- (id)result;
- (void)setAllowMultiplePresentations:(bool)arg1;
- (void)setBag:(id)arg1;
- (void)setCachedNavigationController:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPresented:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRemotePresentation:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTaskController:(id)arg1;
- (id)taskController;

@end
