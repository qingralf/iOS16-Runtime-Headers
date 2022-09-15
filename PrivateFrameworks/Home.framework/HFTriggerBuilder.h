/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerBuilder : HFItemBuilder <HFComparable> {
    HFConditionCollection * _conditionCollection;
    <HFTriggerBuilderContextProviding> * _context;
    NSString * _displayName;
    bool  _enabled;
    HFMutableSetDiff * _endEventBuildersDiff;
    NSString * _name;
    bool  _nameIsConfigured;
    HFTriggerActionSetsBuilder * _triggerActionSets;
}

@property (getter=areActionsAffectedByEndEvents, nonatomic, readonly) bool actionsAffectedByEndEvents;
@property (nonatomic, retain) HFConditionCollection *conditionCollection;
@property (nonatomic, retain) <HFTriggerBuilderContextProviding> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFDurationEventBuilder *designatedDurationEventBuilder;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *endEventBuilders;
@property (nonatomic, retain) HFMutableSetDiff *endEventBuildersDiff;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isShortcutOwned;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool nameIsConfigured;
@property (nonatomic, readonly) bool requiresConfirmationToRun;
@property (nonatomic, readonly) bool requiresFMFDeviceToRun;
@property (nonatomic, readonly) bool requiresHomeHub;
@property (nonatomic, readonly) bool requiresLocationServicesAuthorization;
@property (nonatomic, readonly) bool requiresUpdatedHomeHub;
@property (nonatomic, readonly) bool secureActionsRequireConfirmationToRun;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConditions;
@property (nonatomic, readonly) bool supportsEndEvents;
@property (nonatomic, readonly) HMTrigger *trigger;
@property (nonatomic, retain) HFTriggerActionSetsBuilder *triggerActionSets;

+ (Class)homeKitRepresentationClass;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3;
+ (id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3 assertsFailure:(bool)arg4;

- (void).cxx_destruct;
- (id)_commitAddTriggerToHome:(id)arg1;
- (id)_deleteTrigger:(id)arg1 fromHome:(id)arg2;
- (void)_didReplaceBackingTrigger;
- (id)_performValidation;
- (id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2;
- (id)_updateActionSets;
- (id)_updateAnonymousActionSet;
- (id)_updateConditions;
- (id)_updateEnabledState;
- (id)_updateEndEvents;
- (id)_updateName;
- (void)addEndEventBuilder:(id)arg1;
- (bool)areActionsAffectedByEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)conditionCollection;
- (id)context;
- (id)deleteTrigger;
- (id)designatedDurationEventBuilder;
- (id)displayName;
- (bool)enabled;
- (id)endEventBuilders;
- (id)endEventBuildersDiff;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2;
- (bool)isShortcutOwned;
- (id)name;
- (bool)nameIsConfigured;
- (id)naturalLanguageDetailsWithOptions:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (void)removeAllEndEventBuilders;
- (void)removeEndEventBuilder:(id)arg1;
- (void)removeServiceLikeItem:(id)arg1;
- (id)replaceCurrentTriggerWithTrigger:(id)arg1;
- (bool)requiresConfirmationToRun;
- (bool)requiresFMFDeviceToRun;
- (bool)requiresHomeHub;
- (bool)requiresLocationServicesAuthorization;
- (bool)requiresUpdatedHomeHub;
- (bool)secureActionsRequireConfirmationToRun;
- (void)setConditionCollection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndEvent:(id)arg1;
- (void)setEndEventBuildersDiff:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameIsConfigured:(bool)arg1;
- (void)setTrigger:(id)arg1;
- (void)setTriggerActionSets:(id)arg1;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)trigger;
- (id)triggerActionSets;
- (id)triggerBuilderWithContext:(id)arg1;
- (void)updateEndEventBuilder:(id)arg1;
- (id)validateTrigger;

@end