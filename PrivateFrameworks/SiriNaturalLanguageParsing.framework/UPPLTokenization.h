/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNaturalLanguageParsing.framework/SiriNaturalLanguageParsing
 */

@interface UPPLTokenization : NSObject {
    NSString * _normalizedUtterance;
    NSString * _originalUtterance;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSString *normalizedUtterance;
@property (nonatomic, readonly) NSString *originalUtterance;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTokens:(id)arg1 originalUtterance:(id)arg2 normalizedUtterance:(id)arg3;
- (id)normalizedUtterance;
- (id)originalUtterance;
- (id)tokens;

@end
