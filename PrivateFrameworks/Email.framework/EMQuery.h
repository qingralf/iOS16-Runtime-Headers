/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMQuery : EFQuery {
    CSSuggestion * _suggestion;
}

@property (nonatomic, copy) CSSuggestion *suggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToQuery:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 suggestion:(id)arg4 limit:(long long)arg5 queryOptions:(unsigned long long)arg6 label:(id)arg7;
- (bool)isEqual:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
