/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore
 */

@interface FBKQuestionGroup : FBKManagedFeedbackObject

@property (retain) FBKBugForm *bugForm;
@property (nonatomic, retain) NSOrderedSet *primitiveQuestions;
@property (retain) NSArray *questions;
@property (retain) NSNumber *sortOrder;
@property (retain) NSString *title;

+ (id)entityName;

- (id)description;
- (bool)isFileCollectionGroup;
- (id)questionWithRole:(id)arg1;
- (id)questions;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setQuestions:(id)arg1;

@end
