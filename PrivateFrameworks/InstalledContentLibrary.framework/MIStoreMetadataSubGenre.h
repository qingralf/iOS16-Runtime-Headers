/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MIStoreMetadataSubGenre : NSObject <NSCopying, NSSecureCoding> {
    NSString * _genre;
    NSNumber * _genreID;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, retain) NSNumber *genreID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (id)genreID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGenre:(id)arg1 genreID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenreID:(id)arg1;

@end