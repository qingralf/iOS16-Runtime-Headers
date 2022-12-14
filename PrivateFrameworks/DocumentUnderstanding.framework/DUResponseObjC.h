/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentUnderstanding.framework/DocumentUnderstanding
 */

@interface DUResponseObjC : NSObject {
    _TtC21DocumentUnderstanding10DUResponse * _underlying;
}

@property (nonatomic, copy) DULanguageTaggingResponseObjC *languageTags;
@property (nonatomic, copy) DUProductClassificationResponseObjC *productCategories;
@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;
@property (nonatomic, copy) DUStructuredEntityResponseObjC *structuredEntities;
@property (nonatomic, copy) DUTopicDetectionResponseObjC *topics;

- (void).cxx_destruct;
- (id)init;
- (id)languageTags;
- (id)productCategories;
- (id)responseDebugInfo;
- (void)setLanguageTags:(id)arg1;
- (void)setProductCategories:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setStructuredEntities:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)structuredEntities;
- (id)topics;

@end
