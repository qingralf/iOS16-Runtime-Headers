/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUVendorSpecificSubtitleView : UIView <MRUVisualStylingProviderObserver> {
    long long  _cellType;
    MRUVendorSpecificTableViewCell * _containerCell;
    UIStackView * _contentView;
    NSString * _protocolName;
    UILabel * _protocolNameLabel;
    long long  _state;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic) long long cellType;
@property (nonatomic) MRUVendorSpecificTableViewCell *containerCell;
@property (nonatomic, retain) UIStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *protocolName;
@property (nonatomic, retain) UILabel *protocolNameLabel;
@property (nonatomic) long long state;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)cellType;
- (id)containerCell;
- (id)contentView;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)protocolName;
- (id)protocolNameLabel;
- (void)setCellType:(long long)arg1;
- (void)setContainerCell:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setProtocolName:(id)arg1;
- (void)setProtocolNameLabel:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)stylingProvider;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
