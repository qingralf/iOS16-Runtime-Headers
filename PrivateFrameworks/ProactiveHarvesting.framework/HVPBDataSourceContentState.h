/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveHarvesting.framework/ProactiveHarvesting
 */

@interface HVPBDataSourceContentState : PBCodable <NSCopying> {
    NSMutableArray * _deferredContentStates;
}

@property (nonatomic, retain) NSMutableArray *deferredContentStates;

+ (Class)deferredContentStatesType;

- (void).cxx_destruct;
- (void)addDeferredContentStates:(id)arg1;
- (void)clearDeferredContentStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredContentStates;
- (id)deferredContentStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deferredContentStatesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeferredContentStates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
