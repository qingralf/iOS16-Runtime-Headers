/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <NewsTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isClientTodayWidget;
    bool  _isiPad;
    WKWebView * _myNewsPrivacyWebView;
    NSDictionary * _transparencyDetailsDictionary;
    NSString * _transparencyDetailsUnavailableMessage;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
    UIViewController * debugViewController;
    UIBarButtonItem * leftButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NewsTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isClientTodayWidget;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myNewsPrivacyWebView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_openDebugView:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)debugDetailsViewControllerReady:(id)arg1;
- (id)delegate;
- (void)displayDebugButtonWaitingIndicator;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithNewsTransparencyDetailsDictionary:(id)arg1;
- (bool)isClientTodayWidget;
- (bool)isDeviceLocked;
- (bool)isiPad;
- (void)loadWebView;
- (id)myNewsPrivacyWebView;
- (void)presentViewDelegate;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsClientTodayWidget:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyNewsPrivacyWebView:(id)arg1;
- (void)setTransparencyDetailsDictionary:(id)arg1;
- (id)transparencyDetailsDictionary;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
