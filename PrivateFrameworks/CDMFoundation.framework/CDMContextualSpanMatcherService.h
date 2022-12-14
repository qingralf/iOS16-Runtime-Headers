/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMContextualSpanMatcherService : CDMDAGBaseService {
    ContextualSpanMatcher * _contextualSpanMatcher;
    NSArray * _overrideSpansForReplay;
}

@property (nonatomic, retain) ContextualSpanMatcher *contextualSpanMatcher;
@property (nonatomic, readonly) NSArray *overrideSpansForReplay;

- (void).cxx_destruct;
- (id)contextualSpanMatcher;
- (id)getContextualSpansInternal:(id)arg1;
- (id)getPredictor;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (bool)isAssetRequired;
- (bool)isEnabled;
- (id)overrideSpansForReplay;
- (void)setContextualSpanMatcher:(id)arg1;
- (id)setup:(id)arg1;

@end
