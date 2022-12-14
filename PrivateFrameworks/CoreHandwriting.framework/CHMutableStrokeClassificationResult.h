/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableSet * _nontextCandidates;
    NSMutableDictionary * _strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary * _substrokesByStrokeIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;
- (id)nontextCandidates;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (void)updateByAddingClutterStroke:(id)arg1;
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(bool)arg3;
- (void)updateByAddingNonClutterStroke:(id)arg1 withClassification:(long long)arg2;
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;

@end
