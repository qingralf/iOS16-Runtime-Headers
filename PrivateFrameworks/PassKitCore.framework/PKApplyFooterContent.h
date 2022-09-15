/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyFooterContent : NSObject <NSCopying> {
    NSString * _footerText;
    NSArray * _links;
    bool  _shouldDisplayInline;
}

@property (nonatomic, copy) NSString *footerText;
@property (nonatomic, copy) NSArray *links;
@property (nonatomic) bool shouldDisplayInline;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)footerText;
- (id)initWithDictionary:(id)arg1;
- (id)links;
- (void)setFooterText:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setShouldDisplayInline:(bool)arg1;
- (bool)shouldDisplayInline;
- (id)termsIdentifiers;

@end