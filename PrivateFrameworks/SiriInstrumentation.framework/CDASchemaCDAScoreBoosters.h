/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface CDASchemaCDAScoreBoosters : SISchemaInstrumentationMessage {
    unsigned int  _deviceBoost;
    struct { 
        unsigned int deviceBoost : 1; 
        unsigned int recentUnlockBoost : 1; 
        unsigned int recentRaiseToWakeBoost : 1; 
        unsigned int recentSiriRequestBoost : 1; 
        unsigned int recentMotionBoost : 1; 
        unsigned int recentPlaybackBoost : 1; 
        unsigned int isTrump : 1; 
        unsigned int trumpReason : 1; 
        unsigned int recentAlarmBoost : 1; 
    }  _has;
    bool  _isTrump;
    unsigned int  _recentAlarmBoost;
    unsigned int  _recentMotionBoost;
    unsigned int  _recentPlaybackBoost;
    unsigned int  _recentRaiseToWakeBoost;
    unsigned int  _recentSiriRequestBoost;
    unsigned int  _recentUnlockBoost;
    int  _trumpReason;
}

@property (nonatomic) unsigned int deviceBoost;
@property (nonatomic) bool hasDeviceBoost;
@property (nonatomic) bool hasIsTrump;
@property (nonatomic) bool hasRecentAlarmBoost;
@property (nonatomic) bool hasRecentMotionBoost;
@property (nonatomic) bool hasRecentPlaybackBoost;
@property (nonatomic) bool hasRecentRaiseToWakeBoost;
@property (nonatomic) bool hasRecentSiriRequestBoost;
@property (nonatomic) bool hasRecentUnlockBoost;
@property (nonatomic) bool hasTrumpReason;
@property (nonatomic) bool isTrump;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int recentAlarmBoost;
@property (nonatomic) unsigned int recentMotionBoost;
@property (nonatomic) unsigned int recentPlaybackBoost;
@property (nonatomic) unsigned int recentRaiseToWakeBoost;
@property (nonatomic) unsigned int recentSiriRequestBoost;
@property (nonatomic) unsigned int recentUnlockBoost;
@property (nonatomic) int trumpReason;

- (void)deleteDeviceBoost;
- (void)deleteIsTrump;
- (void)deleteRecentAlarmBoost;
- (void)deleteRecentMotionBoost;
- (void)deleteRecentPlaybackBoost;
- (void)deleteRecentRaiseToWakeBoost;
- (void)deleteRecentSiriRequestBoost;
- (void)deleteRecentUnlockBoost;
- (void)deleteTrumpReason;
- (unsigned int)deviceBoost;
- (id)dictionaryRepresentation;
- (bool)hasDeviceBoost;
- (bool)hasIsTrump;
- (bool)hasRecentAlarmBoost;
- (bool)hasRecentMotionBoost;
- (bool)hasRecentPlaybackBoost;
- (bool)hasRecentRaiseToWakeBoost;
- (bool)hasRecentSiriRequestBoost;
- (bool)hasRecentUnlockBoost;
- (bool)hasTrumpReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTrump;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)recentAlarmBoost;
- (unsigned int)recentMotionBoost;
- (unsigned int)recentPlaybackBoost;
- (unsigned int)recentRaiseToWakeBoost;
- (unsigned int)recentSiriRequestBoost;
- (unsigned int)recentUnlockBoost;
- (void)setDeviceBoost:(unsigned int)arg1;
- (void)setHasDeviceBoost:(bool)arg1;
- (void)setHasIsTrump:(bool)arg1;
- (void)setHasRecentAlarmBoost:(bool)arg1;
- (void)setHasRecentMotionBoost:(bool)arg1;
- (void)setHasRecentPlaybackBoost:(bool)arg1;
- (void)setHasRecentRaiseToWakeBoost:(bool)arg1;
- (void)setHasRecentSiriRequestBoost:(bool)arg1;
- (void)setHasRecentUnlockBoost:(bool)arg1;
- (void)setHasTrumpReason:(bool)arg1;
- (void)setIsTrump:(bool)arg1;
- (void)setRecentAlarmBoost:(unsigned int)arg1;
- (void)setRecentMotionBoost:(unsigned int)arg1;
- (void)setRecentPlaybackBoost:(unsigned int)arg1;
- (void)setRecentRaiseToWakeBoost:(unsigned int)arg1;
- (void)setRecentSiriRequestBoost:(unsigned int)arg1;
- (void)setRecentUnlockBoost:(unsigned int)arg1;
- (void)setTrumpReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)trumpReason;
- (void)writeTo:(id)arg1;

@end