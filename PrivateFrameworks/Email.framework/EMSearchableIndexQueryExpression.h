/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying> {
    NSString * _queryString;
    NSString * _searchString;
    CSSuggestion * _updatedSuggestion;
}

@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, readonly, copy) CSSuggestion *updatedSuggestion;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)expressionWithQueryString:(id)arg1;
+ (id)expressionWithQueryString:(id)arg1 searchString:(id)arg2 updatedSuggestion:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithQueryString:(id)arg1 searchString:(id)arg2 updatedSuggestion:(id)arg3;
- (bool)isValid;
- (id)queryString;
- (id)searchString;
- (void)setQueryString:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)updatedSuggestion;

@end
