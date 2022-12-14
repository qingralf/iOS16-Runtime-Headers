/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaSuggestionRequest : NSObject <NSCopying> {
    bool  _includeArtwork;
    unsigned long long  _maxResults;
    NSUUID * _requestIdentifier;
    bool  _useDirectAccess;
}

@property (nonatomic) bool includeArtwork;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic, copy) NSUUID *requestIdentifier;
@property (nonatomic) bool useDirectAccess;

+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)includeArtwork;
- (unsigned long long)maxResults;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)performWithPreferences:(id)arg1 completion:(id /* block */)arg2;
- (id)requestIdentifier;
- (void)setIncludeArtwork:(bool)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setUseDirectAccess:(bool)arg1;
- (bool)useDirectAccess;

@end
