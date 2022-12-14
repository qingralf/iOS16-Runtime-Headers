/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDWidgetUpdateController : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    NSDate * _lastUpdate;
    long long  _numberOfUpdates;
    NSArray * _timelineControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timelineControllers;

+ (id)log;

- (void).cxx_destruct;
- (long long)_activityDelay;
- (void)_refreshTimelinesWithReason:(id)arg1;
- (void)_restoreFromUserDefaults;
- (void)_runActivity;
- (void)_scheduleActivityWithReason:(id)arg1;
- (void)_updateLastUpdateInformation;
- (void)_writeUserDefaults;
- (void)dealloc;
- (id)initWithWidgetBundleIdentifier:(id)arg1 widgetKindIdentifiers:(id)arg2 hookRegistry:(id)arg3;
- (id)lastUpdate;
- (long long)numberOfUpdates;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)setLastUpdate:(id)arg1;
- (void)setNumberOfUpdates:(long long)arg1;
- (void)setTimelineControllers:(id)arg1;
- (id)timelineControllers;

@end
