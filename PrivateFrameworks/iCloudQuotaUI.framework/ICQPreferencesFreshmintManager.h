/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQPreferencesFreshmintManager : NSObject <ICQUpgradeFlowManagerDelegate> {
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    id /* block */  _freshmintFlowCompletion;
    ICQUpgradeFlowManager * _freshmintFlowManager;
    bool  _shouldShowFreshmint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ freshmintFlowCompletion;
@property (nonatomic, retain) ICQUpgradeFlowManager *freshmintFlowManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldShowFreshmint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginFlowWithDelegate:(id)arg1 offer:(id)arg2 url:(id)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (id /* block */)freshmintFlowCompletion;
- (id)freshmintFlowManager;
- (void)runFreshmintCompletionDidComplete:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFreshmintFlowCompletion:(id /* block */)arg1;
- (void)setFreshmintFlowManager:(id)arg1;
- (void)setShouldShowFreshmint:(bool)arg1;
- (bool)shouldShowFreshmint;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;

@end