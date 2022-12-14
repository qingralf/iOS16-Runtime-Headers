/* Generated by RuntimeBrowser.
 */

@protocol FCTagProviding <NSObject, NFCopying>

@required

- (NSArray *)allowedStorefrontIDs;
- (NSString *)articleRecirculationConfigJSON;
- (<FCChannelProviding> *)asChannel;
- (<FCSectionProviding> *)asSection;
- (<FCSportsProviding> *)asSports;
- (<FCTopicProviding> *)asTopic;
- (NSURL *)authorizationURL;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)compactDisplayName;
- (long long)contentProvider;
- (FCAssetHandle *)coverImageAssetHandle;
- (NSString *)displayName;
- (NSString *)feedIDForBin:(long long)arg1;
- (FCAssetHandle *)feedNavImageAssetHandle;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (FCColor *)groupDarkStyleTitleColor;
- (NSString *)groupName;
- (FCColor *)groupTitleColor;
- (unsigned long long)groupingEligibility;
- (bool)hideAccessoryText;
- (NSString *)highlightsArticleListID;
- (NSArray *)iAdCategories;
- (NSArray *)iAdKeywords;
- (NSString *)identifier;
- (bool)isArticleReadCountReportingEnabled;
- (bool)isAuthenticationSetup;
- (bool)isAutoDarkModeEnabled;
- (bool)isBlockedExplicitContent;
- (bool)isDeprecated;
- (bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isInternal;
- (bool)isLocal;
- (bool)isMagazine;
- (bool)isNewspaper;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isRealTimeTrackingEnabled;
- (bool)isSandbox;
- (bool)isSensitiveTopic;
- (bool)isSports;
- (bool)isSubscribable;
- (NSString *)language;
- (NSDate *)loadDate;
- (NSString *)magazineGenre;
- (long long)minimumNewsVersion;
- (NSString *)name;
- (NSString *)nameCompact;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageLargeAssetHandle;
- (FCAssetHandle *)nameImageLargeMaskAssetHandle;
- (FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
- (FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
- (FCPaywallConfiguration *)paidBundlePaywallConfiguration;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (FCPurchaseOfferableConfiguration *)prefetchPurchaseOffer;
- (NSString *)primaryAudience;
- (NSString *)publisherPaidAuthorizationURL;
- (NSArray *)publisherPaidBundlePurchaseIDs;
- (NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
- (NSArray *)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (NSArray *)publisherPaidOfferableConfigurations;
- (NSString *)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (NSString *)publisherPaidWebAccessURL;
- (NSArray *)publisherSpecifiedArticleIDs;
- (NSDate *)publisherSpecifiedArticleIDsModifiedDate;
- (NSString *)replacementID;
- (long long)score;
- (void)setTitleDisplayPrefix:(NSString *)arg1;
- (<FCTagProviding> *)setTitleDisplayPrefixOverride:(NSString *)arg1;
- (void)setTitleDisplaySuffix:(NSString *)arg1;
- (<FCTagProviding> *)setTitleDisplaySuffixOverride:(NSString *)arg1;
- (FCSportsRecommendationMappings *)sportsRecommendationMappings;
- (NSData *)sportsRecommendationMappingsJSON;
- (<FCTagStocksFields> *)stocksFields;
- (double)subscriptionRate;
- (NSString *)subtitle;
- (NSString *)superfeedConfigResourceID;
- (unsigned long long)tagType;
- (<FCFeedTheming> *)theme;
- (NSString *)titleDisplayPrefix;
- (NSString *)titleDisplaySuffix;
- (unsigned long long)userFacingTagType;
- (NSString *)versionKey;

@optional

- (NSData *)backingTagRecordData;

@end
