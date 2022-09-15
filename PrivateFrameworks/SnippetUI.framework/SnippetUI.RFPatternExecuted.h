/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SnippetUI.framework/SnippetUI
 */

@interface SnippetUI.RFPatternExecuted : VRXTurnBasedInstrumentationEvent {
    void instrumentationClient;
    void patternId;
    void patternType;
    void responseMode;
}

@property (nonatomic, readonly) NSString *patternId;
@property (nonatomic, readonly) NSString *patternType;
@property (nonatomic, readonly) NSString *responseMode;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;
- (id)initWithPatternId:(id)arg1 patternType:(id)arg2 responseMode:(id)arg3;
- (id)patternId;
- (id)patternType;
- (id)responseMode;

@end