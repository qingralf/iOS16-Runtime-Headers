/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMPSCResponseCommand : CDMBaseCommand {
    int  _classLabel;
    NSArray * _pscParses;
    SIRINLUINTERNALITFMITFMParserResponse * _pscResponse;
}

@property int classLabel;
@property (nonatomic, readonly) NSArray *pscParses;
@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserResponse *pscResponse;

- (void).cxx_destruct;
- (int)classLabel;
- (id)commandName;
- (id)initWithPscParses:(id)arg1 pscResponse:(id)arg2;
- (id)pscParses;
- (id)pscResponse;
- (void)setClassLabel:(int)arg1;

@end
