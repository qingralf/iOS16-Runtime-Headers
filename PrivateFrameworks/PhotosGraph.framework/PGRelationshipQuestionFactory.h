/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory

+ (id)displayStringForRelationshipLabel:(id)arg1;
+ (id)localFactoryScoreByRelationshipLabels;
+ (id)relationshipLabelsRequiringInitialQuestion;
+ (id)relationshipTypesByRelationshipLabel;

- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)initialQuestionForRelationshipLabel:(id)arg1;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)updateInitialQuestion:(id)arg1;

@end
