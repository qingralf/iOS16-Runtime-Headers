/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQInlineTipAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionName;
    NSURL * _actionURL;
    NSString * _buttonTitle;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, copy) NSString *buttonTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionName;
- (id)actionURL;
- (id)buttonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setButtonTitle:(id)arg1;

@end