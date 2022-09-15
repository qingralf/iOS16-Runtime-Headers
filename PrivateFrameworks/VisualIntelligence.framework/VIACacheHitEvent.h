/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIACacheHitEvent : NSObject <VIAEvent> {
    unsigned long long  _cachedResultQueryID;
    NSString * _originatingApplication;
    unsigned long long  _queryID;
}

@property (nonatomic, readonly) unsigned long long cachedResultQueryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedResultQueryID;
- (id)feedback;
- (id)initWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 originatingApplication:(id)arg3;
- (id)originatingApplication;
- (unsigned long long)queryID;

@end