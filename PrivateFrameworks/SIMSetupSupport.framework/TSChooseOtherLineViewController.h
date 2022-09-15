/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSChooseOtherLineViewController : TSOBWelcomeController <TSSetupFlowItem> {
    UIViewController * _hostController;
    NSString * _iccid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UIViewController *hostController;
@property (nonatomic, retain) NSString *iccid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchPlanItems:(id /* block */)arg1;
- (id)hostController;
- (id)iccid;
- (id)initWithHostController:(id)arg1 iccid:(id)arg2;
- (void)maybeShowDisableLineAlert:(id /* block */)arg1;
- (void)prepare:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setIccid:(id)arg1;

@end