/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterPumpConfigurationAndControl : MTRCluster {
    void * _cppCluster;
}

@property (readonly) void*cppCluster;

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeCapacityWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeControlModeWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeEffectiveControlModeWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeEffectiveOperationModeWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeLifetimeEnergyConsumedWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeLifetimeRunningHoursWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxCompPressureWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxConstFlowWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxConstPressureWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxConstSpeedWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxConstTempWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxFlowWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxPressureWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMaxSpeedWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMinCompPressureWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMinConstFlowWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMinConstPressureWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMinConstSpeedWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeMinConstTempWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeOperationModeWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributePowerWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributePumpStatusWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeSpeedWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;

- (void*)cppCluster;
- (struct PumpConfigurationAndControlCluster {}**)cppClusterSlot;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeCapacityWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeControlModeWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeEffectiveControlModeWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeEffectiveOperationModeWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeLifetimeEnergyConsumedWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeLifetimeRunningHoursWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxCompPressureWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxConstFlowWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxConstPressureWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxConstSpeedWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxConstTempWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxFlowWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxPressureWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMaxSpeedWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMinCompPressureWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMinConstFlowWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMinConstPressureWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMinConstSpeedWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeMinConstTempWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeOperationModeWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePowerWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePumpStatusWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeSpeedWithCompletionHandler:(id /* block */)arg1;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeCapacityWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeControlModeWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeEffectiveControlModeWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeEffectiveOperationModeWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeLifetimeEnergyConsumedWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeLifetimeRunningHoursWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxCompPressureWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxConstFlowWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxConstPressureWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxConstSpeedWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxConstTempWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxFlowWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxPressureWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMaxSpeedWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMinCompPressureWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMinConstFlowWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMinConstPressureWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMinConstSpeedWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeMinConstTempWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeOperationModeWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributePowerWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributePumpStatusWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeSpeedWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)writeAttributeControlModeWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeControlModeWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeOperationModeWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeOperationModeWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;

@end
