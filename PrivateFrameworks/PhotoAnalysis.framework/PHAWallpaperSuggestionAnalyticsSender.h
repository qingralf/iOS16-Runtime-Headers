/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWallpaperSuggestionAnalyticsSender : NSObject {
    CPAnalytics * _analytics;
    PGWallpaperLibraryAnalysisSummary * _libraryAnalysisSummary;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PGManagerWorkingContext * _workingContext;
}

+ (id)analyticsPayloadForLibraryAnalysisSummary:(id)arg1;
+ (struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; })suggestionStatisticsFromSuggestions:(id)arg1;

- (void).cxx_destruct;
- (long long)eligiblePetsCount;
- (id)existingSuggestionSummary;
- (id)generationSummaryWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)arg1;
- (id)initWithGraphManager:(id)arg1 libraryAnalysisSummary:(id)arg2;
- (id)peoplePetSummary;
- (void)sendGenerationSummaryEventWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)arg1;
- (void)sendRefreshSummaryEventWithPosterConfiguration:(id)arg1;
- (long long)shufflePickerVisiblePeopleCount;

@end
