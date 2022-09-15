/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage {
    int  _ORCHUserIdentityClassification;
    struct { 
        unsigned int isMultiUser : 1; 
        unsigned int nlRerunTimeInMs : 1; 
        unsigned int ORCHUserIdentityClassification : 1; 
        unsigned int isOutsider : 1; 
        unsigned int isSelectedUserPartOfMultipleHomes : 1; 
    }  _has;
    bool  _hasSelectedSharedUserId;
    bool  _hasVoiceIdAssetVersion;
    bool  _isMultiUser;
    bool  _isOutsider;
    bool  _isSelectedUserPartOfMultipleHomes;
    unsigned int  _nlRerunTimeInMs;
    NSString * _selectedSharedUserId;
    NSArray * _userScores;
    NSString * _voiceIdAssetVersion;
}

@property (nonatomic) int ORCHUserIdentityClassification;
@property (nonatomic) bool hasIsMultiUser;
@property (nonatomic) bool hasIsOutsider;
@property (nonatomic) bool hasIsSelectedUserPartOfMultipleHomes;
@property (nonatomic) bool hasNlRerunTimeInMs;
@property (nonatomic) bool hasORCHUserIdentityClassification;
@property (nonatomic) bool hasSelectedSharedUserId;
@property (nonatomic) bool hasVoiceIdAssetVersion;
@property (nonatomic) bool isMultiUser;
@property (nonatomic) bool isOutsider;
@property (nonatomic) bool isSelectedUserPartOfMultipleHomes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int nlRerunTimeInMs;
@property (nonatomic, copy) NSString *selectedSharedUserId;
@property (nonatomic, copy) NSArray *userScores;
@property (nonatomic, copy) NSString *voiceIdAssetVersion;

- (void).cxx_destruct;
- (int)ORCHUserIdentityClassification;
- (void)addUserScores:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUserScores;
- (void)deleteIsMultiUser;
- (void)deleteIsOutsider;
- (void)deleteIsSelectedUserPartOfMultipleHomes;
- (void)deleteNlRerunTimeInMs;
- (void)deleteORCHUserIdentityClassification;
- (void)deleteSelectedSharedUserId;
- (void)deleteUserScores;
- (void)deleteVoiceIdAssetVersion;
- (id)dictionaryRepresentation;
- (bool)hasIsMultiUser;
- (bool)hasIsOutsider;
- (bool)hasIsSelectedUserPartOfMultipleHomes;
- (bool)hasNlRerunTimeInMs;
- (bool)hasORCHUserIdentityClassification;
- (bool)hasSelectedSharedUserId;
- (bool)hasVoiceIdAssetVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMultiUser;
- (bool)isOutsider;
- (bool)isSelectedUserPartOfMultipleHomes;
- (id)jsonData;
- (unsigned int)nlRerunTimeInMs;
- (bool)readFrom:(id)arg1;
- (id)selectedSharedUserId;
- (void)setHasIsMultiUser:(bool)arg1;
- (void)setHasIsOutsider:(bool)arg1;
- (void)setHasIsSelectedUserPartOfMultipleHomes:(bool)arg1;
- (void)setHasNlRerunTimeInMs:(bool)arg1;
- (void)setHasORCHUserIdentityClassification:(bool)arg1;
- (void)setHasSelectedSharedUserId:(bool)arg1;
- (void)setHasVoiceIdAssetVersion:(bool)arg1;
- (void)setIsMultiUser:(bool)arg1;
- (void)setIsOutsider:(bool)arg1;
- (void)setIsSelectedUserPartOfMultipleHomes:(bool)arg1;
- (void)setNlRerunTimeInMs:(unsigned int)arg1;
- (void)setORCHUserIdentityClassification:(int)arg1;
- (void)setSelectedSharedUserId:(id)arg1;
- (void)setUserScores:(id)arg1;
- (void)setVoiceIdAssetVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userScores;
- (id)userScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)userScoresCount;
- (id)voiceIdAssetVersion;
- (void)writeTo:(id)arg1;

@end