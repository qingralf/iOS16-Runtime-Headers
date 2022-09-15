/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMGenericSendCommand : CDMBaseCommand {
    _TtC13CDMFoundation14CDMNluResponse * _cdmNluResponse;
    NSString * _clientId;
    SIRINLUResponse * _nluResponse;
    SIRINLUINTERNALPreprocessingWrapper * _preprocessingWrapper;
}

@property (nonatomic, readonly) _TtC13CDMFoundation14CDMNluResponse *cdmNluResponse;
@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) SIRINLUResponse *nluResponse;
@property (nonatomic, readonly) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

- (void).cxx_destruct;
- (id)cdmNluResponse;
- (id)clientId;
- (id)commandName;
- (id)initWithCDMNluResponse:(id)arg1 clientId:(id)arg2;
- (id)initWithError:(id)arg1 clientId:(id)arg2;
- (id)initWithPreprocessingWrapper:(id)arg1 clientId:(id)arg2;
- (id)nluResponse;
- (id)preprocessingWrapper;

@end