/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.SearchViewController : UIViewController <TSSearchResultsPanable, UICollectionViewDelegate, UISearchBarDelegate, UISearchControllerDelegate> {
    void blueprintViewController;
    void clearAction;
    void eventHandler;
    void origination;
    void refreshQueryParam;
    void refreshRecentSearch;
    void sceneStateManager;
    void searchAction;
    void searchBar;
    void sharingActivityProviderFactory;
    void styler;
    void toolbarManager;
}

@property (nonatomic, readonly) bool isSearchResultsPane;

- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSearchResultsPane;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end