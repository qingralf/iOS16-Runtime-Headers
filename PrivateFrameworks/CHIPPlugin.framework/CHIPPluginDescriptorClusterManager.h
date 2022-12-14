/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CHIPPlugin.framework/CHIPPlugin
 */

@interface CHIPPluginDescriptorClusterManager : HMFObject

+ (id)logCategory;
+ (id)sharedManager;

- (id)_buildClustersInUseDictWithClustersInUse:(id)arg1;
- (void)_queryEndpointsForClusterID:(id)arg1 endpoints:(id)arg2 device:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 clusterClassName:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)arg1 endpoint:(id)arg2 topology:(id)arg3;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 clusterClassToQueryForFeatureMap:(id)arg4 hapServicesToCheckForFeatureMap:(id)arg5 deviceTopology:(id)arg6 lastError:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)endpointForClusterID:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchDeviceTypesForDevice:(id)arg1 atEndpoint:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchDeviceTypesForEndpoints:(id)arg1 device:(id)arg2 endpointDeviceTypes:(id)arg3 lastError:(id)arg4 callbackQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchEndpointsForDevice:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)arg1 deviceTopology:(id)arg2 accessoryInfo:(id)arg3 hapToCHIPClusterMapping:(id)arg4 device:(id)arg5 isABridge:(bool)arg6 callbackQueue:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)fetchHAPServicesForCHIPDevice:(id)arg1 nodeId:(id)arg2 storage:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchHAPServicesForEndpoints:(id)arg1 endpointDeviceTypes:(id)arg2 device:(id)arg3 nodeId:(id)arg4 isABridge:(bool)arg5 storage:(id)arg6 topology:(id)arg7 hapAccessoryInfo:(id)arg8 lastError:(id)arg9 callbackQueue:(id)arg10 completionHandler:(id /* block */)arg11;
- (id)hapServiceDescriptionForServiceType:(id)arg1 clustersInUse:(id)arg2 endpoint:(id)arg3 hapToCHIPClusterMapping:(id)arg4 clusterClassToQueryForFeatureMap:(id)arg5 hapServicesToCheckForFeatureMap:(id)arg6;
- (id)hapServiceDescriptionsForTopology:(id)arg1;
- (id)logIdentifier;

@end
