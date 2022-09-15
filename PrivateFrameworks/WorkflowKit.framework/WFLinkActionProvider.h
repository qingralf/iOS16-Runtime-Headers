/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLinkActionProvider : WFActionProvider {
    NSDictionary * _actionMetadataByAppIdentifier;
    NSMutableDictionary * _actionRequestToAppIntentDescriptorMap;
    NSDictionary * _entityMetadataByAppIdentifier;
    NSDictionary * _enumMetadataByAppIdentifier;
    LNMetadataProvider * _metadataProvider;
    bool  _observingInstalledApplicationsChanges;
    NSDictionary * _queryMetadataByAppIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    INSystemAppMapper * _systemAppMapper;
}

@property (nonatomic, readonly, copy) NSDictionary *actionMetadataByAppIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *actionRequestToAppIntentDescriptorMap;
@property (nonatomic, readonly, copy) NSDictionary *entityMetadataByAppIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *enumMetadataByAppIdentifier;
@property (nonatomic, readonly) LNMetadataProvider *metadataProvider;
@property (getter=isObservingInstalledApplicationsChanges, nonatomic) bool observingInstalledApplicationsChanges;
@property (nonatomic, readonly, copy) NSDictionary *queryMetadataByAppIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) INSystemAppMapper *systemAppMapper;

+ (unsigned long long)allowDenyStateForActionIdentifier:(id)arg1;
+ (id)denyListedLinkActionIdentifiers;
+ (bool)shouldAllowActionWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)actionMetadataByAppIdentifier;
- (id)actionMetadataByUpdatingWithEnumAndEntityMetadata:(id)arg1 bundleIdentifier:(id)arg2;
- (id)actionRequestToAppIntentDescriptorMap;
- (id)availabilityWithAvailabilityAnnotations:(id)arg1;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1;
- (void)createActionsForRequests:(id)arg1 allowsActionInDenyList:(bool)arg2;
- (id)createAllAvailableActions;
- (id)disabledOnPlatformsWithAvailability:(id)arg1;
- (id)entityMetadataByAppIdentifier;
- (id)enumMetadataByAppIdentifier;
- (void)handleApplicationDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithMetadataProvider:(id)arg1;
- (void)installedApplicationsDidChange:(id)arg1;
- (bool)isDiscontinuedWithAvailability:(id)arg1;
- (bool)isObservingInstalledApplicationsChanges;
- (id)linkActionWithActionRequest:(id)arg1 fullyQualifiedActionIdentifier:(id)arg2 actionMetadataByAppIdentifier:(id)arg3 enumMetadataByAppIdentifier:(id)arg4 entityMetadataByAppIdentifier:(id)arg5;
- (id)linkContentItemFilterActionWithActionRequest:(id)arg1 fullyQualifiedActionIdentifier:(id)arg2 enumMetadataByAppIdentifier:(id)arg3 entityMetadataByAppIdentifier:(id)arg4 entityMetadata:(id)arg5 queryMetadata:(id)arg6;
- (id)linkCurrentPlatformName;
- (id)metadataProvider;
- (void)observeInstalledApplicationsChangesIfNeeded;
- (id)queryMetadataByAppIdentifier;
- (id)queue;
- (void)registerCustomTypesForCoercion:(id)arg1 enumMetadataByAppIdentifier:(id)arg2 entityMetadataByAppIdentifier:(id)arg3 bundleIdentifier:(id)arg4;
- (id)resolvedActionIdentifiersForActionRequests:(id)arg1 availableActions:(id)arg2 availableEntities:(id)arg3 allowsActionInDenyList:(bool)arg4;
- (bool)serializedAppIntentDescriptorIsValid:(id)arg1;
- (void)setObservingInstalledApplicationsChanges:(bool)arg1;
- (id)systemAppMapper;

@end