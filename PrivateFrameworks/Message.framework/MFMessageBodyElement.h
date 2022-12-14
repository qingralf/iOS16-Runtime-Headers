/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    int  _attributes;
    unsigned long long  _externalRetainCount;
    NSArray * _nodes;
    MFMessageBodyParser * _parser;
    unsigned long long  _quoteLevel;
    int  _validAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) MFMessageBodyParser *parser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasValueForAttributes:(int)arg1;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)getQuoteLevel;
- (id)init;
- (bool)isExternallyRetained;
- (id)nodes;
- (id)parser;
- (unsigned long long)quoteLevel;
- (void)releaseExternally;
- (void)reset;
- (id)retainExternally;
- (void)setNodes:(id)arg1;
- (void)setParser:(id)arg1;
- (int)valueForAttributes:(int)arg1;

@end
