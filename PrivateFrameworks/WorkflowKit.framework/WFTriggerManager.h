/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFTriggerManager : NSObject {
    WFDatabase * _database;
}

@property (nonatomic, readonly) WFDatabase *database;

- (void).cxx_destruct;
- (id)allConfiguredTriggers;
- (id)configuredTriggerWithID:(id)arg1;
- (id)database;
- (void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(bool)arg2 completion:(id /* block */)arg3;
- (void)disableAllTriggers;
- (void)disableTriggersWithIdentifiers:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 notifyDaemon:(bool)arg3 completion:(id /* block */)arg4;
- (void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(bool)arg3 completion:(id /* block */)arg4;
- (bool)updateNotificationLevel:(int)arg1 forConfiguredTrigger:(id)arg2 error:(id*)arg3;

@end