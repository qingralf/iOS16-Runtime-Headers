/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SIOrderedEvent : NSObject <BMStoreData> {
    SIOrderedEventInternal * _underlying;
    SILogicalTimestamp * _underlyingTimestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SILogicalTimestamp *logicalTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SISchemaTopLevelUnionType *topLevelUnionType;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

+ (id)deserializeFromData:(id)arg1;

- (void).cxx_destruct;
- (id)initWithInternalType:(id)arg1;
- (id)initWithTimestamp:(id)arg1 topLevelUnionType:(id)arg2;
- (id)logicalTimestamp;
- (id)serialize;
- (id)topLevelUnionType;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

// Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

@end