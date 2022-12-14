/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBPerformEntityQueryCommand : PBCodable <NSSecureCoding, _SFPBPerformEntityQueryCommand> {
    NSString * _entityIdentifier;
    int  _entityType;
    NSString * _searchString;
    _SFPBSymbolImage * _symbolImage;
    NSString * _tokenString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic) int entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBSymbolImage *symbolImage;
@property (nonatomic, copy) NSString *tokenString;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)entityIdentifier;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setTokenString:(id)arg1;
- (id)symbolImage;
- (id)tokenString;
- (void)writeTo:(id)arg1;

@end
