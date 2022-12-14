/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchQuery : NSObject <NSCopying> {
    CSSuggestion * _currentSpotlightQueryState;
    PXSearchQueryOptions * _options;
    NSString * _priorityAssetUUID;
    NSString * _searchText;
    NSArray * _searchTokens;
}

@property (nonatomic, retain) CSSuggestion *currentSpotlightQueryState;
@property (nonatomic, readonly) bool hasSearchText;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *localizedQueryString;
@property (nonatomic, readonly, copy) PXSearchQueryOptions *options;
@property (nonatomic, readonly, copy) NSString *priorityAssetUUID;
@property (nonatomic, readonly, copy) NSArray *queryTokens;
@property (nonatomic, readonly) unsigned long long searchTermCount;
@property (nonatomic, readonly, copy) NSString *searchText;
@property (nonatomic, readonly, copy) NSArray *searchTokens;
@property (nonatomic, readonly) bool supportsRecentSearch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpotlightQueryState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 options:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToRecentSearchQuery:(id)arg1;
- (id)localizedQueryString;
- (id)options;
- (id)priorityAssetUUID;
- (id)queryTokens;
- (unsigned long long)searchTermCount;
- (id)searchText;
- (id)searchTokens;
- (void)setCurrentSpotlightQueryState:(id)arg1;
- (bool)supportsRecentSearch;

@end
