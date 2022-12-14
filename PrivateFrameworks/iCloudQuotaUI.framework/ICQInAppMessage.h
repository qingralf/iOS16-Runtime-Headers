/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQInAppMessage : NSObject <NSSecureCoding> {
    NSArray * _actions;
    unsigned long long  _contentType;
    NSString * _identifier;
    NSString * _sfSymbolName;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *sfSymbolName;
@property (nonatomic, readonly, copy) NSString *subTitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)airplaneMode;
+ (id)quotaAlmostFull;
+ (id)quotaFull;
+ (id)serverUnreachable;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (unsigned long long)contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(unsigned long long)arg1 identifier:(id)arg2 title:(id)arg3 subTitle:(id)arg4 sfSymbolName:(id)arg5 actions:(id)arg6;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)sfSymbolName;
- (id)subTitle;
- (id)title;

@end
