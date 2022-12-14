/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
 */

@interface ChronoCore.WidgetSceneDelegate : UIResponder <CHUISWidgetSceneDelegate, _UISceneBSActionHandler, _UISceneSettingsDiffAction> {
    void confirmationActionSubscribers;
    void connection;
    void effectiveVisibility;
    void environmentModifiersAssertion;
    void evaluateStaleTimelineContentTimer;
    void foregroundScene;
    void foregroundSceneContentLimiter;
    void hasBeenVisiblySettledForCurrentVisibilitySession;
    void invalidateAfterSnapshot;
    void layerSnapshotter;
    void sceneDiffActionKey;
    void sceneSettingsDiffInspector;
    void snapshotGeneration;
    void timelineReloadedNotificationCancellable;
    void timelineService;
    void window;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (void)applicationDidReceiveMemoryWarning;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
