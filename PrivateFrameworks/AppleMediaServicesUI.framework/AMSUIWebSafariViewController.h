/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebSafariViewController : AMSUICommonViewController <AMSUIWebPagePresenter, AMSUIWebSafariWebDelegate, UIAdaptivePresentationControllerDelegate, WKNavigationDelegate> {
    id /* block */  _actionHandler;
    AMSUIWebAppearance * _appearance;
    AMSUIWebClientContext * _context;
    bool  _didHandleDismiss;
    AMSUIWebSafariPageModel * _model;
    long long  _pageState;
    bool  _performingNavigation;
    UIViewController * _placeholderPage;
    bool  _shouldDismissOnCallback;
    bool  _shouldSetPresentationDelegate;
    UIToolbar * _toolbar;
    UIBarButtonItem * _toolbarLeft;
    UIBarButtonItem * _toolbarRight;
    AMSUIWebSafariWebView * _webView;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) AMSUIWebAppearance *appearance;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didHandleDismiss;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSUIWebSafariPageModel *model;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic) long long pageState;
@property (nonatomic) bool performingNavigation;
@property (nonatomic, retain) UIViewController *placeholderPage;
@property (nonatomic) bool shouldDismissOnCallback;
@property (nonatomic) bool shouldSetPresentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) UIBarButtonItem *toolbarLeft;
@property (nonatomic, readonly) UIBarButtonItem *toolbarRight;
@property (nonatomic, readonly) AMSUIWebSafariWebView *webView;

- (void).cxx_destruct;
- (void)_back:(id)arg1;
- (bool)_callActionHandlerWithURL:(id)arg1 error:(id)arg2;
- (void)_cancel:(id)arg1;
- (id)_createToolBar;
- (void)_dismiss;
- (void)_finishedLoadingWithSuccess:(bool)arg1;
- (void)_forward:(id)arg1;
- (void)_handleDismiss;
- (void)_pop;
- (void)_presentActivityViewControllerWithActivityItems:(id)arg1;
- (void)_presentPlaceholderModel:(id)arg1;
- (void)_refresh:(id)arg1;
- (void)_setupPageForWebView;
- (void)_setupSafariNavBarWithSpinner:(bool)arg1;
- (void)_share:(id)arg1;
- (void)_startErrorTimer;
- (void)_startLoadingWebView;
- (void)_transitionToErrorViewWithError:(id)arg1;
- (void)_transitionToLoading;
- (void)_transitionToWebView;
- (void)_updateButtons;
- (id /* block */)actionHandler;
- (id)appearance;
- (id)context;
- (void)dealloc;
- (bool)didHandleDismiss;
- (id)initWithContext:(id)arg1;
- (void)loadActionURL:(id)arg1 data:(id)arg2 callbackScheme:(id)arg3 actionHandler:(id /* block */)arg4;
- (void)loadView;
- (id)model;
- (id)originalURL;
- (long long)pageState;
- (bool)performingNavigation;
- (id)placeholderPage;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)receiveCallbackURL:(id)arg1;
- (void)safariView:(id)arg1 didReceiveAction:(id)arg2 body:(id)arg3 replyHandler:(id /* block */)arg4;
- (void)safariView:(id)arg1 didRedirectToSchemeWithURL:(id)arg2;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAppearance:(id)arg1;
- (void)setDidHandleDismiss:(bool)arg1;
- (void)setPageState:(long long)arg1;
- (void)setPerformingNavigation:(bool)arg1;
- (void)setPlaceholderPage:(id)arg1;
- (void)setShouldDismissOnCallback:(bool)arg1;
- (void)setShouldSetPresentationDelegate:(bool)arg1;
- (bool)shouldDismissOnCallback;
- (bool)shouldSetPresentationDelegate;
- (id)toolbar;
- (id)toolbarLeft;
- (id)toolbarRight;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end