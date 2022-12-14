/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXDenyListEligibilityThresholds : NSObject {
    NSNumber * _defaultHighestScoreForAppInCurrentModeForDenyListEligibility;
    NSNumber * _defaultLowestScoreForAppInAnotherModeForDenyListEligibility;
    NSNumber * _highestContactScoreInCurrentModeForDenyListEligibility;
    NSDictionary * _highestScoreForAppInCurrentModeForDenyListEligibility;
    NSNumber * _lowestContactScoreInAnotherModeForDenyListEligibility;
    NSDictionary * _lowestScoreForAppInAnotherModeForDenyListEligibility;
    NSDictionary * asset;
}

@property (nonatomic, retain) NSNumber *highestContactScoreInCurrentModeForDenyListEligibility;
@property (nonatomic, retain) NSNumber *lowestContactScoreInAnotherModeForDenyListEligibility;

- (void).cxx_destruct;
- (id)highestContactScoreInCurrentModeForDenyListEligibility;
- (id)highestScoreInCurrentModeForDenyListEligibilityForBundleId:(id)arg1;
- (id)init;
- (id)lowestContactScoreInAnotherModeForDenyListEligibility;
- (id)lowestScoreInAnotherModeForDenyListEligibilityForBundleId:(id)arg1;
- (void)setHighestContactScoreInCurrentModeForDenyListEligibility:(id)arg1;
- (void)setLowestContactScoreInAnotherModeForDenyListEligibility:(id)arg1;

@end
