/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {
    <LSApplicationWorkspaceObserverProtocol> * _delegate;
    id /* block */  _handler;
    NSMutableSet * _interestedBundleIDs;
    RBSProcessMonitor * _processMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LSApplicationWorkspaceObserverProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *interestedBundleIDs;
@property (nonatomic, retain) RBSProcessMonitor *processMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id /* block */)handler;
- (id)init;
- (id)interestedBundleIDs;
- (bool)observingStateChangesForBundleID:(id)arg1;
- (id)processMonitor;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setInterestedBundleIDs:(id)arg1;
- (void)setProcessMonitor:(id)arg1;
- (void)startObservingApplicationWorkspaceChanges;
- (void)startObservingStateChangesForBundleID:(id)arg1;

@end