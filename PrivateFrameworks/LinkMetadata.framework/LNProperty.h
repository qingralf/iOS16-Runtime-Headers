/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNProperty : NSObject <NSSecureCoding> {
    NSString * _identifier;
    LNValue * _value;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
