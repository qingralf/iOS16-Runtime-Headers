/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface LinkPreviewViewController : UIViewController <_SFDigitalHealthHostingViewController> {
    _SFBrowserView * _browserView;
    _SFDigitalHealthViewController * _digitalHealthViewController;
    TabDocument * _previewTabDocument;
}

@property (nonatomic, readonly) _SFBrowserView *browserView;
@property (nonatomic, retain) _SFDigitalHealthViewController *digitalHealthViewController;
@property (nonatomic, readonly) _SFLinkPreviewHeader *previewHeader;
@property (nonatomic, readonly) TabDocument *previewTabDocument;

- (void).cxx_destruct;
- (id)browserView;
- (id)digitalHealthViewController;
- (void)displayHostedDigitalHealthView;
- (id)initWithTabDocument:(id)arg1;
- (void)loadView;
- (id)previewHeader;
- (id)previewTabDocument;
- (void)setDigitalHealthViewController:(id)arg1;
- (void)updatePreviewLoadingUIWithURLString:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willCommitPreviewedWebView;

@end