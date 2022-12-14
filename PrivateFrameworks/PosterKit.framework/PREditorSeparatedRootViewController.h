/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit
 */

@interface PREditorSeparatedRootViewController : PREditorRootViewController {
    UIView * _overscrollView;
    UIView * _underscrollView;
    NSMutableDictionary * _viewsForLook;
}

@property (nonatomic, retain) UIView *overscrollView;
@property (nonatomic, retain) UIView *underscrollView;

- (void).cxx_destruct;
- (id)currentLookViews;
- (void)loadView;
- (void)looksDidChange;
- (void)looksWillChange;
- (id)overscrollView;
- (void)setOverscrollView:(id)arg1;
- (void)setUnderscrollView:(id)arg1;
- (id)underscrollView;
- (void)viewDidLayoutSubviews;
- (id)viewsForLook:(id)arg1;

@end
