/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SPSearchNLPEntity : SPSearchEntity {
    NSString * _queryString;
    NSDictionary * _rankCategories;
    NSDictionary * _rankTerms;
    NSString * _searchString;
    NSString * _spotlightQueryString;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 spotlightQueryString:(id)arg2 spotlightRankCategories:(id)arg3 spotlightRankTerms:(id)arg4 fromSuggestion:(bool)arg5;
- (bool)isNLPEntitySearch;
- (id)queryString;
- (id)searchString;
- (id)spotlightQueryString;
- (id)spotlightRankCategories;
- (id)spotlightRankTerms;
- (void)updateSearchString:(id)arg1;

@end