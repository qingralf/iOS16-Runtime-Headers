/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKTransitConnectionCell : MKCustomSeparatorCell {
    UIButton * _button;
    <GEOTransitConnectionInfo> * _connectionInfo;
    <_MKTransitConnectionCellDelegate> * _delegate;
    _MKUILabel * _nameLabel;
    NSLayoutConstraint * _nameLabelToTopConstraint;
    MKTransitInfoLabelView * _transitInfoLabel;
    NSLayoutConstraint * _transitInfoToNameConstraint;
}

@property (nonatomic, retain) <GEOTransitConnectionInfo> *connectionInfo;
@property (nonatomic) <_MKTransitConnectionCellDelegate> *delegate;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)connectionInfo;
- (void)dealloc;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setConnectionInfo:(id)arg1;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end