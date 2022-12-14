/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUVendorSpecificTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, MRUVolumeControllerDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    <MRUVendorSpecificTableViewCellDelegate> * _delegate;
    UIImage * _deviceIconImage;
    UIImageView * _deviceIconImageView;
    NSString * _deviceName;
    UILabel * _deviceNameLabel;
    UIImageView * _expandChevronView;
    UITapGestureRecognizer * _expandGestureRecognizer;
    bool  _expanded;
    UIImage * _protocolIcon;
    NSString * _protocolName;
    MRURoutingAccessoryView * _routingAccessoryView;
    UIView * _separatorView;
    MRUVisualStylingProvider * _stylingProvider;
    MRURoutingSubtitleController * _subtitleStateController;
    MRURoutingSubtitleView * _subtitleView;
    long long  _type;
    MRUVolumeController * _volumeController;
    MRUSlider * _volumeSlider;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUVendorSpecificTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *deviceIconImage;
@property (nonatomic, retain) UIImageView *deviceIconImageView;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) UILabel *deviceNameLabel;
@property (nonatomic, retain) UIImageView *expandChevronView;
@property (nonatomic, retain) UITapGestureRecognizer *expandGestureRecognizer;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *protocolIcon;
@property (nonatomic, copy) NSString *protocolName;
@property (nonatomic, readonly) MRURoutingAccessoryView *routingAccessoryView;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, readonly) MRURoutingSubtitleController *subtitleStateController;
@property (nonatomic, retain) MRURoutingSubtitleView *subtitleView;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic) MRUVolumeController *volumeController;
@property (nonatomic, retain) MRUSlider *volumeSlider;

- (void).cxx_destruct;
- (void)adjustExpandChevronAngle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)delegate;
- (id)deviceIconImage;
- (id)deviceIconImageView;
- (id)deviceName;
- (id)deviceNameLabel;
- (void)didTapToExpand;
- (id)expandChevronView;
- (id)expandGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandRect;
- (bool)expanded;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (id)protocolIcon;
- (id)protocolName;
- (id)routingAccessoryView;
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 icon:(id)arg3 accessory:(long long)arg4;
- (id)separatorView;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIconImage:(id)arg1;
- (void)setDeviceIconImageView:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceNameLabel:(id)arg1;
- (void)setExpandChevronView:(id)arg1;
- (void)setExpandGestureRecognizer:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setProtocolIcon:(id)arg1;
- (void)setProtocolName:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleAccessory:(long long)arg1;
- (void)setSubtitleView:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sliderValueChanged:(id)arg1;
- (id)stylingProvider;
- (id)subtitleStateController;
- (id)subtitleView;
- (long long)type;
- (void)updateContentSizeCategory;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (id)volumeController;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeSlider;

@end
