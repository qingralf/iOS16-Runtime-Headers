/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CHIPPlugin.framework/CHIPPlugin
 */

@interface CHIPPluginMutableDeviceTopology : CHIPPluginDeviceTopology

@property (nonatomic, retain) NSMutableDictionary *clustersInUse;
@property (nonatomic, retain) NSMutableDictionary *deviceFeatureMapValues;
@property (nonatomic, retain) NSMutableDictionary *hapCategories;
@property (nonatomic, retain) NSMutableDictionary *hapDisabledCharacteristics;
@property (nonatomic, retain) NSMutableDictionary *hapServiceTypes;

- (void)addDeviceFeatureMapValue:(id)arg1 clusterClassName:(id)arg2 atEndpoint:(id)arg3;
- (void)addHAPDisabledCharacteristic:(id)arg1 atEndpoint:(id)arg2 hapServiceType:(id)arg3;
- (void)setClustersInUse:(id)arg1 atEndpoint:(id)arg2;
- (void)setDeviceFeatureMapValues:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPCategories:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPDisabledCharacteristics:(id)arg1 atEndpoint:(id)arg2;
- (void)setHAPServiceTypes:(id)arg1 atEndpoint:(id)arg2;
- (id)storeForNodeId:(id)arg1 storage:(id)arg2;

@end
