/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int requestType : 1; 
        unsigned int siriUODEnabled : 1; 
        unsigned int siriUODMode : 1; 
        unsigned int siriAsrMode : 1; 
        unsigned int siriNlMode : 1; 
    }  _has;
    bool  _hasOrchestratorSessionId;
    SISchemaUUID * _orchestratorSessionId;
    int  _requestType;
    int  _siriAsrMode;
    int  _siriNlMode;
    bool  _siriUODEnabled;
    int  _siriUODMode;
}

@property (nonatomic) bool hasOrchestratorSessionId;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasSiriAsrMode;
@property (nonatomic) bool hasSiriNlMode;
@property (nonatomic) bool hasSiriUODEnabled;
@property (nonatomic) bool hasSiriUODMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *orchestratorSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) int siriAsrMode;
@property (nonatomic) int siriNlMode;
@property (nonatomic) bool siriUODEnabled;
@property (nonatomic) int siriUODMode;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOrchestratorSessionId;
- (void)deleteRequestType;
- (void)deleteSiriAsrMode;
- (void)deleteSiriNlMode;
- (void)deleteSiriUODEnabled;
- (void)deleteSiriUODMode;
- (id)dictionaryRepresentation;
- (bool)hasOrchestratorSessionId;
- (bool)hasRequestType;
- (bool)hasSiriAsrMode;
- (bool)hasSiriNlMode;
- (bool)hasSiriUODEnabled;
- (bool)hasSiriUODMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)orchestratorSessionId;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setHasOrchestratorSessionId:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSiriAsrMode:(bool)arg1;
- (void)setHasSiriNlMode:(bool)arg1;
- (void)setHasSiriUODEnabled:(bool)arg1;
- (void)setHasSiriUODMode:(bool)arg1;
- (void)setOrchestratorSessionId:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSiriAsrMode:(int)arg1;
- (void)setSiriNlMode:(int)arg1;
- (void)setSiriUODEnabled:(bool)arg1;
- (void)setSiriUODMode:(int)arg1;
- (int)siriAsrMode;
- (int)siriNlMode;
- (bool)siriUODEnabled;
- (int)siriUODMode;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
