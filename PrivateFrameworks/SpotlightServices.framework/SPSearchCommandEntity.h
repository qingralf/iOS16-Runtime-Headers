/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SPSearchCommandEntity : SPSearchEntity {
    SFPerformEntityQueryCommand * _performCommand;
    NSString * _searchString;
    NSString * _tokenText;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)command;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 fromSuggestion:(bool)arg2;
- (bool)isCommandEntitySearch;
- (bool)isScopedSearch;
- (bool)isServerEntitySearch;
- (id)searchString;
- (id)spotlightQueryString;
- (id)symbolName;
- (id)tokenText;
- (void)updateSearchString:(id)arg1;

@end
