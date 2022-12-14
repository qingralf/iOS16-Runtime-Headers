/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIRolloutTargetingOperation : NSObject {
    TRIRolloutDatabase * _rolloutDatabase;
    <TRIRolloutTargeting> * _targeter;
}

@property (nonatomic, readonly) TRIRolloutDatabase *rolloutDatabase;
@property (nonatomic, readonly) <TRIRolloutTargeting> *targeter;

- (void).cxx_destruct;
- (bool)_targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(bool*)arg3 factorPackSetIdToActivate:(id*)arg4 shouldDisenroll:(bool*)arg5 error:(id*)arg6;
- (id)initWithRolloutTargeter:(id)arg1 rolloutDatabase:(id)arg2;
- (id)rolloutDatabase;
- (bool)targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(bool*)arg3 factorPackSetIdToActivate:(id*)arg4 shouldDisenroll:(bool*)arg5 error:(id*)arg6;
- (id)targeter;

@end
