/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CHIPPlugin.framework/CHIPPlugin
 */

@interface CHIPPluginDeviceTopology : HMFObject {
    NSMutableDictionary * _clustersInUse;
    NSMutableDictionary * _deviceFeatureMapValues;
    NSMutableDictionary * _hapCategories;
    NSMutableDictionary * _hapDisabledCharacteristics;
    NSMutableDictionary * _hapServiceTypes;
}

@property (nonatomic, retain) NSMutableDictionary *clustersInUse;
@property (nonatomic, retain) NSMutableDictionary *deviceFeatureMapValues;
@property (nonatomic, retain) NSMutableDictionary *hapCategories;
@property (nonatomic, retain) NSMutableDictionary *hapDisabledCharacteristics;
@property (nonatomic, retain) NSMutableDictionary *hapServiceTypes;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)clustersInUse;
- (id)description;
- (id)deviceFeatureMapValues;
- (id)getClustersInUseAtEndpoint:(id)arg1;
- (id)getEndpoints;
- (id)getFeatureMapForClusterClassName:(id)arg1 endpoint:(id)arg2;
- (id)getHAPCategoriesAtEndpoint:(id)arg1;
- (id)getHAPServiceTypesAtEndpoint:(id)arg1;
- (id)hapCategories;
- (id)hapDisabledCharacteristics;
- (id)hapServiceTypes;
- (id)init;
- (id)initWithNodeId:(id)arg1 storage:(id)arg2;
- (id)initWithTopologyDictionary:(id)arg1;
- (bool)isHAPCharacteristicDisabledAtEndpoint:(id)arg1 hapServiceType:(id)arg2 hapCharacteristic:(id)arg3;
- (void)setClustersInUse:(id)arg1;
- (void)setDeviceFeatureMapValues:(id)arg1;
- (void)setHapCategories:(id)arg1;
- (void)setHapDisabledCharacteristics:(id)arg1;
- (void)setHapServiceTypes:(id)arg1;

@end
