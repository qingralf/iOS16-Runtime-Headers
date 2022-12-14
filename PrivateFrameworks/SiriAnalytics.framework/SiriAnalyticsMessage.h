/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsMessage : NSObject {
    SiriAnalyticsLogicalTimeStamp * _logicalTimestamp;
    SISchemaTopLevelUnionType * _underlyingMessage;
}

@property (nonatomic, retain) SiriAnalyticsLogicalTimeStamp *logicalTimestamp;
@property (nonatomic, retain) SISchemaTopLevelUnionType *underlyingMessage;

- (void).cxx_destruct;
- (id)logicalTimestamp;
- (void)setLogicalTimestamp:(id)arg1;
- (void)setUnderlyingMessage:(id)arg1;
- (id)storageRepresentation;
- (id)underlyingMessage;

@end
