/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassField : NSObject <NSCopying, NSSecureCoding> {
    long long  _cellStyle;
    NSString * _changeMessage;
    unsigned long long  _dataDetectorTypes;
    NSSet * _foreignReferenceIdentifiers;
    long long  _foreignReferenceType;
    NSString * _key;
    NSString * _label;
    NSString * _link;
    unsigned long long  _row;
    NSDictionary * _semantics;
    long long  _textAlignment;
    long long  _type;
    id  _unformattedValue;
    long long  _unitType;
    NSString * _value;
}

@property (nonatomic) long long cellStyle;
@property (nonatomic, copy) NSString *changeMessage;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic, copy) NSSet *foreignReferenceIdentifiers;
@property (nonatomic) long long foreignReferenceType;
@property (nonatomic, readonly) bool isDrillInField;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *link;
@property (nonatomic) unsigned long long row;
@property (nonatomic, copy) NSDictionary *semantics;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long type;
@property (nonatomic, copy) id unformattedValue;
@property (nonatomic) long long unitType;
@property (readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)asMutableDictionary;
- (long long)cellStyle;
- (id)changeMessage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataDetectorTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)flushCachedValue;
- (id)foreignReferenceIdentifiers;
- (long long)foreignReferenceType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDrillInField;
- (id)key;
- (id)label;
- (id)link;
- (unsigned long long)row;
- (id)semantics;
- (void)setCellStyle:(long long)arg1;
- (void)setChangeMessage:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setForeignReferenceIdentifiers:(id)arg1;
- (void)setForeignReferenceType:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSemantics:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedValue:(id)arg1;
- (void)setUnitType:(long long)arg1;
- (long long)textAlignment;
- (long long)type;
- (id)unformattedValue;
- (long long)unitType;
- (id)value;

@end
