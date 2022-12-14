/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQRemoteUpgradeFlowManager : NSObject {
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    ICQUpgradeFlowManager * _flowManager;
    ICQUpgradeFlowOptions * _flowOptions;
    bool  _isPresented;
    ICQRemoteUIDataLoader * _loader;
    ICQOffer * _offer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _presentationLock;
    ICQRemoteContext * _remoteContext;
}

@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (nonatomic) ICQUpgradeFlowManager *flowManager;
@property (nonatomic, copy) ICQUpgradeFlowOptions *flowOptions;
@property (nonatomic) bool isPresented;
@property (nonatomic, retain) ICQRemoteUIDataLoader *loader;
@property (nonatomic, retain) ICQOffer *offer;
@property (nonatomic, retain) ICQRemoteContext *remoteContext;

+ (void)commonHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)renewCredentialsWithCompletion:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)beginRemoteFlow;
- (id)delegate;
- (id)flowManager;
- (id)flowOptions;
- (id)init;
- (bool)isPresented;
- (id)loader;
- (id)offer;
- (id)remoteContext;
- (void)setDelegate:(id)arg1;
- (void)setFlowManager:(id)arg1;
- (void)setFlowOptions:(id)arg1;
- (void)setIsPresented:(bool)arg1;
- (void)setLoader:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setRemoteContext:(id)arg1;
- (void)startUpsellWithOffer:(id)arg1 preloadedRemoteUIData:(id)arg2 error:(id)arg3;

@end
