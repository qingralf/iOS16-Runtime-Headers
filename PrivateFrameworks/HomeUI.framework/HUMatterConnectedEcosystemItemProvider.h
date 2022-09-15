/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMatterConnectedEcosystemItemProvider : HFItemProvider {
    NSMutableSet * _connectedEcosystemItems;
    HMHome * _home;
    NAFuture * _partnerEcosystemAccessoryUUIDMapFuture;
}

@property (nonatomic, retain) NSMutableSet *connectedEcosystemItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NAFuture *partnerEcosystemAccessoryUUIDMapFuture;

- (void).cxx_destruct;
- (id)connectedEcosystemItems;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)items;
- (id)partnerEcosystemAccessoryUUIDMapFuture;
- (id)reloadItems;
- (void)setConnectedEcosystemItems:(id)arg1;

@end