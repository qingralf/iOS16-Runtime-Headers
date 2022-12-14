/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneWorkspace : NSObject <BSDescriptionProviding, FBSceneCreating, FBSceneEventCoordinating, FBSceneEventQueueDelegate, FBWorkspaceEventDispatcherTarget> {
    NSMutableDictionary * _allScenesByID;
    FBSMutableSceneDefinition * _buildingDefinition;
    FBSceneManagerObserver * _delegate;
    <BSInvalidatable> * _eventDispatcherTargetRegistration;
    FBSceneEventQueue * _eventQueue;
    NSString * _identifier;
    bool  _invalidated;
    NSMutableOrderedSet * _observers;
    NSMutableArray * _pendingIdleEvents;
    NSMapTable * _providerToScenesMap;
    bool  _supportsLegacy;
    bool  _suppressConnectionHandshakes;
    unsigned long long  _synchronizationBlockDepth;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (id)debugDescription;
+ (id)workspaceWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)allScenes;
- (id)createScene:(id /* block */)arg1;
- (id)createSceneFromRemnant:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3;
- (id)createSceneWithDefinition:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didReceiveHandshake:(id)arg1;
- (void)eventQueueDidDrain:(id)arg1;
- (void)eventQueueDidUnlock:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (void)scene:(id)arg1 deactivateAndInvalidate:(bool)arg2 withError:(id)arg3 block:(id /* block */)arg4;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 enumerateAndCalloutToObserversWithEventName:(id)arg2 block:(id /* block */)arg3;
- (void)scene:(id)arg1 handleUpdateToSettings:(id)arg2 withTransitionContext:(id)arg3 completion:(id /* block */)arg4;
- (id)sceneIdentityTokenForIdentifier:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (void)setClientIdentity:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSpecification:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)posterWorkspace;

@end
