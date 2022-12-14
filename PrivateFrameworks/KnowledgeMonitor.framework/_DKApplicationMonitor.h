/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver> {
    NSMutableDictionary * _activeExtensions;
    BMAppLaunchStream * _appLaunchStream;
    BKSApplicationStateMonitor * _bksMonitor;
    NSString * _lastIdentifierSet;
    BMFrontBoardDisplayLayout * _lastLayoutEvent;
    BMSource * _layoutSource;
    BMStream * _layoutStream;
    FBSDisplayLayoutMonitor * _monitor;
    NSMutableArray * _previouslyForegroundServices;
    NSSet * _servicesOfInterestForWatchCommunication;
}

@property (retain) NSMutableDictionary *activeExtensions;
@property (nonatomic, retain) BMAppLaunchStream *appLaunchStream;
@property (nonatomic, retain) BKSApplicationStateMonitor *bksMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastIdentifierSet;
@property (nonatomic, retain) BMFrontBoardDisplayLayout *lastLayoutEvent;
@property (nonatomic, retain) BMSource *layoutSource;
@property (nonatomic, retain) BMStream *layoutStream;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *monitor;
@property (nonatomic, retain) NSMutableArray *previouslyForegroundServices;
@property (nonatomic, retain) NSSet *servicesOfInterestForWatchCommunication;
@property (readonly) Class superclass;

+ (id)_defaultEvent;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 shortVersionString:(id)arg3 exactBundleVersion:(id)arg4;
+ (void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2;
+ (id)debugCategory;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setFocalApplication:(id)arg1 launchReason:(id)arg2;

- (void).cxx_destruct;
- (id)activeExtensions;
- (id)appLaunchStream;
- (id)bksMonitor;
- (id)currentActiveComplications;
- (void)deactivate;
- (void)dealloc;
- (void)donateDisplayLayout:(id)arg1 withContext:(id)arg2;
- (bool)ignoreAppExtension:(id)arg1;
- (id)init;
- (id)lastIdentifierSet;
- (id)lastLayoutEvent;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)layoutSource;
- (id)layoutStream;
- (id)monitor;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (id)previouslyForegroundServices;
- (void)registerForActiveComplicationChangeNotifications;
- (id)servicesOfInterestForWatchCommunication;
- (void)setActiveExtensions:(id)arg1;
- (void)setAppLaunchStream:(id)arg1;
- (void)setBksMonitor:(id)arg1;
- (void)setCurrentActiveComplications;
- (void)setLastIdentifierSet:(id)arg1;
- (void)setLastLayoutEvent:(id)arg1;
- (void)setLayoutSource:(id)arg1;
- (void)setLayoutStream:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setPreviouslyForegroundServices:(id)arg1;
- (void)setServicesOfInterestForWatchCommunication:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
