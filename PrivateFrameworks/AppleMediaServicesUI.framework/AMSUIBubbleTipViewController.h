/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIBubbleTipViewController : UIViewController <AMSUICommonTextViewDelegate, AMSUIMessageViewController> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    <AMSUIMessageViewControllerDelegate> * _delegate;
    bool  _didEnqueueMetrics;
    AMSUIBubbleTipInlineAnchorInfo * _inlineAnchorInfo;
    bool  _isLoadingImage;
    bool  _isSelfSizing;
    AMSBinaryPromise * _loadPromise;
    UIImage * _loadedImage;
    AMSUIBubbleTipAppearance * _preferredAppearance;
    AMSDialogRequest * _request;
    AMSUIBubbleTipAppearance * _requestAppearance;
    bool  _shouldAutomaticallyReportMetrics;
}

@property struct CGPoint { double x1; double x2; } anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIMessageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didEnqueueMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (nonatomic) bool isLoadingImage;
@property (nonatomic) bool isSelfSizing;
@property (nonatomic, retain) AMSBinaryPromise *loadPromise;
@property (nonatomic, retain) UIImage *loadedImage;
@property (nonatomic, retain) AMSUIBubbleTipAppearance *preferredAppearance;
@property (nonatomic, retain) AMSDialogRequest *request;
@property (nonatomic, retain) AMSUIBubbleTipAppearance *requestAppearance;
@property (nonatomic) bool shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitAppearance;
- (void)_didTapActionButton:(id)arg1;
- (void)_endObservations;
- (id)_messageLabelAttributes;
- (unsigned long long)_messageViewStyle;
- (void)_notifyMetricsFields:(id)arg1;
- (void)_preloadImageIfNeeded;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)arg1;
- (void)_setImageWithURL:(id)arg1;
- (void)_startObservations;
- (id)_titleLabelAttributes;
- (void)_updateArrowProperties;
- (void)_updateSelfSizedContentSize;
- (void)_updateTextWithAttributes;
- (void)ams_textViewDidUpdatePreferredContentSizeCategory:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)dealloc;
- (id)delegate;
- (bool)didEnqueueMetrics;
- (unsigned long long)directionForAMSUIPopoverArrowDirection:(unsigned long long)arg1;
- (void)enqueueImpressionMetrics;
- (id)initWithRequest:(id)arg1;
- (id)inlineAnchorInfo;
- (bool)isLoadingImage;
- (bool)isSelfSizing;
- (id)loadPromise;
- (void)loadView;
- (id)loadedImage;
- (id)messageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredAppearance;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)request;
- (id)requestAppearance;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidEnqueueMetrics:(bool)arg1;
- (void)setInlineAnchorInfo:(id)arg1;
- (void)setIsLoadingImage:(bool)arg1;
- (void)setIsSelfSizing:(bool)arg1;
- (void)setLoadPromise:(id)arg1;
- (void)setLoadedImage:(id)arg1;
- (void)setPreferredAppearance:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestAppearance:(id)arg1;
- (void)setShouldAutomaticallyReportMetrics:(bool)arg1;
- (bool)shouldAutomaticallyReportMetrics;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
