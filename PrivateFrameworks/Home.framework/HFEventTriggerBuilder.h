/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFEventTriggerBuilder : HFTriggerBuilder {
    NSSet * _eventTypes;
    bool  _executeOnce;
    NSMutableDictionary * _extensionInterfaces;
    NSMutableSet * _mutableEventBuilders;
    NSArray * _recurrences;
    bool  _shouldMarkTriggerAsHomeAppCreated;
}

@property (nonatomic, readonly) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
@property (nonatomic, readonly) NSSet *characteristics;
@property (nonatomic, readonly) NSArray *eventBuilders;
@property (nonatomic, readonly) NSSet *eventTypes;
@property (nonatomic) bool executeOnce;
@property (nonatomic, retain) NSMutableDictionary *extensionInterfaces;
@property (nonatomic, readonly) HFEventBuilderLocationInterface *locationInterface;
@property (nonatomic, retain) NSMutableSet *mutableEventBuilders;
@property (nonatomic, retain) NSArray *recurrences;
@property (nonatomic) bool shouldMarkTriggerAsHomeAppCreated;
@property (nonatomic, readonly) HFEventTriggerBuilderTimeInterface *timeInterface;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_allActionSets;
- (void)_createEventBuilders;
- (id)_createEvents;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_performValidation;
- (id)_updateEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (void)addEventBuilder:(id)arg1;
- (void)applyEventBuilderDiff:(id)arg1;
- (id)characteristicInterface;
- (id)characteristics;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)deleteTrigger;
- (id)eventBuilders;
- (id)eventTypes;
- (bool)executeOnce;
- (id)extensionInterfaces;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)locationInterface;
- (id)mutableEventBuilders;
- (id)naturalLanguageDetailsWithOptions:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)recurrences;
- (void)removeEventBuilder:(id)arg1;
- (void)removeServiceLikeItem:(id)arg1;
- (bool)requiresConfirmationToRun;
- (void)setExecuteOnce:(bool)arg1;
- (void)setExtensionInterfaces:(id)arg1;
- (void)setMutableEventBuilders:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setShouldMarkTriggerAsHomeAppCreated:(bool)arg1;
- (bool)shouldMarkTriggerAsHomeAppCreated;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)timeInterface;

@end
