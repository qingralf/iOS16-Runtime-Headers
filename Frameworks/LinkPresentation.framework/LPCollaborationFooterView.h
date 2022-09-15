/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCollaborationFooterView : LPComponentView {
    LPCollaborationFooterConfiguration * _configuration;
    LPTextView * _handleView;
    UIImageView * _indicatorView;
    LPTextView * _optionsView;
    UIView * _separatorView;
    LPCollaborationFooterStyle * _style;
}

- (void).cxx_destruct;
- (void)_footerTapRecognized:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutFooterForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 configuration:(id)arg2 style:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateIndicator;

@end