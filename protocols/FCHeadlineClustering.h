/* Generated by RuntimeBrowser.
 */

@protocol FCHeadlineClustering <NSObject>

@required

- (FCClusteredHeadlines *)clusterHeadlinesByTopic:(NSArray *)arg1 subscribedTags:(FCSubscribedTags *)arg2 favoritesPersonalizer:(id <FCFavoritesPersonalizer>)arg3 personalizer:(id <FCFeedPersonalizing>)arg4 rules:(FCHeadlineClusteringRules *)arg5 translationProvider:(id <FCTranslationProvider>)arg6 unpaidHeadlineIDs:(NSSet *)arg7 ignoreTagIDs:(NSSet *)arg8;

@end