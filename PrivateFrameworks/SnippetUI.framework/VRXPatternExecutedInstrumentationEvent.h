/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SnippetUI.framework/SnippetUI
 */

@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent {
    _TtC9SnippetUI17RFPatternExecuted * _patternExecuted;
    NSString * _patternId;
    NSString * _patternType;
    NSString * _responseMode;
}

@property (readonly) _TtC9SnippetUI17RFPatternExecuted *patternExecuted;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic, retain) NSString *patternType;
@property (nonatomic, retain) NSString *responseMode;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init:(id)arg1 patternType:(id)arg2 responseMode:(id)arg3;
- (id)patternExecuted;
- (id)patternId;
- (id)patternType;
- (id)responseMode;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(id)arg1;
- (void)setResponseMode:(id)arg1;

@end
