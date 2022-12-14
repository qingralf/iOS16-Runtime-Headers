/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CHIPPlugin.framework/CHIPPlugin
 */

@interface CHIPPluginHAPServiceDescription : HMFObject {
    NSDictionary * _characteristicFeatureMap;
    NSNumber * _endpoint;
    NSArray * _optionalCharacteristics;
    NSArray * _requiredCharacteristics;
    NSString * _serviceType;
}

@property (readonly) NSDictionary *characteristicFeatureMap;
@property (retain) NSNumber *endpoint;
@property (readonly) NSArray *optionalCharacteristics;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSString *serviceType;

- (void).cxx_destruct;
- (void)addFeatureMapForCharacteristic:(id)arg1 featureMap:(id)arg2;
- (void)addMandatoryCharacteristic:(id)arg1;
- (void)addOptionalCharacteristic:(id)arg1;
- (id)attributeDescriptions;
- (id)characteristicFeatureMap;
- (id)endpoint;
- (id)initWithType:(id)arg1 endpoint:(id)arg2;
- (id)optionalCharacteristics;
- (id)padCharacteristicIDWithZeros:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (id)requiredCharacteristics;
- (id)serviceType;
- (void)setEndpoint:(id)arg1;

@end
