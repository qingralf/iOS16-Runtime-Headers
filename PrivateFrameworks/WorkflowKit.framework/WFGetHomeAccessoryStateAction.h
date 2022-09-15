/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (readonly) Class superclass;

+ (id)homeAccessoryStateActionWithHome:(id)arg1;

- (id)characteristic;
- (void)dealloc;
- (id)home;
- (id)homeIdentifier;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeName;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDefaultOutputName;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateCharacteristicsEnumeration;

@end