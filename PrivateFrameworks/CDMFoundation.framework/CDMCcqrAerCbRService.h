/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMCcqrAerCbRService : CDMDAGBaseService {
    QueryRewriter * _ccqrPredictor;
    int  _modelType;
    _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy * _overrideProxy;
    bool  _useMemoryForOverrideStore;
}

@property (nonatomic, retain) QueryRewriter *ccqrPredictor;
@property (nonatomic, readonly) int modelType;
@property (nonatomic) bool useMemoryForOverrideStore;

+ (void)CcqrAerCbRServiceLogInitIfNeeded;
+ (id)assetFolderNames;
+ (bool)suppressCcqrUsingCurContext:(id)arg1;
+ (bool)suppressCcqrUsingRdResponse:(id)arg1 responseCommand:(id)arg2;
+ (id)trialFactorName;

- (void).cxx_destruct;
- (void)addOverride:(id)arg1;
- (id)ccqrPredictor;
- (void)cleanOverride;
- (void)configureUseMemoryForOverrideStore;
- (void)debugCcqrResponse:(id)arg1;
- (id)doInference:(id)arg1 status:(id*)arg2;
- (id)getPredictor:(id)arg1 FilesPath:(id)arg2 modelType:(id)arg3 status:(id*)arg4;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (bool)isAssetRequired;
- (bool)isEnabled;
- (id)match:(id)arg1;
- (int)modelType;
- (void)setCcqrPredictor:(id)arg1;
- (void)setUseMemoryForOverrideStore:(bool)arg1;
- (id)setup:(id)arg1;
- (bool)useMemoryForOverrideStore;

@end