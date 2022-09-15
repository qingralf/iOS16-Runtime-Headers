/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFExperimentTriggeredFeedback : SFFeedback {
    SFCounterfactualInfo * _counterfactual;
}

@property (nonatomic, retain) SFCounterfactualInfo *counterfactual;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)counterfactual;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCfDiffered:(bool)arg1 cfUsed:(bool)arg2 cfError:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setCounterfactual:(id)arg1;

@end