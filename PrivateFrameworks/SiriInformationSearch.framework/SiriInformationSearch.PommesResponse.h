/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInformationSearch.framework/SiriInformationSearch
 */

@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void clientResults;
    void conversationContext;
    void experiences;
    void isHandledByPreflight;
    void listenAfterSpeaking;
    void metadataDomainName;
    void pegasusDomainFlowStepLog;
    void pegasusDomainUserSensitiveTier1Log;
    void renderedTexts;
    void requestId;
    void resultCandidateId;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
