/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PRIncomingPosterConfiguration : NSObject <PRPosterContents> {
    PRPosterConfiguredProperties * _configuredProperties;
    PRSPosterPath * _path;
    PRSServerPosterIdentity * _sourceIdentity;
}

@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (nonatomic, readonly) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptorIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterPath *path;
@property (nonatomic, readonly) PRSServerPosterIdentity *sourceIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetDirectory;
- (id)configuredProperties;
- (id)description;
- (id)descriptorIdentifier;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1 sourceIdentity:(id)arg2 configuredProperties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)objectForUserInfoKey:(id)arg1;
- (id)path;
- (id)sourceIdentity;

@end
