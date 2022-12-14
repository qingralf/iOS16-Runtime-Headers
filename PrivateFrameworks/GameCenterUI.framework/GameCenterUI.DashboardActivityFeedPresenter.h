/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GameCenterUI.DashboardActivityFeedPresenter : GameCenterUI.BasePresenter {
    void dashboardDisplayMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void sections;
}

@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithPlayerId:(id)arg1;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (id)title;
- (void)updateSnapshot;

@end
