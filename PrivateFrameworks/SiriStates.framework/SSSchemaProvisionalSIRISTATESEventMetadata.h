/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriStates.framework/SiriStates
 */

@interface SSSchemaProvisionalSIRISTATESEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSessionId;
    SISchemaUUID * _sessionId;
}

@property (nonatomic) bool hasSessionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sessionId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)writeTo:(id)arg1;

@end