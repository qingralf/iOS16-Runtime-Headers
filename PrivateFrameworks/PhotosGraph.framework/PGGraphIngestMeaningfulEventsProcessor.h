/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder * _graphBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)regenerateMeaningsWithGraphBuilder:(id)arg1 progressReporter:(id)arg2;

- (void).cxx_destruct;
- (id)_meaningCriteriasDictionaryByMeaningLabel;
- (void)_processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 meaningCriteriaEvaluatorsByMeaningLabel:(id)arg3 legacyLabels:(id)arg4 progressBlock:(id /* block */)arg5;
- (void)_updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 withValidMeaningLabels:(id)arg3 legacyLabels:(id)arg4;
- (void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)processMeaningfulEventsWithMomentNodes:(id)arg1 graph:(id)arg2 requiredMeaningfulEventCriteriaByIdentifier:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setGraphBuilder:(id)arg1;
- (bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)updateMeaningsOfMomentNode:(id)arg1 graph:(id)arg2 affectedMeaningLabels:(id)arg3 withMatchedResults:(id)arg4;

@end
