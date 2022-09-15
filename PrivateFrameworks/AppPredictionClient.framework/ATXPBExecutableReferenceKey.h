/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying> {
    ATXPBAction * _executableAction;
    ATXPBHeroAppPrediction * _executableHeroApp;
    ATXPBInfoSuggestion * _executableInfoSuggestion;
    ATXPBLinkAction * _executableLinkAction;
    NSString * _executableString;
    int  _executableType;
    NSMutableArray * _references;
}

@property (nonatomic, retain) ATXPBAction *executableAction;
@property (nonatomic, retain) ATXPBHeroAppPrediction *executableHeroApp;
@property (nonatomic, retain) ATXPBInfoSuggestion *executableInfoSuggestion;
@property (nonatomic, retain) ATXPBLinkAction *executableLinkAction;
@property (nonatomic, retain) NSString *executableString;
@property (nonatomic) int executableType;
@property (nonatomic, readonly) bool hasExecutableAction;
@property (nonatomic, readonly) bool hasExecutableHeroApp;
@property (nonatomic, readonly) bool hasExecutableInfoSuggestion;
@property (nonatomic, readonly) bool hasExecutableLinkAction;
@property (nonatomic, readonly) bool hasExecutableString;
@property (nonatomic, retain) NSMutableArray *references;

+ (Class)referencesType;

- (void).cxx_destruct;
- (int)StringAsExecutableType:(id)arg1;
- (void)addReferences:(id)arg1;
- (void)clearReferences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableAction;
- (id)executableHeroApp;
- (id)executableInfoSuggestion;
- (id)executableLinkAction;
- (id)executableString;
- (int)executableType;
- (id)executableTypeAsString:(int)arg1;
- (bool)hasExecutableAction;
- (bool)hasExecutableHeroApp;
- (bool)hasExecutableInfoSuggestion;
- (bool)hasExecutableLinkAction;
- (bool)hasExecutableString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)references;
- (id)referencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)referencesCount;
- (void)setExecutableAction:(id)arg1;
- (void)setExecutableHeroApp:(id)arg1;
- (void)setExecutableInfoSuggestion:(id)arg1;
- (void)setExecutableLinkAction:(id)arg1;
- (void)setExecutableString:(id)arg1;
- (void)setExecutableType:(int)arg1;
- (void)setReferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end