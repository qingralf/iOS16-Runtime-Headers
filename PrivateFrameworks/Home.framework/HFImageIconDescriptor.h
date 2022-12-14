/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {
    bool  _hasVariableValue;
    NSString * _imageIdentifier;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
    bool  _isDemoModeDescriptor;
    bool  _isSystemImage;
    bool  _shouldForceLTR;
    double  _variableValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVariableValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (nonatomic) bool isDemoModeDescriptor;
@property (nonatomic, readonly) bool isSystemImage;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double variableValue;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (bool)hasVariableValue;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)imageIconDescriptorWithUpdatedImageSymbolConfiguration:(id)arg1;
- (id)imageIdentifier;
- (id)imageSymbolConfiguration;
- (id)initWithDemoModeImageIdentifier:(id)arg1;
- (id)initWithImageIdentifier:(id)arg1;
- (id)initWithSymbolIconConfiguration:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1 configuration:(id)arg2;
- (id)initWithSystemImageNamed:(id)arg1 variableValue:(double)arg2 configuration:(id)arg3;
- (bool)isDemoModeDescriptor;
- (bool)isEqual:(id)arg1;
- (bool)isSystemImage;
- (void)setIsDemoModeDescriptor:(bool)arg1;
- (bool)shouldForceLTR;
- (double)variableValue;

@end
