/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSPRXSIMTransferringViewController : PRXCardContentViewController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    UIActivityIndicatorView * _indicatorView;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIActivityIndicatorView *indicatorView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)indicatorView;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setIndicatorView:(id)arg1;

@end