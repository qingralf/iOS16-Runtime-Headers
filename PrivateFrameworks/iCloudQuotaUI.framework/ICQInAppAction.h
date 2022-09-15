/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQInAppAction : NSObject <NSSecureCoding> {
    NSString * _title;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)performAction;
- (void)performActionWithContext:(id)arg1;
- (id)title;
- (id)type;

@end