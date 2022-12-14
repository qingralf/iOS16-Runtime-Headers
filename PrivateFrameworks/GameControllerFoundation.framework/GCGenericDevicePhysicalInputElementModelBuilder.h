/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject {
    NSNumber * _analog;
    NSString * _identifier;
    NSString * _localizedNameKey;
    NSString * _name;
    NSString * _symbolName;
}

@property (getter=isAnalog, nonatomic, copy) NSNumber *analog;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedNameKey;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *symbolName;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)isAnalog;
- (bool)isEqual:(id)arg1;
- (id)localizedNameKey;
- (id)name;
- (void)reset;
- (void)setAnalog:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedNameKey:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
