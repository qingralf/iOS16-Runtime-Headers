/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    ATXHomeScreenConfigCache * _homeScreenConfigCache;
}

- (void).cxx_destruct;
- (id)_filterCandidates_trendingAppLaunchPopularity:(id)arg1;
- (id)_filterCandidates_widgetExistsOnScreen:(id)arg1;
- (id)filterCandidatesBySuggestionRequirements:(id)arg1;
- (id)init;
- (id)initWithHomeScreenConfigCache:(id)arg1 appLaunchHistogramManager:(id)arg2;

@end