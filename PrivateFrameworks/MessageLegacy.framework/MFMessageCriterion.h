/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageCriterion : NSObject <EDSearchableCriterion, NSCopying> {
    unsigned int  _allCriteriaMustBeSatisfied;
    NSArray * _criteria;
    NSString * _criterionIdentifier;
    unsigned int  _dateIsRelative;
    int  _dateUnitType;
    NSString * _expression;
    bool  _expressionIsSanitized;
    NSArray * _expressionLanguages;
    unsigned int  _includeRelatedMessages;
    bool  _includeRemoteBodyContent;
    EFMutableInt64Set * _libraryIdentifiers;
    NSString * _name;
    bool  _preferFullTextSearch;
    int  _qualifier;
    NSArray * _requiredHeaders;
    CSSuggestion * _suggestion;
    long long  _type;
    NSString * _uniqueId;
    bool  _useFlaggedForUnreadCount;
}

@property (nonatomic, copy) NSArray *criteria;
@property (nonatomic, retain) NSString *criterionIdentifier;
@property (nonatomic) long long criterionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *expression;
@property (nonatomic) bool expressionIsSanitized;
@property (nonatomic, copy) NSArray *expressionLanguages;
@property (getter=isFullTextSearchableCriterion, nonatomic, readonly) bool fullTextSearchableCriterion;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeRelatedMessages;
@property (nonatomic) bool includeRemoteBodyContent;
@property (nonatomic, retain) EFMutableInt64Set *libraryIdentifiers;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool preferFullTextSearch;
@property (nonatomic) int qualifier;
@property (nonatomic, copy) CSSuggestion *suggestion;
@property (readonly) Class superclass;
@property (nonatomic) bool useFlaggedForUnreadCount;

+ (id)_criterionForDateReceivedBetween:(id)arg1 endDate:(id)arg2;
+ (id)_criterionForDateReceivedBetweenDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)_todayDateComponents;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)ccMeCriterion;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(bool)arg2;
+ (id)criterionExcludingMailboxes:(id)arg1;
+ (id)criterionForAccount:(id)arg1;
+ (id)criterionForConversationID:(long long)arg1;
+ (id)criterionForDateReceivedNewerThanDate:(id)arg1;
+ (id)criterionForDateReceivedOlderThanDate:(id)arg1;
+ (id)criterionForDocumentID:(id)arg1;
+ (id)criterionForFlagColor:(unsigned long long)arg1;
+ (id)criterionForLibraryID:(id)arg1;
+ (id)criterionForMailbox:(id)arg1;
+ (id)criterionForMailboxPredictionMessageQuery:(unsigned long long)arg1 variable:(id)arg2;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)criterionForNotDeletedConversationID:(long long)arg1;
+ (id)criterionFromDefaultsDictionary:(id)arg1;
+ (long long)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)defaultsDictionaryFromCriterion:(id)arg1;
+ (id)expressionForDate:(id)arg1;
+ (id)flaggedMessageCriterion;
+ (id)followUpMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)includesMeCriterion;
+ (id)lastWeekMessageCriterion;
+ (id)matchEverythingCriterion;
+ (id)matchNothingCriterion;
+ (id)messageCriterionForUnsubscribeTypeNotMatching:(long long)arg1;
+ (id)messageIsDeletedCriterion:(bool)arg1;
+ (id)messageIsJournaledCriterion:(bool)arg1;
+ (id)messageIsServerSearchResultCriterion:(bool)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)readLaterMessageCriterion;
+ (id)readMessageCriterion;
+ (id)sendLaterMessageCriterion;
+ (id)senderIsVIPCriterion:(bool)arg1;
+ (id)stringForCriterionType:(long long)arg1;
+ (id)threadMuteMessageCriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)toMeCriterion;
+ (id)todayMessageCriterion;
+ (id)unreadMessageCriterion;
+ (id)yesterdayMessageCriterion;

- (void).cxx_destruct;
- (id)SQLExpressionWithContext:(id)arg1 depth:(unsigned int)arg2;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(bool)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 propertyMapper:(id)arg6;
- (id)_SQLExpressionForMailboxCriterion;
- (void)_addCriteriaSatisfyingPredicate:(int (*)arg1 toCollector:(id)arg2;
- (id)_attributesForHeaderCriterion;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(bool)arg2 collapsedIndexes:(id*)arg3;
- (id)_comparisonOperationMatchingValue:(id)arg1 qualifier:(int)arg2;
- (bool)_containsNotCriterion;
- (id)_criterionForSQL;
- (bool)_evaluateAccountCriterion:(id)arg1;
- (bool)_evaluateAddressBookCriterion:(id)arg1;
- (bool)_evaluateAddressHistoryCriterion:(id)arg1;
- (bool)_evaluateAttachmentCriterion:(id)arg1;
- (bool)_evaluateCompoundCriterion:(id)arg1;
- (bool)_evaluateConversationIDCriterion:(id)arg1;
- (bool)_evaluateDateCriterion:(id)arg1;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (bool)_evaluateFlagCriterion:(id)arg1;
- (bool)_evaluateFullNameCriterion:(id)arg1;
- (bool)_evaluateHeaderCriterion:(id)arg1;
- (bool)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (bool)_evaluateIsEncryptedCriterion:(id)arg1;
- (bool)_evaluateMailboxCriterion:(id)arg1;
- (bool)_evaluatePartOfStructure:(id)arg1;
- (bool)_evaluatePriorityIsHighCriterion:(id)arg1;
- (bool)_evaluatePriorityIsLowCriterion:(id)arg1;
- (bool)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (bool)_evaluateReadLaterCriterion:(id)arg1;
- (bool)_evaluateSenderBucketCriterion:(id)arg1;
- (bool)_evaluateSenderHeaderCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (id)_qualifierString;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)_spotlightQuerySearchString:(id*)arg1;
- (bool)allCriteriaMustBeSatisfied;
- (unsigned int)bestBaseTable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)criteriaForSpotlightCriteria:(id)arg1;
- (id)criteriaSatisfyingPredicate:(int (*)arg1;
- (id)criterionByApplyingTransform:(id /* block */)arg1;
- (id)criterionForSQL;
- (id)criterionIdentifier;
- (long long)criterionType;
- (id)daBasicSearchString;
- (id)daSearchPredicate;
- (id)dateFromExpression;
- (bool)dateIsRelative;
- (int)dateUnits;
- (id)description;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (bool)doesMessageSatisfyCriterion:(id)arg1;
- (id)expression;
- (bool)expressionIsSanitized;
- (id)expressionLanguages;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (id)fixOnce;
- (bool)hasLibraryIDCriterion;
- (bool)hasNonFullTextSearchableCriterion;
- (unsigned long long)hash;
- (bool)includeRelatedMessages;
- (bool)includeRemoteBodyContent;
- (bool)includesCriterionSatisfyingPredicate:(int (*)arg1 restrictive:(bool)arg2;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(bool)arg2;
- (id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFullTextSearchableCriterion;
- (bool)isVIPCriterion;
- (id)libraryIdentifiers;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)name;
- (bool)preferFullTextSearch;
- (int)qualifier;
- (void)setAllCriteriaMustBeSatisfied:(bool)arg1;
- (void)setCriteria:(id)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (void)setCriterionType:(long long)arg1;
- (void)setDateIsRelative:(bool)arg1;
- (void)setDateUnits:(int)arg1;
- (void)setExpression:(id)arg1;
- (void)setExpressionIsSanitized:(bool)arg1;
- (void)setExpressionLanguages:(id)arg1;
- (void)setIncludeRelatedMessages:(bool)arg1;
- (void)setIncludeRemoteBodyContent:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreferFullTextSearch:(bool)arg1;
- (void)setQualifier:(int)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setUseFlaggedForUnreadCount:(bool)arg1;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (id)spotlightQueryExpression;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (id)suggestion;
- (id)unreadCountCriterion;
- (bool)useFlaggedForUnreadCount;

@end