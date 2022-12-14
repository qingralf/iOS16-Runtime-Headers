/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardTextActionItem : NSObject <PKDashboardItem> {
    id /* block */  _action;
    long long  _actionStyle;
    long long  _layoutStyle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) long long actionStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)identifier;

- (void).cxx_destruct;
- (id /* block */)action;
- (long long)actionStyle;
- (long long)layoutStyle;
- (void)setAction:(id /* block */)arg1;
- (void)setActionStyle:(long long)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
