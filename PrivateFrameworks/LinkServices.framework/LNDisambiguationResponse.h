/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNDisambiguationResponse : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
    long long  _selectedItemIndex;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long selectedItemIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 selectedItemIndex:(long long)arg2;
- (long long)selectedItemIndex;

@end