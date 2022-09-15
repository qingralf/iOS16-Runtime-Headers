/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDXPCInternalService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (bool)behaviorUnderstandingClearAllDataWithShouldClearFeaturizer:(bool)arg1 shouldClearSampleGenerator:(bool)arg2 error:(id*)arg3;
- (bool)behaviorUnderstandingDigestWithShouldDigestFeaturizer:(bool)arg1 shouldDigestSampleGenerator:(bool)arg2 error:(id*)arg3;
- (id)behaviorUnderstandingFeaturizeBehaviorOfType:(id)arg1 identifier:(id)arg2 usingContextAt:(id)arg3 error:(id*)arg4;
- (id)behaviorUnderstandingFeaturizedBehaviorsForFeatureName:(id)arg1 behaviorType:(id)arg2 error:(id*)arg3;
- (id)behaviorUnderstandingHistogramsOfKind:(id)arg1 behaviorType:(id)arg2 error:(id*)arg3;
- (id)behaviorUnderstandingRecentBehaviorsOfType:(id)arg1 error:(id*)arg2;
- (id)behaviorUnderstandingStatusWithError:(id*)arg1;
- (bool)benchmarkWithError:(id*)arg1;
- (bool)clearPipelineStatusWithError:(id*)arg1;
- (id)init;
- (void)locked_establishConnection;
- (id)resolveEntityWithRequest:(id)arg1 enableSessionLogging:(bool)arg2 configName:(id)arg3 encodedConfig:(id)arg4 withError:(id*)arg5;
- (bool)runDeltaUpdatePipelineWithError:(id*)arg1;
- (bool)runToMatchingPipelineWithError:(id*)arg1;
- (id)statsWithError:(id*)arg1;
- (id)statusWithError:(id*)arg1;
- (bool)stopPipelineWithError:(id*)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)triplesQueryWithQuery:(id)arg1;
- (id)validateGraph:(id*)arg1;
- (id)vectorSearchBenchmarkWithConfigFilePath:(id)arg1 error:(id*)arg2;
- (bool)viewClearAllDataWithName:(id)arg1 error:(id*)arg2;
- (id)viewInfoWithError:(id*)arg1;
- (bool)viewMarkNeedsUpdateWithSchedule:(id)arg1 error:(id*)arg2;
- (bool)viewRunUpdateWithName:(id)arg1 error:(id*)arg2;
- (bool)viewSetEnabledWithName:(id)arg1 enabled:(id)arg2 error:(id*)arg3;
- (bool)viewValidateWithError:(id*)arg1;

@end