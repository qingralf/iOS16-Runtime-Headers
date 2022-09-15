/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFTraitsArbiterUpdateContext : NSObject <BSDescriptionProviding, SBFTraitsArbiterUpdateContextBuilding, SBFTraitsSettingsActuationContextProviding> {
    <SBFTraitsArbiterDrawingDataSource> * __drawingConfigProvider;
    bool  __hasDefaultOrientationActuationContext;
    bool  _forceOrientationResolution;
    SBFTraitsSettingsActuationContext * _orientationActuationContext;
    NSString * _reason;
    NSArray * _requestingParticipantsUniqueIdentifiers;
}

@property (setter=_setDrawingConfigurationProvider:, nonatomic) <SBFTraitsArbiterDrawingDataSource> *_drawingConfigProvider;
@property (nonatomic, readonly) bool _hasDefaultOrientationActuationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceOrientationResolution;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, copy) NSArray *requestingParticipantsUniqueIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_drawingConfigProvider;
- (bool)_hasDefaultOrientationActuationContext;
- (void)_setDrawingConfigurationProvider:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)forceOrientationResolution;
- (bool)hasAnyActuationContext;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)orientationActuationContext;
- (id)reason;
- (id)requestingParticipantsUniqueIdentifiers;
- (void)setForceOrientationResolution:(bool)arg1;
- (void)setOrientationActuationContext:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestingParticipantsUniqueIdentifiers:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end