/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPayLaterSubtitleRow : NSObject <PKPayLaterCollectionViewRow> {
    id /* block */  _selectionHandler;
    bool  _showSpinner;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    UIColor * _subtitleTextColor;
    NSString * _title;
    UIFont * _titleFont;
    UIImage * _titleIcon;
    UIColor * _titleTextColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool showSpinner;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, copy) UIImage *titleIcon;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 selectionHandler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleIcon:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (bool)shouldHighlightItem;
- (bool)showSpinner;
- (id)subtitle;
- (id)subtitleFont;
- (id)subtitleTextColor;
- (id)title;
- (id)titleFont;
- (id)titleIcon;
- (id)titleTextColor;

@end