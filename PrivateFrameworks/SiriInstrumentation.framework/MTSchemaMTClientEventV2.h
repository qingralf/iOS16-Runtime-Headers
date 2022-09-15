/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    MTSchemaMTASRStateUpdated * _asrStateUpdated;
    MTSchemaMTBatchRequestContext * _batchRequestContext;
    MTSchemaMTClientEventMetadata * _eventMetadata;
    bool  _hasAsrStateUpdated;
    bool  _hasBatchRequestContext;
    bool  _hasEventMetadata;
    bool  _hasInvocationContext;
    bool  _hasInvocationStartedTier1;
    bool  _hasLocalePairResolved;
    MTSchemaMTInvocationContext * _invocationContext;
    MTSchemaMTInvocationStartedTier1 * _invocationStartedTier1;
    MTSchemaMTLocalePairResolved * _localePairResolved;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic, retain) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic, retain) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAsrStateUpdated;
@property (nonatomic) bool hasBatchRequestContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasInvocationContext;
@property (nonatomic) bool hasInvocationStartedTier1;
@property (nonatomic) bool hasLocalePairResolved;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, retain) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic, retain) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrStateUpdated;
- (id)batchRequestContext;
- (int)clockIsolationLevel;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLocalePairResolved;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAsrStateUpdated;
- (bool)hasBatchRequestContext;
- (bool)hasEventMetadata;
- (bool)hasInvocationContext;
- (bool)hasInvocationStartedTier1;
- (bool)hasLocalePairResolved;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (id)invocationContext;
- (id)invocationStartedTier1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localePairResolved;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAsrStateUpdated:(id)arg1;
- (void)setBatchRequestContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAsrStateUpdated:(bool)arg1;
- (void)setHasBatchRequestContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasInvocationContext:(bool)arg1;
- (void)setHasInvocationStartedTier1:(bool)arg1;
- (void)setHasLocalePairResolved:(bool)arg1;
- (void)setInvocationContext:(id)arg1;
- (void)setInvocationStartedTier1:(id)arg1;
- (void)setLocalePairResolved:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end