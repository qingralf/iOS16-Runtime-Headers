/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAddAutomationEvent : WFEvent {
    unsigned int  _actionCount;
    NSString * _activityType;
    NSString * _appBundleIdentifier;
    NSString * _automationSuggestionsTrialIdentifier;
    NSString * _intentType;
    NSString * _key;
    NSString * _shortcutIdentifier;
    NSString * _source;
    NSString * _triggerType;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *triggerType;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (unsigned int)actionCount;
- (id)activityType;
- (id)appBundleIdentifier;
- (id)automationSuggestionsTrialIdentifier;
- (id)intentType;
- (id)key;
- (void)setActionCount:(unsigned int)arg1;
- (void)setActivityType:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAutomationSuggestionsTrialIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (id)shortcutIdentifier;
- (id)source;
- (id)triggerType;

@end
