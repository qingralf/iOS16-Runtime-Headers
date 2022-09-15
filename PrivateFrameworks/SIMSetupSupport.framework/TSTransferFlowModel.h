/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSTransferFlowModel : NSObject {
    bool  _areTransferPlansReady;
    CTDisplayPlanList * _carrierSetupItems;
    bool  _hasCarrierSetupItemsQueried;
    bool  _hasPendingInstallPlansQueried;
    bool  _isActivationPolicyMismatch;
    bool  _isBootstrapTriggerred;
    bool  _isDualeSIMCapablityLoss;
    bool  _isProximityFlow;
    bool  _isStandaloneProximityTransfer;
    CTDisplayPlanList * _pendingInstallItems;
    NSDictionary * _postdata;
    bool  _showTransferredPane;
    NSMutableArray * _transferItems;
    NSString * _websheetUrl;
}

@property (nonatomic, retain) CTDisplayPlanList *carrierSetupItems;
@property (nonatomic) bool isActivationPolicyMismatch;
@property (nonatomic) bool isDualeSIMCapablityLoss;
@property (nonatomic) bool isStandaloneProximityTransfer;
@property (nonatomic, retain) CTDisplayPlanList *pendingInstallItems;
@property (nonatomic, retain) NSDictionary *postdata;
@property (nonatomic) bool showTransferredPane;
@property (nonatomic, retain) NSMutableArray *transferItems;
@property (nonatomic, retain) NSString *websheetUrl;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)arePlansAvailable:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;
- (bool)arePlansRequested;
- (void)bootstrap:(id)arg1 completion:(id /* block */)arg2;
- (id)carrierSetupItems;
- (void)clearCache;
- (void)filterCarrierSetupItems:(id)arg1;
- (void)filterTransferPlans:(id)arg1;
- (void)getWebsheetInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIsStandaloneProximityTransfer:(bool)arg1;
- (bool)isActivationPolicyMismatch;
- (bool)isDualeSIMCapablityLoss;
- (bool)isStandaloneProximityTransfer;
- (id)pendingInstallItems;
- (id)postdata;
- (void)requestCarrierSetups:(id /* block */)arg1;
- (void)requestPendingInstallPlans:(id /* block */)arg1;
- (void)requestPlans:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;
- (void)requestTransferPlans:(id /* block */)arg1;
- (void)setCarrierSetupItems:(id)arg1;
- (void)setIsActivationPolicyMismatch:(bool)arg1;
- (void)setIsDualeSIMCapablityLoss:(bool)arg1;
- (void)setIsStandaloneProximityTransfer:(bool)arg1;
- (void)setPendingInstallItems:(id)arg1;
- (void)setPostdata:(id)arg1;
- (void)setShowTransferredPane:(bool)arg1;
- (void)setTransferItems:(id)arg1;
- (void)setWebsheetUrl:(id)arg1;
- (bool)shouldShowCarrierSetupPane;
- (bool)shouldShowTransferredPane;
- (bool)showTransferredPane;
- (id)transferItems;
- (id)websheetUrl;

@end