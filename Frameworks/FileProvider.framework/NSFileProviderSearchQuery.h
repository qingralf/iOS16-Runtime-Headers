/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _allowedContentTypes;
    NSSet * _allowedUTTypes;
    NSString * _alternateScopeToItemIdentifier;
    NSString * _bundleIdentifier;
    NSSet * _cachedExtensions;
    NSString * _filename;
    NSString * _keyboardLanguage;
    NSString * _providerDomainID;
    NSString * _scopeFragment;
    NSString * _scopedToItemIdentifier;
    NSString * _scopedToItemIdentifierBundleId;
    NSString * _searchContainerItemIdentifier;
    bool  _shouldPerformServerSearch;
    unsigned long long  _trashedItemsMembership;
}

@property (nonatomic, copy) NSSet *allowedContentTypes;
@property (nonatomic, readonly, copy) NSSet *allowedContentTypes;
@property (nonatomic, readonly, copy) NSSet *allowedPathExtensions;
@property (nonatomic, copy) NSString *alternateScopeToItemIdentifier;
@property (nonatomic, copy) NSString *content;
@property (readonly, copy) NSArray *csQueryScopes;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic) bool includesTrashedItems;
@property (nonatomic, copy) NSString *keyboardLanguage;
@property (nonatomic, copy) NSString *providerDomainID;
@property (nonatomic, copy) NSString *scopeFragment;
@property (nonatomic, readonly, copy) NSString *scopedToItemIdentifier;
@property (nonatomic, readonly, copy) NSString *searchContainerItemIdentifier;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic) bool shouldPerformServerSearch;
@property (nonatomic) unsigned long long trashedItemsMembership;

+ (id)newSearchContainerItemIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedContentTypes;
- (id)allowedContentTypesPredicate;
- (id)allowedPathExtensions;
- (id)alternateScopeToItemIdentifier;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csQueryScopes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)filenamePredicate;
- (unsigned long long)hash;
- (bool)includesTrashedItems;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchScope:(id)arg1;
- (id)initWithSearchScopedToItemID:(id)arg1;
- (id)initWithSearchScopedToItemID:(id)arg1 alternateItemID:(id)arg2;
- (id)initWithSearchScopedToItemIdentifier:(id)arg1 alternateItemIdentifier:(id)arg2 providerDomainID:(id)arg3 searchContainerItemIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFileProviderSearchQuery:(id)arg1;
- (id)keyboardLanguage;
- (id)predicate;
- (id)providerDomainID;
- (id)scopeFragment;
- (id)scopedToItemIdentifier;
- (id)searchContainerItemIdentifier;
- (id)searchString;
- (void)setAllowedContentTypes:(id)arg1;
- (void)setAlternateScopeToItemIdentifier:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setIncludesTrashedItems:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setProviderDomainID:(id)arg1;
- (void)setScopeFragment:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShouldPerformServerSearch:(bool)arg1;
- (void)setTrashedItemsMembership:(unsigned long long)arg1;
- (bool)shouldPerformServerSearch;
- (id)toSpotlightQueryString;
- (unsigned long long)trashedItemsMembership;

@end