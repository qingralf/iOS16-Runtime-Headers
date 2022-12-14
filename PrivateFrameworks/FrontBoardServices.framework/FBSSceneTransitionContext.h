/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneTransitionContext : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    NSSet * _actions;
    bool  _allowCPUThrottling;
    BKSAnimationFenceHandle * _animationFence;
    BSAnimationSettings * _animationSettings;
    BSProcessHandle * _originatingProcess;
    BSMutableSettings * _otherSettings;
    bool  _runningBoardAssertionDisabled;
    BSMutableSettings * _transientLocalClientSettings;
    FBSceneUpdateContext * _updateContext;
    FBWatchdogTransitionContext * _watchdogTransitionContext;
}

@property (nonatomic, copy) NSSet *actions;
@property (nonatomic) bool allowCPUThrottling;
@property (nonatomic, retain) BKSAnimationFenceHandle *animationFence;
@property (nonatomic, copy) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (setter=pr_setFinishUnlockParameters:, nonatomic) struct CGSize { double x1; double x2; } pr_finishUnlockParameters;
@property (setter=pr_setReleaseMediaResources:, nonatomic) bool pr_releaseMediaResources;
@property (setter=pr_setSignificantEvent:, nonatomic) unsigned long long pr_significantEvent;
@property (setter=pr_setUpdateSnapshot:, nonatomic) bool pr_updateSnapshot;
@property (getter=isRunningBoardAssertionDisabled, nonatomic) bool runningBoardAssertionDisabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BSMutableSettings *transientLocalClientSettings;
@property (nonatomic, readonly) FBSceneUpdateContext *updateContext;
@property (nonatomic, retain) FBSceneUpdateContext *updateContext;
@property (nonatomic, readonly) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (nonatomic, retain) FBWatchdogTransitionContext *watchdogTransitionContext;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)transitionContext;

- (void).cxx_destruct;
- (bool)_isEmpty;
- (id)actions;
- (id)animationFence;
- (id)animationSettings;
- (bool)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingProcess;
- (id)otherSettings;
- (void)setActions:(id)arg1;
- (void)setAnimationFence:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalClientSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)allowCPUThrottling;
- (bool)isRunningBoardAssertionDisabled;
- (void)setAllowCPUThrottling:(bool)arg1;
- (void)setRunningBoardAssertionDisabled:(bool)arg1;
- (void)setUpdateContext:(id)arg1;
- (void)setWatchdogTransitionContext:(id)arg1;
- (id)updateContext;
- (id)watchdogTransitionContext;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (bool)pb_homeAppearanceChanged;
- (void)pb_setHomeAppearanceChanged:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (struct CGSize { double x1; double x2; })pr_finishUnlockParameters;
- (bool)pr_finishUnlockingWithParameters:(out struct CGSize { double x1; double x2; }*)arg1;
- (bool)pr_releaseMediaResources;
- (void)pr_setFinishUnlockParameters:(struct CGSize { double x1; double x2; })arg1;
- (void)pr_setReleaseMediaResources:(bool)arg1;
- (void)pr_setSignificantEvent:(unsigned long long)arg1;
- (void)pr_setUpdateSnapshot:(bool)arg1;
- (unsigned long long)pr_significantEvent;
- (bool)pr_updateSnapshot;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)isUISubclass;

@end
