/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ASRSchemaASRFinalAudioPacketContainingSpeechReceived : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
    bool  _hasLoggableSharedUserId;
    NSString * _loggableSharedUserId;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;

- (void).cxx_destruct;
- (void)deleteExists;
- (void)deleteLoggableSharedUserId;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasLoggableSharedUserId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (bool)readFrom:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
