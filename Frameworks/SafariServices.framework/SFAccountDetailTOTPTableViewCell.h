/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    NSTimer * _codeUpdateTimer;
    WBSTOTPGenerator * _generator;
    UIStackView * _labelStackView;
    UILabel * _subtitleLabel;
    UIListContentView * _verificationCodeContentView;
}

- (void).cxx_destruct;
- (id)_attributedSubtitleString;
- (id)_attributedSubtitleStringWithRemainingSeconds:(unsigned long long)arg1;
- (id)_formattedCode;
- (void)_startTOTPTimer;
- (void)_updateCodeAndLabels;
- (void)configureWithGenerator:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
