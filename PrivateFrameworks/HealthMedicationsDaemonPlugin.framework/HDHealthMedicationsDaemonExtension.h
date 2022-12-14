/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin
 */

@interface HDHealthMedicationsDaemonExtension : NSObject <HDHealthDaemonExtension> {
    HDOntologyCoreMedsFeatureEvaluator * _coreMedsFeatureEvaluator;
    HDDrugInteractionFactorStateProvider * _drugInteractionStateProvider;
    HDOntologyInteractionsFeatureEvaluator * _interactionsFeatureEvaluator;
    HDMedicationCountProvider * _medicationCountProvider;
    HDOntologyMedsEducationFeatureEvaluator * _medsEducationFeatureEvaluator;
    HDOntologyMedsScanningFeatureEvaluator * _medsScanningFeatureEvaluator;
    HDMedicationPeriodicScheduler * _periodicScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *ontologyFeatureEvaluators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHealthDaemon:(id)arg1;
- (id)ontologyFeatureEvaluators;

@end
